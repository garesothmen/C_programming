#include<stdio.h>
#include<string.h>
 //exercice1
 typedef struct 
 { int cin ;
 float taille, poids ;
 char genre ;
 } Personne; 
 void saisir( Personne *P)
 {
    printf("donner le cin :");      
    scanf("%f",&P->cin);
    printf("donner la taille:");
    scanf("%d",&P->taille);
    printf("donner le poids :");
    scanf("%f",&P->poids);
    printf("donner le genre :");
    scanf("%c",&P->genre);
 }
 void affichage( Personne P)
 {
    printf("cin:%f",P.cin);
    printf("taille:%f\n",P.taille);
    printf("poids:%f\n",P.poids);
    printf("genre:%s\n",P.genre);
 }
 /*void permuter( Personne *P1 , Personne *P2)
 {
    Personne P3;
    P3.cin=P1.cin;
    P1.cin=P2.cin;
    P2.cin=P3.cin;
    P3.taille=P1.taille;
    P1.taille=P2.taille;
    P2.taille=P3.taille;
    P3.poids=P1.poids;
    P1.poids=P2.poids;
    P2.poids=P3.poids;
    P3.genre=P1.genre;
    P1.genre=P2.genre;
    P2.genre=P3.genre;
   
 }*/
 void main ()
 {
     Personne P1,P2;
     saisir(&P1);saisir(&P2);
     affichage(P1);printf("_________________________________");affichage(P2);
     //permuter(&P1,&P2);
    affichage(P1);
    printf("_________________________________");affichage(P2);
 }
 /*
 //exercice2________________________________________________________________________________________________________________________

typedef struct
{
 double x ; double y ; double z ;
} vect ;
void saisir(vect v)
{
    printf("x=");
    scanf("%f",&v.x);
    printf("y=");
    scanf("%f",&v.y);
    printf("z=");
    scanf("%f",&v.z);
}
vect normaliser(vect v)
{
    vect vn;float n;
    n=sqrt( pow( v.x, 2 ) + pow( v.y, 2 )+ pow( v.z, 2 ) );
    vn.x=v.x/n;
    vn.y=v.y/n;
    vn.z=v.z/n;
    return vn ;
}
void affichage(vect v)
{
    printf( "[%5.2lf,%5.2lf,%5.2lf]\n", v.x, v.y ,v.z);
}
void main()
{
    vect v ;
    saisir(v);
    normaliser(v);
    affichage(v);
    affichage(normaliser(v));

}
//exercice3___________________________________________________________
typedef struct 
{
 int mois ;int annee;
} dt;
typedef struct 
{
    char titre ; char auteur; dt date ;
}livre;
void saisir(int n)
{ livre bib[n];
    for (i=0;i<n;i++)
    {
         printf("titre :");
         scanf("%s'",&bib[i].titre);
         printf("auteur:");
         scanf("%s",&bib[i].auteur);
         printf("date:mm\\aa");
         scanf("%d",&bib[i].date.mois);
         scanf("%d",&bib[i].date.annee);
    }
}
int nombre( livre bib,char x)
{int s=0;
     for (i=0;i<n;i++)
     {
         if(strcamp(bib[i].auteur,x))
         s++;
     }
     return s ;
}
void main ()
{ int n;char x ;
    printf ("n=");
    scanf("%d",&n);
    printf("auteur cherche");
    scanf("%s",x);
    prinf(nombre(saisir(n),x));
}
*/





