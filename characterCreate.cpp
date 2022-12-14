#include <iostream>
#include <fstream>
#include <string>
#include <string.h>


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
    std::string name_create; // name grab from cin but with characters
    char buffer[100]; // buffer for name grab
    //struct Character *create = (Character*)malloc(sizeof(Character)); //honestly don't need it
    std::cout<< "Please enter your name:";
    std::getline(std::cin, name_create); // actually grabbing line
    
    while(i > 0){ // supposed to break when a valid class is chosen
                // class options: Warrior, Mage, Paladin

        std::string s;
        
        const char *warr = "warrior"; // need to do this for strcmp for some reason
        const char *mag = "mage";        //  |
        const char *pal = "paladin";     //  |

        std::cout << "Would you like to be:" << std::endl << //asking for player choice of class
        "Warror: W" << std::endl <<
        "Mage: M" << std::endl <<
        "Paladin: P" << std::endl;
        std::getline(std::cin, s);
        const char* choice = s.c_str(); // turning choice into a const char * for strcmp
        //also want to make it so the input is lowercased. probably have to do that before making
        // it a const char *

        if(strcmp(choice, warr) == 0){
            Warrior *retWarr = createWarrior(name_create, 15, 15);
            std::cout<< retWarr->attack<<std::endl;
            break;
            // don't know how to return, may need an abstract class
        }

        if(strcmp(choice, mag) == 0){
            Mage *retMag = createMage(name_create, 20, 10);
            std::cout<< retMag->attack<<std::endl;
            break;
            // don't know how to return, may need an abstract class
        }

        if(strcmp(choice, pal) == 0){
            Paladin *retPal = createPaladin(name_create, 10, 20);
            std::cout << retPal->attack<<std::endl;
            break;
            // don't know how to return, may need an abstract class
        }
    };

}




int main(){
    create();
    return 0;
}
