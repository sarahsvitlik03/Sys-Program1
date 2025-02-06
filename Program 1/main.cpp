//
//  main.cpp
//  Program 1
//
//  Created by Sarah Svitlik on 2/3/25.
//
//
#include <iostream>
#include <fstream>
#include <getopt.h>
using namespace std;

int main(int argc, char * argv[]) {
    ofstream myOut ("P1_Svitlik_Larkin.txt", ios::out | ios::app);
    
    cout << "-----------------------------------------------" << endl;
    myOut << "-----------------------------------------------" << endl;
    
    int option;
    struct option longOpts[] = { //Process long switches
        {"verbose", no_argument, NULL, 'b'},
        {"output", required_argument, NULL, 'o'},
        {"recursive", no_argument, NULL, 'R'},
        {"debug", optional_argument, NULL, 0},
        {NULL, 0, NULL, 0}
    };
    
    cout << "Processing: " << argv[0] << endl;
    int code, ch, optx;
    
    for (;;) { //Loop processes short switches
        ch = getopt_long(argc, argv, "i:auiRlsb:o", longOpts, &code);
        if (ch == -1) break;
        switch (ch) {
            case 'a': //these switches have no arguments.
            case 'u':
            case 'b':
            case 'R': // Something
            case 'o': // something
            case 'i': //something
                break;
            case 0: {
                //some code here
                break;
            }
            case '?': //check  for invalid switches
                break;
        }
    }
    
    return 0;
}

//short switches: l, i
//long switches: au, ls
