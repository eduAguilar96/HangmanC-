/*
 main.cpp
 
 A program that lets the player play
 a small game of hangman
 
 Eduardo Aguilar leal    A01193626
 11/16/2016
 Version 1.0
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//read file
#include <fstream>

//random number
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

using namespace std;

/*
 getWordFromFile
 
 function that gets the word
 
 Parameters:
 none
 
 Return: content, string variable that is word
*/
string getWordFromFile (){
    
    
    
    //variable for menu options
    int iOpt = 0;
    //variable for the size of the txt
    int isize;
    //variable for enter
    string sEnter;
    //string for dco path
    string sdoc;
    
    //loop for replayability
    do{
        
        cout << "Please choose a file for your guessing word" << endl << endl;
        //menu display
        cout << "----------MENU----------" << endl;
        cout << endl;
        cout << "     1.  Programming Fundamentals class students" << endl;
        cout << "     2.  Pokemons" << endl;
        cout << "     3.  Dictators & Conquerers" << endl;
        cout << "     4.  Proteins (WARNING: longest word in english language may freeze your computer)" << endl;
        cout << endl;
        
        cout << "Enter a # for an option : ";
        cin >> iOpt;
        
        //switch that determines which option
        switch (iOpt)
        {
            case 1:
                //students
                sdoc = "doc_students.txt";
                isize = 27;
                break;
                
            case 2:
                //pokemons
                sdoc = "doc_pokemons.txt";
                isize = 729;
                break;
                
            case 3:
                //dictatos
                sdoc = "doc_dictators.txt";
                isize = 60;
                break;
                
            case 4:
                //proteins
                sdoc = "doc_proteins.txt";
                isize = 37;
                break;
                
            default:
                //default case
                cout << endl << "Invalid input" << endl;
                
                break;
        }
        
    }while(iOpt != 1 && iOpt != 2 && iOpt != 3 && iOpt != 4);
    
    
    //what is gettin read
    string content;
    
    //the file
    ifstream file(sdoc);
    
    //random
    srand(time(NULL));
    int irand = rand() % isize;
    
    //read lines and stop at random
    for(int i = 0; i < irand; i++){
        file >> content;
    }
    
    return content;
}

/*
 hangman
 
 small function to display
 the current hangman state
 
 Parameters:
 ifails         the current number of failed attemptes
 
 Return: none, void
*/
void hangman (int ifails){
    //void function to display the current hangamn state
    switch (ifails) {
        case 0:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
        //=========================================
        case 1:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  0   0  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
        //==========================================
        case 2:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  0   0  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
            //=========================================
        case 3:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  0   0  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|               /" << endl;
            cout << "|              /" << endl;
            cout << "|             /" << endl;
            cout << "|            /" << endl;
            cout << "|           /" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
            //========================================
        case 4:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  0   0  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|               / \\" << endl;
            cout << "|              /   \\" << endl;
            cout << "|             /     \\" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           /         \\" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
            //=========================================
        case 5:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  0   0  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|                |" << endl;
            cout << "|               /|" << endl;
            cout << "|              / |" << endl;
            cout << "|             /  |" << endl;
            cout << "|            /   |" << endl;
            cout << "|           /    |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|               / \\" << endl;
            cout << "|              /   \\" << endl;
            cout << "|             /     \\" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           /         \\" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
            //============================================
        case 6:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  X   X  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|                |" << endl;
            cout << "|               /|\\" << endl;
            cout << "|              / | \\" << endl;
            cout << "|             /  |  \\" << endl;
            cout << "|            /   |   \\" << endl;
            cout << "|           /    |    \\" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|               / \\" << endl;
            cout << "|              /   \\" << endl;
            cout << "|             /     \\" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           /         \\" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
            //=========================================
        default:
            cout << "===============================" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|             ___≤___" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           |  0   0  |" << endl;
            cout << "|           |    o    |" << endl;
            cout << "|            \\_______/" << endl;
            cout << "|                |" << endl;
            cout << "|               /|\\" << endl;
            cout << "|              / | \\" << endl;
            cout << "|             /  |  \\" << endl;
            cout << "|            /   |   \\" << endl;
            cout << "|           /    |    \\" << endl;
            cout << "|                |" << endl;
            cout << "|                |" << endl;
            cout << "|               / \\" << endl;
            cout << "|              /   \\" << endl;
            cout << "|             /     \\" << endl;
            cout << "|            /       \\" << endl;
            cout << "|           /         \\" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            
            break;
    }
}

/*
 startGame
 
 small function to display
 messege for game start
 
 Parameters:
 none
 
 Return: none, void
*/
void startGame(){
    
    cout << "Welcome ot Hangman 1.0 !!!" << endl;
    
    //display hangman
    hangman(7);
    
}

