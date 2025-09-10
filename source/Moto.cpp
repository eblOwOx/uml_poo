/*****************************************************************//**
* \file   Moto.cpp
* \brief  Definition de la classe Moto
*
* \author Amaury
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrire des moto
*********************************************************************/

#include "../header/Moto.h"

using namespace std;


/**
 * \brief Constructeur par default
 * \li Masse de la moto = 0
 * \li Moteur = 
 *
 */
Moto::Moto() {

    this->poids = 0;
    //this->moteur = ;
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param lepoids masse de la moto
 * \param moteur TODO 
 */
Moto::Moto(int lepoids/*, Moteur moteur*/) {
    this->poids = lepoids;
    //this->moteur = moteur;
}

/**
 * \brief Destructeur
 *
 */
Moto::~Moto() {
    cout << "Destrcution de la moto avec le poids : " << this->poids << "." << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param mot Objet de type moto
 */
Moto::Moto(const Moto& mot)
{
    this->poids = mot.poids;
    //this->moteur = 
}

/**
 * \brief Operateur d'affectation
 *
 * \param miss Objet de type mission
 * \return Nouvelle objet de type Mission
 */
Moto &Moto::operator = (const Moto& mot)
{
    cout << "Affectation de la moto" << std::endl;
    if (this != &mot)  // Pour éviter que l'on ne se recopie pas...
    {
        this->poids = mot.poids;
        //this->moteur = 
    }
    return *this;
}

/**
 * \brief Accesseur de l'attribut poids
 *
 * \return Le poids
 */
int Moto::getPoids()
{
    return this->poids;
}

/**
 * \brief Mutateur de l'attribut poids
 *
 * \param nouveauPoids nouveau poids
 */
void Moto::setPoids(int nouveauPoids)
{
    this->poids = nouveauPoids;
}

/**
 * \brief Accesseur de l'attribut moteur
 *
 * \return Le moteur
 */
/*
Moteur Moto::getMoteur(){
    return this->moteur;
}*/

/**
 * \brief Mutateur de l'attribut moteur
 * 
 * \param nouveaumoteur nouveau moteur
 */
/*
void Moto::setMoteur(Moteur moteur){
  this->moteur = nouveauMoteur;
}*/
