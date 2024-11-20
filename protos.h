/* Langage C++.
* 
* A VOTRE ATTENTION!!!!
* 
* Ceci est un ensemble de fonctions qui vont permettre de
* prendre quelques bases sur la notion de "pointeurs" et leurs
* utilisation pour la gestion des chaines de caracteres.
* 
* Par exemple la fonction longueur() ci_dessous qui permet de calculer la longueur d'une chaine.
* Les roles de toutes les fonctions suivantes sont plus ou moins decrits dans leurs nom et leurs definitions dans
* le fichier protos.cpp.
* 
* Lien vers le projet github en description et aussi lien vers la video complete sur YouTube;
* 
*/

#ifndef __protos_H_INCLUDED__
#define __protos_H_INCLUDED__
int longueur(const char* chaine);
void copie(char* dest, const char* source);
void concatene(char* dest, const char* chaine);
int compare(const char* chaine1, const char* chaine2);
char* cherche_char(char* chaine, char caractere );
void inverse(char* chaine);
void to_upper(char* chaine);
void to_lower(char* chaine);
char* cherche_mot(char* phrase, const char* mot);
void sous_chaine(const char* source, char* dest, int debut, int longueur);
void supprime_caractere(char* chaine, char caractere);
int compte_mots(const char* chaine);
#endif 