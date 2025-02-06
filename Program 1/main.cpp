//
//  main.cpp
//  Program 1
//
//  Created by Sarah Svitlik on 2/3/25.
//
//
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    ofstream myOut ("P1_Svitlik_Larkin.txt", ios::out | ios::app);
    
    cout << "-----------------------------------------------" << endl;
    myOut << "-----------------------------------------------" << endl;
 
    for (int i = 0; i <argc; i++){
        if (i == 0) {
            cout << "Command: " << argv[i] << endl;
            myOut << "Command: " << argv[i] << endl;
        }
        else if (argv[i][0] == '-') {
            cout << "Switch: " << argv[i] << endl;
            myOut << "Switch: " << argv[i] << endl;
        } else {
            cout << "Argument: " << argv[i] << endl;
            myOut << "Argument: " << argv[i] << endl;
        }
    }
    
    myOut.close();
    return 0;
}
 // For test e, the argument includes the class name and then the mytext.html.
// For test f, the arguemnts include the .bak files and text.log.
