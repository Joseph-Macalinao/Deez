#include <iostream>
#include <string>
using namespace std;

struct attack { // basic attack outline
    string name; // name of attack
    string type; // what type is the move (determine which monsters the move is strong/weak against)
    int damage; // base damage of attack
};

struct moveset { // moveset is the attacks that belong to monster
    attack atk1; // attack one in the moveset
    // attack atk2;
};

struct monster { // basic monster struct
    string name; // monster needs a name
    string type; // what type is the monster (determines what attacks it is strong/weak against)
    int health; // monster needs health. Just a number value to keep track
    moveset moves; // pointer to struct with attacks monster knows
};

void create_attack (attack a, string n, string t, int d) {
    // takes attack(a), string name(n), string type(t), int damage(d)
    a.name.assign(n);
    a.type.assign(t);
    a.damage = d;
}

void assign_moveset (moveset mvst, attack a) {
    // takes moveset(mvst), and attacks to set (currently just 1, will change later)
    mvst.atk1 = a;
}

void create_monster (monster mon, string n, string t, moveset m, int h) {
    // takes monster(mon), string name(n), string type(t), moveset(m) and int health(h)
    mon.name.assign(n);
    mon.type.assign(t);
    mon.moves = m;
    mon.health = h;
}

int main () {
    attack button_mash; // attack
    create_attack(button_mash, "Button Mash", "Beginner", 1);
    // makes attack "Button Mash" with type "Beginner", and 1 damage

    moveset tim_moves; // moveset
    assign_moveset(tim_moves, button_mash);
    // makes moveset with single attack "Button Mash"
    
    monster tim; // monster
    create_monster(tim, "Tim", "Beginner", tim_moves, 5);
    // makes monster "Tim" with type "Beginner", moveset tim_moves, and 5 health

    cout << button_mash.name << "\n";
    cout << button_mash.type << "\n";
    cout << button_mash.damage << "\n";

    cout << tim.name << "\n";
    cout << tim.name << "\n";
    cout << tim.health << "\n";

};