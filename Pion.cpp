#include "Pion.h"
#include "Case.h"
#include <iostream>



Pion::Pion(std::string nom)
:m_nom(nom),Plateau(false)
 {}
Pion::~Pion()
 {}
 void Pion::bouger(Case &futur_case)
 {
     m_place->enlevepion();
     m_place = &futur_case;
 }


 std::string Pion::getNom()
 {
     return m_nom;
 }