/*
 guessState
 
 it displays the current state of
 the player and the game
 
 Parameters:
 sans           string for the answer word
 cguess         vector that stores guessed letters
 ifails         integer that determines the number of fails
 
 Return: use of reference values
*/
void showState(string sans, vector <char> &cguess, vector <char> &cused, int ifails){
    
    //auxilary string variable to display
    string aux = sans;
    
    //loop through variable and rewrite it with '_'
    for (int i = 0; i < aux.length(); i++){
        aux[i] = '_';
    }
    
    //check and compare answers vector to original answer word
    for(int i = 0; i < sans.length(); i++){
        for(int j = 0; j < cguess.size(); j++){
            
            //if elemnt in word, put element in place at auxilary word
            if(sans[i] == cguess[j]){
                aux[i] = cguess[j];
            }
        }
    }
    
    //display hangman
    hangman(ifails);
    //display auxilary word
    cout << endl << aux << endl;
    
    cout << endl << "Words used: " << endl;
    for(int i = 0; i < cused.size(); i++){
        cout << " " << cused[i] << " ";
    }
    cout << endl;
}

/*
 guessState
 
 it recieves a letter from the user and
 detrmines the outcome
 
 Parameters:
 sans           string for the answer word
 cguess         vector that stores guessed letters
 ifails         integer that determines the number of fails
 won            boolean variable that determines if won
 lost            boolean variable that determines if lost
 
 Return: use of reference values
*/
void guessState (string sans, vector <char> &cguess, vector <char> &cused, int &ifails, bool &won, bool &lost){
    
    //auxilary variable for input char
    string sletterguess;
    cout << "Please enter a letter you think is inside the word or the complete word" << endl;
    cin >> sletterguess;
    
    //bool that toogles if right
    bool guessedRight = false;
    
    //check if inputed word is equal to guess word
    if(sletterguess == sans){
        
        cout << "Congrats you inputed the whole word" << endl;
        
        guessedRight = true;
        
        won = true;
        
        //add letters to vector for showing state
        for(int i = 0; i < sans.length(); i++){
            cguess.push_back(sletterguess[i]);
        }
    
    //check for the inputed char, first letter of word
    }else{
        
        //push back, to used chars
        cused.push_back(sletterguess[0]);
        
        //loop through guess word length
        for(int i = 0; i < sans.length(); i++){
            
            //verify if a letter in guess word is equal to input
            if(sans[i] == sletterguess[0]){
                
                
                //push back, put element in vector
                cguess.push_back(sletterguess[0]);
                
                //guessed right
                guessedRight = true;
            }
        }
    }
    
    //if not guessed add to fails
    if(!guessedRight){
        ifails++;
    }else if(!won){
        cout << "You guessed a letter in the word!" << endl;
    }
    //check if lost
    if(ifails >= 6){
        lost = true;
    }
    
    //check if won, if not guessed entire word at once
    if(!won){
        won = true;
        for (int i = 0; i < sans.length(); i++){
            if (!(find(cguess.begin(), cguess.end(), sans[i]) != cguess.end()))
            {
                won = false;
            }
        }
    }
}

/*
 main
 
 It calls functions
 ,declares the variables
 ,loops the game
 and detrmines state
 
 Parameters:
 None
 
 Return: 0 for the sake of no errors
 */
int main() {
    
    //variable for game looping
    char cplay = 'y';
    
    //loop game while players wants to keep playing
    while(cplay == 'y' || cplay == 'Y'){
    
        //create vector for storing correct guesses
        vector <char> cguess;
        
        //create vector to storeing used letters
        vector <char> cused;
        
        //boolean variables to check state
        bool won = false, lost = false;
        
        //variable to check failed trials
        int ifails = 0;
        
        //start game, output messege
        startGame();
        
        //get word for guessing
        string sans = getWordFromFile();
        
        //initial show state
        showState(sans, cguess, cused, ifails);
        
        //loop through game
        while(!won && !lost){
        
            guessState(sans, cguess, cused, ifails, won, lost);
            
            showState(sans, cguess, cused, ifails);
        
        }
        
        //output state
        if(lost){
            cout << endl << "You lost" << endl;
            cout << endl << "Your word was " << sans << endl;
        }
        if(won){
            cout << endl << "You won, congrats" << endl;
        }
        
        
        //prompt player to play again
        cout << "Would you like to play again? (Y)?" << endl;
        cin >> cplay;
    }
    
    cout << endl << "You exited the game" << endl;
    
    return 0;
}
