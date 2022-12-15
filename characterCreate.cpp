#include <iostream>
#include <fstream>
#include <string>
#include <string.h>


typedef struct Character{ // base class for a character, wanted to do abstract but forgot how ot
    std::string name;
    std::string type; // cna be any of the following
    // warrior class, attack and health middle of road
    // mage class, attack high, health low
    // paladin class, attack low, health high
    int health;
    int attack;
} Character;


Character *createWarrior(std::string newName){ // creation for Warrior character
    Character *createWarrior = (Character*)malloc(sizeof(Character));
    createWarrior->name = newName;
    createWarrior->type = "warrior";
    createWarrior->health = 15;
    createWarrior->attack = 15;
    return createWarrior;
}

Character *createMage(std::string newName){ // creation for Mage character
    Character *createMage = (Character*)malloc(sizeof(Character));
    createMage->name = newName;
    createMage->type = "mage";
    createMage->health = 10;
    createMage->attack = 20;
    return createMage;
}

Character *createPaladin(std::string newName){ // creation of Paladin character
    Character *createPaladin = (Character*)malloc(sizeof(Character));
    createPaladin->name = newName;
    createPaladin->type = "paladin";
    createPaladin->health = 20;
    createPaladin->attack = 10;
    return createPaladin;
}

Character* create(){
    int i = 1; // used for later while loop
    std::string name_create; // name grab from cin but with characters
    char buffer[100]; // buffer for name grab
    //struct Character *create = (Character*)malloc(sizeof(Character)); //honestly don't need it
    std::cout<< "Please enter your name: ";
    std::getline(std::cin, name_create); // actually grabbing line
    Character *ret;
    while(i > 0){ // supposed to break when a valid class is chosen
                // class options: Warrior, Mage, Paladin

        std::string s;
        
        const char *warr = "w"; // need to do this for strcmp for some reason
        const char *mag = "m";  //  |
        const char *pal = "p";  //  |

        std::cout << "Would you like to be:" << std::endl << //asking for player choice of class
        "Warror: w" << std::endl <<
        "Mage: m" << std::endl <<
        "Paladin: p" << std::endl;
        std::getline(std::cin, s); // getting user input
        int s_len = strlen(s.c_str()); // get length of input for loop to make lowercase
        std::string s_str = s.c_str(); // get string of input for loop to make lowercase
        for (int j = 0; j < s_len; j++) {
            s_str[j] = tolower(s_str[j]); // make input lowercase
        }
        const char* choice = s_str.c_str(); // turning choice into a const char * for strcmp

        if(strcmp(choice, warr) == 0){
            std::cout << std::endl << "Warrior selected!" << std::endl;
            ret = createWarrior(name_create);
            break;
        }

        if(strcmp(choice, mag) == 0){
            std::cout << std::endl << "Mage selected!" << std::endl;
            ret = createMage(name_create);
            break;
        }

        if(strcmp(choice, pal) == 0){
            std::cout << std::endl << "Paladin selected!" << std::endl;
            ret = createPaladin(name_create);
            break;
        }
    };
    return ret;
}


int main(){
    Character* character = create();
    std::cout << "\n";
    std::cout << "Name: " << character->name << std::endl;
    std::cout << "Type: " << character->type << std::endl;
    std::cout << "Health: " << character->health << std::endl;
    std::cout << "Attack: " << character->attack << std::endl;
    return 0;
}
