#include <iostream>
#include <fstream>
#include <string>
#include <string.h>


typedef struct Character{
    std::string name;
    int health;
    int attack;
} Character;

typedef struct Warrior{
    std::string name;
    int health;
    int attack;
} Warrior;

typedef struct Mage{
    std::string name;
    int health;
    int attack;
} Mage;

typedef struct Paladin{
    std::string name;
    int health;
    int attack;
} Paladin;

void create(){
    int i = 1;
    std::fstream name_create;
    char buffer[100];
    //struct Character *create = (Character*)malloc(sizeof(Character)); //honestly don't need it
    std::cout<< "Please enter your name:";
    name_create.getline( buffer, sizeof buffer );
    while(i > 0){
        std::fstream s;
        char buff[100];
        char *warr;
        warr = "warrior";
        std::string warr = "warrior";



        std::cout << "Would you like to be:" << std::endl << 
        "Warror: W" << std::endl <<
        "Mage: M" << std::endl <<
        "Paladin: P";
        s.getline( buffer, sizeof buffer );
        if(strcmp(s, "warrior") == 0){

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
