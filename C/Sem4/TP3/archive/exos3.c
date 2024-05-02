#include <stdio.h>
#include <stdlib.h>

// D�finition de la structure du n�ud
typedef struct Noeud {
    int valeur; // Valeur enti�re du n�ud
    struct Noeud* filsGauche; // Pointeur vers le n�ud fils gauche
    struct Noeud* filsDroite; // Pointeur vers le n�ud fils droit
} Noeud;

// Fonction pour cr�er une feuille avec une valeur donn�e
Noeud cree_feuille(int valeur) {
    Noeud feuille; // Cr�e une feuille
    feuille.valeur = valeur; // Assignation de la valeur du n�ud feuille
    feuille.filsGauche = NULL; // Aucun fils gauche
    feuille.filsDroite = NULL; // Aucun fils droit
    return feuille; // Renvoie la feuille cr��e
}

int main() {
    // Exemple d'utilisation de la fonction cree_feuille()
    Noeud feuille = cree_feuille(42); // Cr�e une feuille avec la valeur 42

    // Affichage de la valeur de la feuille cr��e
    printf("Valeur de la feuille : %d\n", feuille.valeur);

    return 0;
}

