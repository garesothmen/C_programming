#include <stdio.h>
typedef struct Cellule
{
    int val;
    struct Cellule *suivant;
}Cellule;
typedef struct Pile
{   int taille;
    Cellule *premier;
}Pile;
//--------------------------------------------------------------------------
#define head(P) P->debut->val
//--------------------------------------------------------------------------
Pile *Cree_Pile()
{
    Pile *P;P=(Pile*)malloc(sizeof(Pile));
    if (P==NULL){printf("allocation no reussie");
    exit(-1);}
    else{
        P->debut=NULL;
        P->taille=0;
    }return P;

}

//--------------------------------------------------------------------------
void Empiler(Pile *P,int A)
{
    Cellule *C;
    C->val=A;
    C->suivant=P->debut;
    P->debut=C;
    P->taille++;
}

//--------------------------------------------------------------------------
int Depiler(Pile *P)
{
    int R;Cellule *C;
    if (P->taille==0)
    {
        printf("la pile est vide");
    }
    else
    {  C=P->debut;
       R=C->val;
       P->debut=P->debut->suivant;
       free(C);
       P->taile--;
    }
    return R;
}
//--------------------------------------------------------------------------
void affichePile(Pile *P)
{
    Cellule *Current;
    if (P->taille==0)
    {
        printf("la pile est vide\n");
    }
    else
    {
        Current=P->debut;
        for (int i ;i<P->taille;i++)
        {
printf("%d \n",(Current->val));
Current=Current->suivant;
        }
    }
}
//--------------------------------------------------------------------------
void Deteruire(Pile *P)
{
    while (P->taille>0)
    {
        Depiler(P);
    }
    free(P);
}
//--------------------------------------------------------------------------
void Copier(Pile *P1,Pile *P2)
{Pile *F=P1;
    if (P1->taille==0)
    {
        printf("la pile  est vide rien a copier \n");
    }
    else
    {
        while(F->taille>0)
        {
            int R=Depiler(P1);
            if (R%2==0)
                {
                Empiler(P2,R);
                }
         
        }

    }
    Deteruire(F);
}
//--------------------------------------------------------------------------
void Diviser(Pile P1,Pile P2,Pile P3)
{Pile *F=P1;
    if (P1->taille==0)
    {
        printf("la pile  est vide rien a copier \n");
    }
    else
    {
        while(F->taille>0)
        {
            int R=Depiler(P1);
            if (R%2==0)
                {
                Empiler(P2,R);
                }
            else
            {
                Empiler(P3,R);
            }
         
        }

    }
    Deteruire(F);

}
//--------------------------------------------------------------------------
void  Deplacer(Pile *P1,Pile P2)
{   Pile *F=P1;
    Copier(F,P2);
    Diviser(P1,F,P2);
    Deteruire(F);
}
//--------------------------------------------------------------------------





