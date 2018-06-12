#include <iostream>
#include<list>
using namespace std;
namespace HS {

	class HighScore {
	private:

		struct Score {																//Defino la estructura

			int points;
			string name;
			bool operator<(const Score &rhs) const { return  points > rhs.points; }		//Redefino la forma de preguntar cual es menor entrando a la estructura y comparando los ints.
		};
		list<Score>* listHighScore;
	public:
		HighScore();															//Constructor.
		~HighScore();															//Destructor.
		void AddHighScore(int, string);											//Añado nombre y puntaje.
		void ShowHighScore(int pos, int &points, string &name);					//Devuelvo nombre y puntaje en la posicion recibida.
		void clearScore();
	};

}
