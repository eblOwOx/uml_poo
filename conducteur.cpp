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

/**
 * @brief Constructeur de la classe Conducteur
 */
Conducteur::Conducteur(const std::string& n, const std::string& p, int an)
    : nom(n), prenom(p), anneeNaissance(an) {
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

/**
 * @brief Affiche les motos du conducteur
 */
void Conducteur::afficheMotos() const {
    std::cout << "Motos de " << prenom << " " << nom << " :" << std::endl;
    if (mesMotos.empty()) {
        std::cout << "   Aucune moto." << std::endl;
    }
    else {
        for (size_t i = 0; i < mesMotos.size(); i++) {
            std::cout << "   Moto " << i + 1 << " -> ";
            mesMotos[i]->affiche(); // On suppose que Moto possède une méthode affiche()
        }
    }
}

/**
 * @brief Ajoute une moto au conducteur
 */
void Conducteur::addMoto(Moto* newMoto) {
    if (mesMotos.size() < 10) {
        mesMotos.push_back(newMoto);
    }
    else {
        std::cout << "Impossible d'ajouter plus de 10 motos." << std::endl;
    }
}

/**
 * @brief Supprime une moto du conducteur
 */
void Conducteur::rmMoto(Moto* rmMoto) {
    for (auto it = mesMotos.begin(); it != mesMotos.end(); ++it) {
        if (*it == rmMoto) {
            mesMotos.erase(it);
            std::cout << "Moto supprimée." << std::endl;
            return;
        }
    }
    std::cout << "Moto non trouvée." << std::endl;
}
