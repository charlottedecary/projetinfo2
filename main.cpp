#include <iostream>
#include "Affichage.h"
#include "Damier.h"
#include "Case.h"
#include "Pion.h"


using namespace std;

///METHODE DE JOUEUR!
void placerPion(Damier &jeu, Pion *a,int x,int y)
{
    jeu.getCase(x,y)->ajoutpion(a);
    a->bouger(jeu.getCase(x,y));
}

///METHODE DE DAMIER ?
/*void affiche(Damier &jeu)
{
    int ligne = 1;
    int collonne = 1;
    for(int i=0;i<(jeu.getTaille());i++)
    {
        ligne =i+1;
        for(int j=0;j<(jeu.getTaille());j++)
        {
            collonne=j+1;
            cout << "contenu de la case "<<ligne<<","<<collonne<<" : "<<jeu.getCase(i,j)->getx()<<", "<<jeu.getCase(i,j)->gety();
            if(jeu.getCase(i,j)->aUnPion())
            cout<<endl;
        }
    }
}*/
///NOTE : LES LIGNES ECRITES EN CETTE COULEUR SONT DES PROBLEMES DONT JE NE TE DEMANDE PAS LA RESOLUTION, JE SUIS JUSTE EN TRAIN DE LES INDENTER !///

int main()
{
    Console* pConsole = NULL;
    pConsole = Console::getInstance();

    Damier jeu(5);
    jeu.initTab();

    //
    Rhinoceros *R = new Rhinoceros();

    Pion *M = new Montagne(jeu.getCase(2,2));
    //placerPion(jeu,R,2,4);

    affichage_plateau();
    affichage_pions(M,pConsole);


    return 0;
}
