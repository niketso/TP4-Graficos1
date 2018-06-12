#include "HS.h"
using namespace HS;

HighScore::HighScore() {

	listHighScore = new list<Score>();							//Creo la lista.
}
HighScore::~HighScore() {

	delete listHighScore;										//Borro la lista.
}
void HighScore::AddHighScore(int points, string name) {

	Score HSToAdd;												//Declaro el struct.
	HSToAdd.name = name;										//Asigno el nombre.
	HSToAdd.points = points;									//Asigno los puntos.
	listHighScore->push_front(HSToAdd);
	listHighScore->sort();										//Ordena la lista.
}
void HighScore::ShowHighScore(int pos, int &points, string &name) {

	list<Score>::iterator it = listHighScore->begin();			//Iterador que comienza en el principio de la lista.
	advance(it, pos);											//Avanza hasta la posicion deseada.
	points = it->points;										//Asigna el valor a points.
	name = it->name;											//Asigna el valor a name.
}
void HighScore::clearScore() {
	listHighScore->clear();										//Limpio la lista.
}