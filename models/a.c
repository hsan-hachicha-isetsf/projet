// Online C compiler to run C program online
#include <stdio.h>
struct cellule{
    int a;
    struct cellule *suiv;
};

struct cellule * ajoutAudebut(struct cellule *debut,int element)
{
    struct cellule *p;
     p=(struct cellule *)malloc(sizeof(struct cellule));
     p->a=element;
     p->suiv=debut;
     debut=p;
     return debut;
}
struct cellule * ajoutAfin(struct cellule *debut,int element)
{
    struct cellule *p,*temp;
     p=(struct cellule *)malloc(sizeof(struct cellule));
     p->a=element;
     p->suiv=NULL;
     if(debut==NULL)
     debut=p;
     else
     {
         temp=debut;
         while(temp->suiv!=NULL)
         temp=temp->suiv;

        temp->suiv=p;
     }

     return debut;
}


struct cellule * ajoutAumilieu(struct cellule *debut,int element,int v)
{
    struct cellule *p,*temp;
    if(debut!=NULL)
         {
            temp=debut;
            p=(struct cellule *)malloc(sizeof(struct cellule));
            p->a=element;
            while(temp!=NULL && temp->a!=v )
                temp=temp->suiv;
            if(temp!=NULL)
            {
                p->suiv=temp->suiv;
                temp->suiv=p;

            }
            else
                printf("element non existant %d",v);



        }


    return debut;
};

//afficher les elements de la liste
void afficheListe(struct cellule *debut)
{
    struct cellule *p;
    p=debut;
    if(debut=NULL)
    {
        printf("la liste est vide");
    }

    else
    {
        while(p!=NULL){
        printf("%d",p->a);
        p=p->suiv;
        }
    }
}
void  main() {
    struct cellule *l =NULL;
    int n,i,nbr,v;
    printf("donner le nombre des éléments");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&nbr);
       l= ajoutAfin(l,nbr);
    }
    afficheListe(l);
    printf("donner la valeur a chercher");
    scanf("%d",&v);
    printf("donner la valeur a insererer");
    scanf("%d",&nbr);
    l= ajoutAumilieu(l,nbr,v);
    afficheListe(l);

}
