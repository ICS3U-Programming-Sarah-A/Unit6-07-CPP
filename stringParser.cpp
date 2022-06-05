// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: June 2nd, 2022.
// This program asks the user to enter a string. It then splits the string up
// into words and displays it to the user.
#include <iostream>
#include <string>


void StringParser(std::string sentence) {
    std::string word = "";
    for (auto object : sentence) {
        if (object == ' ') {
            std::cout << word << std::endl;
            word = "";
        } else {
            word = word + object;
        }
    }
    std::cout << word << std::endl;
}


int main() {
    // declare variables
    std::string userSentence;
    std::string finalSentence;

    std::cout << "This program will ask the for a sentence and then \n";
    std::cout << "display each word, without spaces, one per line";
    std::cout << std::endl;

    // get user input
    std::cout << "Enter a string: ";
    getline(std::cin, userSentence);
    std::cout << "The words in your sentence, without spaces, are: \n";

    // call function
    StringParser(userSentence);
}
