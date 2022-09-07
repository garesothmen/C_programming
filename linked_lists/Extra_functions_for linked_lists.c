#include<stdio.h>
#include<stdlib.h>

typedef struct Element {
	int data;
	struct Element* suivant;
}Element;

typedef struct
{
	Element* premier;
}Liste;

Liste* initListe()
{
	Liste* L = (Liste*)malloc(sizeof(Liste));
	L->premier = NULL;
	return(L);
}

unsigned ListeVide(Liste* L)
{
	return((L->premier) == NULL);
}

void insereElem(Liste *L,Element *nouveau)
{
	if (L->premier == NULL)
	{
		nouveau->suivant = NULL;
		L->premier = nouveau;
	}
	else
	{
		Element* cur = L->premier;
		while (cur->suivant != NULL)
		{
			cur = cur->suivant;}
			cur->suivant = nouveau;
			nouveau->suivant = NULL;

	}
}

void afficheListe(Liste* L)
{
	Element *cur = L->premier;
	while (cur != NULL)
	{
		printf("%d\n -> ", cur->data);
		cur = cur->suivant;
	}
	if (L->premier == NULL)
		printf("Liste vide");
}

void permutElem(Element **elemA, Element **elemB)
{
    Element *aux;
    aux= *elemA;
    *elemA = *elemB;
    *elemB = tmp;
}
void triListe(Liste* L)
{

}

void main()
{
	Liste* L = initListe();
	Element* element;
	//printf("%d", ListeVide(L));
	for (int i = 0; i < 5; i++)
	{
		element = (Element*)malloc(sizeof(Element));
		printf("data= ");
		scanf("%d", &element->data);
		insereElem(L, element);
	}
	afficheListe(L);
	system("pause");
}
