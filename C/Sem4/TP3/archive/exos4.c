#include <stdio.h>
#include <stdlib.h>

// D�finition de la structure du n�ud
typedef struct Node {
    int key; // Cl� du n�ud
    struct Node* left; // Pointeur vers le n�ud fils gauche
    struct Node* right; // Pointeur vers le n�ud fils droit
} Node;

// Fonction pour imprimer un arbre binaire en ordre croissant des cl�s
void printTree(Node *tree) {
    if (!tree) return; // Si l'arbre est vide, retourne
    if (tree->left) printTree(tree->left); // Imprime le sous-arbre gauche
    printf("Cle = %d\n", tree->key); // Imprime la cl� du n�ud actuel
    if (tree->right) printTree(tree->right); // Imprime le sous-arbre droit
}

int main() {
    // Cr�ation d'un arbre binaire simple
    Node* root = (Node*)malloc(sizeof(Node));
    root->key = 10;
    root->left = (Node*)malloc(sizeof(Node));
    root->left->key = 5;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right = (Node*)malloc(sizeof(Node));
    root->right->key = 15;
    root->right->left = NULL;
    root->right->right = NULL;

    // Appel de la fonction pour imprimer l'arbre
    printf("Impression de l'arbre :\n");
    printTree(root);

    // Lib�ration de la m�moire allou�e pour l'arbre
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}

