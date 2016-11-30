#ifndef PION_H_INCLUDED
#define PION_H_INCLUDED
#include <iostream>

class Joueur;
class Case;

class Pion ///classe abstraite
{
protected:
    Case *m_place; ///case qui contient le pion

public:
    Case *getPlace();
    bool Plateau(); /// le pion est sur le plateau
    virtual void bouger(Case *future_case); ///d�placement du pion
    //void afficher_info();
    virtual void afficher_char() const=0; ///afficher le pion sur la console

    ///connstructeurs, destructeurs
    Pion();
    Pion(Case* place);
    virtual ~Pion();
};

class Montagne : public Pion
{
private :

public :
    virtual void afficher_char()const;

    Montagne(Case *place);
    virtual ~Montagne();
};

class Animal : public Pion
{
protected :
    char m_orientation;
    //Joueur *m_joueur;
public :
    void afficher_orientation(); ///afficher l'orientation de l'animal sur la console
    //bool pousser();

    Animal();
    Animal(Case *place/*,Joueur joueur*/);
    virtual ~Animal();
};

class Rhinoceros : public Animal
{
private :

public :
    virtual void afficher_char()const;
    Rhinoceros(Case *place);
    virtual ~Rhinoceros();
};

#endif // PION_H_INCLUDED
