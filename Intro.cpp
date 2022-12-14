#include <iostream>
#include <fstream>
#include <string>


typedef struct Character{ // base class for a character, wanted to do abstract but forgot how ot
    std::string name;
    int health;
    int attack;
} Character;

typedef struct Warrior{ // warrior class, attack and health middle of road
    std::string name;
    int health;
    int attack;
} Warrior;

typedef struct Mage{ // mage class, attack high, health low
    std::string name;
    int health;
    int attack;
} Mage;

typedef struct Paladin{ // paladin class, attack low, health high
    std::string name;
    int health;
    int attack;
} Paladin;

Warrior *createWarrior(std::string newName, int newHealth, int newAttack){ // creation for Warrior character
    Warrior *createWarrior = (Warrior*)malloc(sizeof(Warrior));
    createWarrior->name = newName;
    createWarrior->health = newHealth;
    createWarrior->attack = newAttack;
    return createWarrior;
}


Mage *createMage(std::string newName, int newHealth, int newAttack){ // creation for Mage character
    Mage *createMage = (Mage*)malloc(sizeof(Mage));
    createMage->name = newName;
    createMage->health = newHealth;
    createMage->attack = newAttack;
    return createMage;
}


Paladin *createPaladin(std::string newName, int newHealth, int newAttack){ // creation of Paladin character
    Paladin *createPaladin = (Paladin*)malloc(sizeof(Paladin));
    createPaladin->name = newName;
    createPaladin->health = newHealth;
    createPaladin->attack = newAttack;
    return createPaladin;
}

void create(){
    int i = 1; // used for later while loop
    std::fstream name_create; // name grab from cin but with characters
    char buffer[100]; // buffer for name grab
    //struct Character *create = (Character*)malloc(sizeof(Character)); //honestly don't need it
    std::cout<< "Please enter your name:";
    name_create.getline( buffer, sizeof buffer ); // actually grabbing line
    
    while(i > 0){ // supposed to break when a valid class is chosen
                // class options: Warrior, Mage, Paladin

        std::string s;
        std::getline(std::cin, s);
        const char *warr = "warrior";

        std::cout << "Would you like to be:" << std::endl << //asking for player choice of class
        "Warror: W" << std::endl <<
        "Mage: M" << std::endl <<
        "Paladin: P";

        const char* choice = s.c_str();

        if(strcmp(choice, warr) == 0){

            //do stuff
        }
};
    //create->name = name_create;
    //create->health = 10;
    //create->attack = 10;   
    //std::cout<< create->name << std::endl;
    //free(name_create)
}




int main(){
    create();
    return 0;
}
