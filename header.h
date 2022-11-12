#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
    int val;
    struct cell *preced;
    struct cell *suiv;
}cellule;
void afficher(cellule *);
cellule * Q_12(cellule *,int );


#endif // HEADER_H_INCLUDED
