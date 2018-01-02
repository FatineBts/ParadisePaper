#pragma once
#include <iostream>
#include <string>

class Joueur
{
public: 
	//Joueur();
	Joueur(std::string nom, std::string prenom,int score);
	~Joueur();
	std::string get_nom();
	std::string get_prenom();
	int get_score();
private:
	std::string _nom;
	std:: string _prenom;
	int _score;
};