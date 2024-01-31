# Projet Image Module

## Contributeurs
- [Diallo Sidy](https://github.com/DIALLOSIDY)
- [Elhadj Amadou Barry](https://github.com/barryelhadj23)
- [BAH Mamadou (moi)](https://github.com/bahAli21)

## Description
Bienvenue dans notre module C++ dédié à la manipulation d'images en trinôme. Ce projet explore la subtilité entre la représentation interne et l'affichage externe des images. La classe `Image` utilise un tableau 1D caché et offre des fonctionnalités de traitement d'image de haut niveau, telles que le seuillage, le changement de palette de couleur et le dessin de formes.

## Fonctionnalités
- Seuillage
- Changement de palette de couleur
- Dessin de lignes, droits, cercles, rectangles, etc.

## Utilisation
La classe `Image` est conçue pour faciliter l'utilisation en externe. Les méthodes `getPix` et `setPix` simplifient l'accès aux pixels en deux dimensions.

## Objectif
Explorer la distinction entre la représentation interne et l'affichage externe des images.

## Mise en route
1. Clonez le projet avec `git clone https://github.com/votreprofil/ImageModule.git`
2. Compilez au fur et à mesure avec le fichier makefile ou CMake fourni.
3. Explorez le fichier `mainTest.cpp` dans le répertoire `src` pour des tests de régression.

## Structure du Projet
- `NUMEROETU1_NUMEROETU2_NUMEROETU3`
  - `bin`
  - `src`
    - `Pixel.h`
    - `mainTest.cpp`
    - `Image.h`
    - `Image.cpp`
  - `obj`
  - `data`
  - `doc`

## Compilation
Compilez avec `make` ou utilisez CMake pour générer les fichiers de projet.

```bash
make
