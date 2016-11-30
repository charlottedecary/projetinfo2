#include "Pion.h"
#include "Case.h"
#include <iostream>


/// CLASSE MERE

Pion::Pion()
:m_place(0)
 {}

Pion::Pion(Case* place)
:m_place(place)
{
    place->ajoutpion(this);
}

Pion::~Pion()
 {
 }

bool Pion::Plateau()
 {
     if(m_place!=0)
        return true;
     else
        return false;
 }

 void Pion::bouger(Case *futur_case)
 {
     if(Plateau())
     m_place->enlevepion();

     m_place = futur_case;
 }

/*
 void Pion::afficher_info()
 {
   //std::cout<<m_nom<<std::endl;
    std::cout<<" place :";
    if(Plateau())
        std::cout<<m_place->getx()<<","<<m_place->gety()<<std::endl;
    else
        std::cout<<"  est hors du plateau"<<std::endl;
 }
 */

 Case* Pion::getPlace()
 {
     return m_place;
 }

 ///CLASSES FILLES

Montagne::Montagne(Case* place)
:Pion(place)
{}

Montagne::~Montagne()
{}

void Montagne::afficher_char()const
{
    std::cout<<"M"<<std::endl;
}

Animal::Animal(/*,Joueur joueur*/)
:Pion(0),m_orientation(0)
{}

Animal::~Animal()
{}

Rhinoceros::Rhinoceros()
{}
Rhinoceros::~Rhinoceros()
{}

void Rhinoceros::afficher_char()const
{
    std::cout<<"R"<<std::endl;
}

