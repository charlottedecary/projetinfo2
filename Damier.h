#ifndef DAMIER_H_INCLUDED
#define DAMIER_H_INCLUDED
#include <iostream>
#include <vector>
#include "Case.h"

class Damier
{

private :

    int m_taille;
    std::vector<std::vector<Case*>> m_cases;

public :
    Damier(int taille);
    ~Damier();
    void initTab();
    int getTaille();
    Case getCase(int x,int y);
    std::vector<std::vector<Case*>> getcases();
};

#endif // DAMIER_H_INCLUDED
