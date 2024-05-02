#include <stdio.h>
#include <stdlib.h>

struct noeud{
    int donne;
    struct noued* gauche;
    struct noeud* droite;
};

struct noeud* creeNoeud(int valeur){
    struct noeud* nouveauNoeud =(struct noeud*)malloc(sizeof(struct noeud));
     if (nouveauNoeud == NULL) {
        printf("Allocation de mémoire échouée.\n");
        exit(EXIT_FAILURE);
    }
    nouveauNoeud->donne = valeur;
    nouveauNoeud->gauche = NULL;
    nouveauNoeud->droite = NULL;

    return nouveauNoeud;
}


struct noeud* ParcoursInfixe(struct noeud* arbre){
    if(arbre==NULL){
        printf("L'arbre est vide");
    }

    ParcoursInfixe(arbre->gauche);
    printf("%d",arbre->donne);
    ParcoursInfixe(arbre->droite);
}

struct noeud* ParcoursPrefixe(struct noeud* arbre){
    if(arbre==NULL){
        printf("L'arbre est vide");
    }
    
    printf("%d",arbre->donne);
    ParcoursPrefixe(arbre->gauche);
    ParcoursPrefixe(arbre->droite);
}

struct noeud* ParcoursPostfixe(struct noeud* arbre){
    if(arbre==NULL){
        printf("L'arbre est vide");
    }

    ParcoursPostfixe(arbre->gauche);
    ParcoursPostfixe(arbre->droite);
    printf("%d",arbre->donne);
}

int taille(struct noeud* arbre){
    if(arbre==NULL){
        return 0;
    }
    else{
        return 1 + taille(arbre->gauche) + tailleArbre(arbre->droite);
    }
}

struct noeud* determinerRacine(struct noeud* arbre) {
    return arbre;
}

struct noeud* arbreVide(struct noeud* arbre){
    if (arbre == NULL){
        printf("l'arbre binaire est vide");
    }
    else{
        printf("l'arbre binaire n'est pas vide");
}
}

int main(){
    struct Noeud* racine = creerNoeud(37);
    racine->gauche = creerNoeud(41);
    racine->gauche->gauche = creerNoeud(13);
    racine->gauche->gauche->droite = creerNoeud(3);
    racine->gauche->gauche->droite->gauche = creerNoeud(5);
    racine->gauche->gauche->droite->droite = creerNoeud(23);
    racine->droite = creerNoeud(2);
    racine->droite->droite = creerNoeud(11);
    racine->droite->gauche = creerNoeud(7);
    racine->droite->droite->gauche = creerNoeud(19);

}

