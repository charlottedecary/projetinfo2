#include <iostream>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"


using namespace std;

void placerPion(Damier &jeu, Pion &a,int x,int y)
{
    jeu.getCase(x,y)->ajoutpion(&a);
}

void affiche(Damier &jeu)
{
    int ligne = 1;
    int collonne = 1;
    for(int i=0;i<(jeu.getTaille());i++)
    {
        ligne =i+1;
        for(int j=0;j<(jeu.getTaille());j++)
        {
            collonne=j+1;
            cout << "contenu de la case "<<ligne<<","<<collonne<<" : "<<jeu.getCase(i,j)->getx()<<", "<<jeu.getCase(i,j)->gety(); /// ca marche bien
            if(jeu.getCase(i,j)->aUnPion())
            cout<<", "<<jeu.getCase(i,j)->getpion().getNom(); ///ca marche pas
            cout<<endl;
        }
    }
}

int main()
{
    Damier jeu(5);      ///creation damier
    jeu.initTab();

    affiche(jeu);/// affichage damier

    Pion A("Pion a");
    Pion B("Pion b");

    placerPion(jeu,B,2,4);

    affiche(jeu);

    return 0;
}
