# uml_poo
## Compiler le progamme

Télécharger un compilateur C++ selon votre plateforme :

- Pour Linux : télécharger GCC 
  ```bash
  apt update && apt install build-essential
  ```
  Cloner le répertoire puis compiler le programme avec g++ :
  ```bash
  git clone https://github.com/eblOwOx/uml_poo.git
  cd uml_poo
  g++ main.cpp source/* -o umlpoo
  ```
  Puis exécuter le fichier sous le nom de "umlpoo".

## TODO
- faire l'agrégation entre les classes Conducteur/Moto
- faire la composition entre les classes Moto/Moteur
- terminer la classe Conducteur
