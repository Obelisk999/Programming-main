#include <stdio.h> 
#define TAILLE_MAX 5

struct pile
{
int sommet;
int tab[5];
};
typedef struct pile pile;
pile p;

void inti_pile(pile p){
    p.sommet=0;
    return 0;
    
}

int pile_vide(pile p){
    if (p.sommet==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    

}

int pile_pleine(pile p){
    if(p.sommet = 5){
        printf("pile pleine");
    }
    else
    {
        printf("pile non pleine");
    }
    
}

int taille_pille(pile p){
   
if(p.sommet==TAILLE_MAX){
    printf("taille de la pile =%d",p.sommet);
}

}
void empiler (pile p, int x){
    if(p.sommet==5){
        printf("pile pleine");
    }
    else
    {
        p.sommet++;
        p.sommet[p.sommet]=x;
    }
    
}

void Afficher(){
    
}

void depiler (pile p){

}


int main(int argc, char const *argv[])
{
    int item,choice;
int option=1;
printf("\n\timplementation d'une pile");
printf("\nMenu principale");
printf("\n1.empiler \n2.Dépiler \n3.Afficher \n4.exit");
printf("\nEntre votre choix");
scanf("%d",&choice);
switch(choice){
    case 1:
         printf("\n Entrer L'element a empiler:");
         scanf("%d",&item);
         empiler(item);
         break;
    case 2:
         printf("\n Entrer l 'element a depiler");
         scanf("%d",&item);
         int x = depiler(item);
         printf("\nL'element dépiler est %d",x);
         break;
    case 3:
         afficher();
         break;
    case 4:
        exit(0);
}
printf("\nVoulez vous contunier(taper0(Non) ou 1(Oui))?");
scanf("%d",&option);
    return 0;
}
