/***********************************************************************//**
* \file   conducteur.cpp
* \brief  Definition de la classe conducteur
*
* \author Ma�l
* \version 0.1
* \date   September 2025
*
* Programme Cpp permettant de creer des objets pour d�crire les conducteurs
**************************************************************************/

#include "../header/conducteur.h"
using namespace std;
//TODO faire quelque chose pour mesMotos dans le constructeur
Conducteur::Conducteur() {
	this->nom = "John";
	this->prenom = "Doe";
	this->anneeNaissance = 1984;
  //this->mesMotos = Moto mototest [10];
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
    // On ne supprime pas les motos ici car elles peuvent �tre partag�es entre plusieurs conducteurs
	cout << "Destruction du conducteur " << this->prenom << " " << this->nom << " " << this->anneeNaissance << "." << endl;
}

/**
 * @brief Retourne le nom du conducteur
 */
string Conducteur::getNom() {
    return nom;
}

/**
 * @brief Retourne le pr�nom du conducteur
 */
string Conducteur::getPrenom() {
    return prenom;
}

/**
 * @brief Retourne l'ann�e de naissance du conducteur
 */
int Conducteur::getAnneeNaissance() {
    return anneeNaissance;
}

//TODO faire en sorte que les m�thodes fassent se qu'elles devraient faire
void Conducteur::afficheMotos()
{
    cout << "Le conducteur " << this->prenom << " " << this->nom << " ne possede pas de moto." << endl;
}
//TODO ici aussi
void Conducteur::addMoto(Moto* newMoto)
{
	cout << "Ajout de la moto au conducteur " << this->prenom << " " << this->nom << "." << endl;
}
//TODO oui encore la meme chose
void Conducteur::rmMoto(Moto* rmMoto)
{
	cout << "Suppression de la moto du conducteur " << this->prenom << " " << this->nom << "." << endl;
}
