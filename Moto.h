/*****************************************************************//**
 * \file   Moto.h
 * \brief  Declaration de la classe moto
 * 
 * \author Amaury
 * \date   September 2025
 *********************************************************************/

#define MOTO_H
#include <iostream>
#include <string>
//#include "Moteur.h"

 /*! \class Moto
    * \brief classe representant une moto. 2 attributs prives
    */
class Moto
{
private:
    /*Classe sous forme canonique*/
    int poids;
    //Moteur moteur;

protected:

public:
    /*Classe sous forme canonique*/
    Moto();
    ~Moto();
    Moto(const Moto& mot);
    Moto &operator = (const Moto& mot);

    Moto(int poids/*, Moteur moteur*/);
    void setPoids(int nouveauPoids);
    int getPoids();
    //void setMoteur(Moteur nouveauMoteur);
    //Moteur getMoteur();
};

