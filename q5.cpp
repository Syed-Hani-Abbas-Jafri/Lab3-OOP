#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    FootballPlayer(string name, string pos, int goals) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    FootballPlayer(string name) {
        playerName = name;
        position = "Midfielder";
        goalCount = 10;
    }

    FootballPlayer(const FootballPlayer& p) {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    void addGoals(int goals) {
        goalCount += goals;
    }

    void display() {
        cout << "Player: " << playerName
             << " | Position: " << position
             << " | Goals: " << goalCount
             << " — Ballon d'Or material." << endl;
    }
};

int main() {
    FootballPlayer p1;
    FootballPlayer p2("Cristiano Ronaldo", "Forward", 961);
    FootballPlayer p3(p2);
    FootballPlayer p4("Messi");
    FootballPlayer p5("Mbappe", "Forward", 441);

    p1.display();
    p2.display();
    p3.display();
    p4.display();
    p5.display();

    cout << endl << "After scoring more goals:" << endl;

    p2.addGoals(50);
    p4.addGoals(25);
    p5.addGoals(30);

    p2.display();
    p4.display();
    p5.display();

    return 0;
}
