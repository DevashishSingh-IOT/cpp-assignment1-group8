// main.cpp - CPP Assignment 1
// Purpose: Prints assignment info and the chosen security topic with explanation

#include <iostream> // Needed for input/output operations

using namespace std; // Lets us write cout instead of std::cout

int main() {
    // 1. Print assignment and group information
    cout << "Assignment #1 - C++ Group Project" << endl;
    cout << "Group Number: 8" << endl;
    cout << "Group Members: Devashish Singh, Aysuh, Muskanpreet Kaur" << endl << endl;

    // 2. Print security topic title
    cout << "Security Topic: Cloud computing - Firewall;;" << endl << endl;

    // 3. Print brief paragraph explanation
    cout << "Firewalls are network security devices that monitor and filter incoming "
         << "Networking is the backbone of communication today"
         << "Firewalls act as a protective shield for networks,"
         << "Companies use firewalls to enforce security policies"
         << "Firewalls can be hardware-based or software-based solutions." << endl << endl;

    // 4. End message
    cout << "This program was created and compiled inside GitHub Codespaces." << endl;
    cout << "End of demonstration." << endl;

    return 0; // End program
}