#include <iostream>
#include "Affichage.h"
#include "Console.h"


void affichage_plateau()
{
    std::cout<<"|______________|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|______________|"<<std::endl;

}

void affichage_pions(Damier jeu)
{
    Console* pConsole = NULL;
    pConsole = Console::getInstance();
    for(int i=0;i<jeu.getTaille();i++)
    {
        for(int j;j<jeu.getTaille();j++)
        {
            if(jeu.getCase(i,j)->aUnPion())
            {
                pConsole->gotoLigCol(2+2*i,2+3*j);
                jeu.getCase(i,j)->getpion()->afficher_char();
            }
        }
    }
}
