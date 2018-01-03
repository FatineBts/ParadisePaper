#include <iostream>
#include <string>
#include "Joueur.hh"

Joueur::Joueur(std::string nom, std::string prenom,int score)
{
	_nom = nom;
	_prenom = prenom;
	_score = score;
}

Joueur::~Joueur(){}

std::string Joueur::get_nom()
{
	return(_nom);
}

std::string Joueur::get_prenom()
{
	return(_prenom);
}

int Joueur::get_score()
{
	return(_score);
}

