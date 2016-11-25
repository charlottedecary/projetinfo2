#include <iostream>
#include "Damier.h"
#include "Case.h"

using namespace std;


void affiche(Damier jeu)
{
    int ligne = 1;
    int collonne = 1;
    string A = "Pion a ";
    jeu.getCase(2,3).ajoutpion(A); /// re-essai d'ajout de pion (pr voir si c'etait pas un pb d'adresse lié au ss prog)

    for(int i=0;i<(jeu.getTaille());i++)
    {
        ligne =i+1;
        for(int j=0;j<(jeu.getTaille());j++)
        {
            collonne=j+1;
            cout << "contenu de la case "<<ligne<<","<<collonne<<" : "<<jeu.getCase(i,j).getx()<<", "<<jeu.getCase(i,j).gety(); /// ca marche bien
            if(jeu.getCase(i,j).aUnPion())
            cout<<", "<<jeu.getCase(i,j).getpion()<<"A un pion"; ///ca marche pas
            cout<<endl;
        }
    }
}

int main()
{
    string A="pion a";  ///pions d'essai
    string B="pion b";

    Damier jeu(5);      ///creation damier
    jeu.initTab();

    jeu.getCase(0,4).ajoutpion(B); ///essai de l'ajout
    cout<<"ok1"<<endl;
    if(!jeu.getCase(0,4).aUnPion()) ///aunpion : methode pour savoir si le pointeur est nul ou non (voir case.cpp)
        cout<<"ok2"<<endl;          ///(l'ajout n'a apparement pas marché, ou bien c'est la methode qui est defectueuse
    cout<<", "<<jeu.getCase(0,4).getpion()<<endl; /// et ici une boucle infinie d'affichage de endl, bizarre bizarre, à l'aide Paulo !!


    affiche(jeu);

    return 0;
}
