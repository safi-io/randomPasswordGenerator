#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generator(int length){

    string password =""; // Empty String Intilization

    srand(time(0)); // Random Number generator

    string characters = "thequickbrownfoxjumpsoverthelazydogTHEQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789!@#$%^&*(){|}"; // Whole ABC, 0-9, symbols character

    int size = characters.length(); // size of the characters
    int randomIndex; // integer to be used for acceessing values

    for(int i = 0; i< length; i++) {
        randomIndex = rand() % size; // the answer will be less than characters
        password = password + characters[randomIndex]; // String Contamination
    }
    
    return password; // returning string
}

int main() {

    int length; // input of lentgh
    cout<<"Enter the length of the password :: ";
    cin>>length;
    cout<<"Here is your password :: "<<generator(length);;

    return 0;
}
