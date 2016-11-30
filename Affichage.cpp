#include <iostream>
#include "Affichage.h"
#include "Console.h"


void affichage_plateau()
{
    std::cout<<" ______________ "<<std::endl;
    std::cout<<"                 "<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<"|--+--+--+--+--|"<<std::endl;
    std::cout<<"|  |  |  |  |  |"<<std::endl;
    std::cout<<" ______________ "<<std::endl;

}

void affichage_pions(Pion *pion)
{
    Console* pConsole = NULL;
    pConsole = Console::getInstance();

    pConsole->gotoLigCol(2+2*pion->getPlace()->getx(),2+3*pion->getPlace()->getx());
    pion->afficher_char();
}
