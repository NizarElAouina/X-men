#include "header.h"

void afficher(cellule *L)
{
    cellule *p=NULL;
    p=L;
    while(p!=NULL)
    {
        p=p->suiv;
        printf("%d",p->val);
    }
}


cellule * Q_12(cellule *L,int n)
{
    cellule *nouv=NULL,*p=NULL;
    int i;

    for(i=1;i<=n;i++)
    {
        nouv=(cellule*)malloc(sizeof(cellule));
        nouv->val=i;
        nouv->suiv=NULL;
        if(L==NULL)
        {
           L=nouv;
        }
        else
        {
            while(p->suiv!=NULL)
            {
                p=p->suiv;
            }
            p->suiv=nouv;
            nouv->preced=p;
        }
    }
            p->suiv=L;
            L->preced=p;


    return L;
}






