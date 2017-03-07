// EnemyGenerator.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

enum class EnemyType {

	zombie,
	ghost,
	werewolf,
	vampire,
	MAX
};

struct Enemy {
	EnemyType type;
	string  name;
	int health;

	string getEnemyTypeString() {

		switch (type) {
		case EnemyType::zombie: return "zombie";
		case EnemyType::ghost: return "ghost";
		case EnemyType::werewolf: return "werewolf";
		case EnemyType::vampire: return "vampire";
		default: return"";

		}
	};

};
bool operator==(const Enemy &a, const Enemy &b) {
	return a.name == b.name && a.type == b.type;
}

static Enemy CreateRandomEnemy() {
	static const int MAX_life{ 500 };
	static const string names[]{
		"Gertrudiz",
		"Pancracia",
		"Hipolito",
		"Fulgencia",
		"Eustaquio",
	};

	return Enemy{
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType));
	};

 int main()
	 srand(static_cast<unsigned>(time(nullptr)));
 const int Max_ENEMIES{ 5 };
 Enemy enemies[MAX_ENEMIES];
