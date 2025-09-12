/*****************************************************************//**
* \file   Electrique.cpp
* \brief  Definition de la classe Electrique
*
* \author Amaury
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrire des moteurs electrique
*********************************************************************/

#include "../header/Electrique.h"

using namespace std;


/**
 * \brief Constructeur par default
 * \li Tension max du moteur = 0
 *
 */
Electrique::Electrique() 
{
    this->tensionMax = 0;
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param tensionMoteur tension max du moteur
 */
Electrique::Electrique(float tensionMoteur) {
    this->tensionMax = tensionMoteur;
}

/**
 * \brief Destructeur
 *
 */
Electrique::~Electrique() {
    cout << "Destrcution du moteur électrique avec comme tension max : " << this->tensionMax << "." << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param elec Objet de type electrique
 */
Electrique::Electrique(const Electrique& elec)
{
    this->tensionMax = elec.tensionMax;
}

/**
 * \brief Operateur d'affectation
 *
 * \param elec Objet de type electrique
 * \return Nouvelle objet de type Electrique
 */
Electrique &Electrique::operator = (const Electrique& elec)
{
    cout << "Affectation du moteur électrique" << std::endl;
    if (this != &elec)  // Pour éviter que l'on ne se recopie pas...
    {
        this->tensionMax = elec.tensionMax;
    }
    return *this;
}

/**
 * \brief Accesseur de l'attribut tentionMax
 *
 * \return La tention max
 */

float Electrique::getTensionMax()
{
    return this->tensionMax;
}

/**
 * \brief Mutateur de l'attribut tensionMax
 *
 * \param puissance nouvelle tention max
 */
void Electrique::setTensionMax(float puissance)
{
    this->tensionMax = puissance;
}
