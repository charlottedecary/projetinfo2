#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include <iostream>
#include <vector>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"

class Joueur
{
private :
    std::string m_nom;
    unsigned int equipe;
    std::vector<Animal> m_piece;
public :
    Joueur(std::string nom);
    void placerPion(Damier &jeu,int x,int y)
};

#endif // JOUEUR_H_INCLUDED
