#ifndef PION_H_INCLUDED
#define PION_H_INCLUDED
#include <iostream>

class Joueur;
class Case;

class Pion
{
private:
    Case *m_place;
public:
    Case *getPlace();
    bool Plateau();
    void bouger(Case *future_case);
    void afficher_info();
    virtual void afficher_char() const=0;

    Pion();
    Pion(Case* place);
    virtual ~Pion();
};

class Montagne : public Pion
{
private :

public :
    virtual void afficher_char()const;
    Montagne(Case *m_place);
};

class Animal : public Pion
{
private :
    char m_orientation;
    //Joueur *m_joueur;
public :
    Animal();
    Animal(Case *m_place/*,Joueur joueur*/);
    void afficher_orientation();
    //bool pousser();
};

class Rhinoceros : public Animal
{
private :

public :
    virtual void afficher_char()const;
    Rhinoceros();
};

#endif // PION_H_INCLUDED
