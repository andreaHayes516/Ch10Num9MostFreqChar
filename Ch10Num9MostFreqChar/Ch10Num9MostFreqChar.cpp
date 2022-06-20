/************************************************
** Author: Andrea Hayes
** Date: May 31, 2020
** Purpose: Tell the most frequent character in a string
** Input: String
** Processing: Figure most occuring character
** Output: Display the character
*************************************************/
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
char mostFreq(char[]);
int main() {

    // Declare Variables
    const int SIZE = 51;
    char words[SIZE];
    char most;
    
    // Get user input
    cout << "Enter some words and I will tell you which letter appears most often.(Up to 50 characters): ";
    cin.getline(words,SIZE);

    // Call function and display
    most = mostFreq(words);
    cout << "The most frequent character is: " << most;

    return 0;
}
char mostFreq(char words[]) { // Function to determine most frequent character
    int maxNum = -1, maxCount = 0;
    char most;
    int size = strlen(words);
    for (int i = 0; i < size; i++) {
        int currentCount = 0;
        for (int j = 0; j < size; j++) {
            if (words[j] == words[i]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            most = words[i];
        }
    }
    if (maxCount < 2) {
        return -1;
    }
    return most;
}
