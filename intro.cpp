#include <iostream>
//#include <stdlib.h>
using namespace std;



void begin(){
    cout<<"Hello"<< endl;
    string choice;
    const char *hello = "hello";
    getline(std::cin, choice);
    int s_len = strlen(choice.c_str()); // get length of input for loop to make lowercase
    string s_str = choice.c_str(); // get string of input for loop to make lowercase
    for (int j = 0; j < s_len; j++) {
        s_str[j] = tolower(s_str[j]); // make input lowercase
    }
    const char* choiceFin = s_str.c_str();

    if(strcmp(choiceFin, hello) != 0){
        std::cout<<"You know it's usually respectful to start a conversation with he..." << endl;
        //_sleep(5000);
        std::cout << "Ok nevermind, welcome to DEEZ, a mid game made by two cornball ahh college students." << endl <<
        "You will probably not be challenged since this game was just meant to get ready for next term."
        << endl << "Ok LETSA GO (TM)";
    }
    else{
        cout << "Welcome to DEEZ, a mid game made by two cornball ahh college students."
        << endl << "You will probably not be challenged since this game was just meant to get ready for next term."
        << endl << "Ok LETSA GO (TM)";
        
    }

}


int main(){
    begin();
    return 0;
}