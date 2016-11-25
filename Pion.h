#ifndef PION_H_INCLUDED
#define PION_H_INCLUDED
#include <iostream>

class Case;

class Pion
{
private:
    std::string m_nom;
    Case *m_place;
    bool Plateau;

public:
    std::string getNom();
    void bouger(Case &future_case);

    Pion();
    Pion(std::string nom);
    ~Pion();
};

#endif // PION_H_INCLUDED
