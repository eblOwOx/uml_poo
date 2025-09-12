/***********************************************************************//**
* \file   conducteur.cpp
* \brief  Definition de la classe conducteur
*
* \author Maël
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour décrire les conducteurs
**************************************************************************/

#include "Conducteur.h"

using namespace std;

Conducteur::Conducteur() {
	this->nom = "Mael";
	this->prenom = "Marchive";
	this->anneeNaissance = 2006;
}

/**
 * @brief Constructeur de la classe Conducteur
 */
Conducteur::Conducteur(const std::string& n, const std::string& p, int an)
    : nom(n), prenom(p), anneeNaissance(an) {
}

/**
 * @brief Destructeur de la classe Conducteur
 */
Conducteur::~Conducteur() {
    // On ne supprime pas les motos ici car elles peuvent être partagées entre plusieurs conducteurs
	cout << "Destruction du conducteur " << this->prenom << " " << this->nom << " " << this->anneeNaissance << "." << endl;
}

/**
 * @brief Retourne le nom du conducteur
 */
std::string Conducteur::getNom() const {
    return nom;
}

/**
 * @brief Retourne le prénom du conducteur
 */
std::string Conducteur::getPrenom() const {
    return prenom;
}

/**
 * @brief Retourne l'année de naissance du conducteur
 */
int Conducteur::getAnneeNaissance() const {
    return anneeNaissance;
}

void Conducteur::afficheMotos() const
{
    cout << "Le conducteur " << this->prenom << " " << this->nom << " ne possede pas de moto." << endl;
}

void Conducteur::addMoto(Moto* newMoto)
{
	cout << "Ajout de la moto au conducteur " << this->prenom << " " << this->nom << "." << endl;
}

void Conducteur::rmMoto(Moto* rmMoto)
{
	cout << "Suppression de la moto du conducteur " << this->prenom << " " << this->nom << "." << endl;
}
