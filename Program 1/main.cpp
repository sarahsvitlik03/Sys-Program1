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

int main(int argc, const char * argv[]) {
    ofstream myOut ("P1_Svitlik_Larkin.txt", ios::out | ios::app);
    
    cout << "-----------------------------------------------" << endl;
    myOut << "-----------------------------------------------" << endl;
    
    int option;
    struct option longOpts[] = {
        {"verbose", no_argument, NULL, 'b'},
        {"output", required_argument, NULL, 'o'},
        {"debug", optional_argument, NULL, 0},
        {NULL, 0, NULL, 0}
    };
    
    return 0;
}

//short switches: l, i
//long switches: au, ls
