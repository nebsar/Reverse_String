/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 12, 2018, 2:31 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

/*
 * 
 */
int main(int argc, char** argv) {

    std::string str("");

    std::cout << "Please enter and expresiion to be reversed : ";

    std::cin>>str;

    int strLenght = str.length();



    int i = 0;
    int j = strLenght - 1;
    while (i < j) {
        char tempChar;
        tempChar = str[i];
        str[i] = str[j];
        str[j] = tempChar;
        ++i;
        --j;
    }

    std::cout << str << '\n';

    return 0;
}

