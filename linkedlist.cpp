#include "linkedlist.h"
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// constructor

LinkedList::LinkedList()
{
}

// destructor
LinkedList::~LinkedList()
{
}

bool LinkedList::isWord(string &word)
{
    for (int i = 0; i < word.length(); i++) 
    {
        if (!isalpha(word[i])) 
        {
            return false;  
        }

        else
            word[i] = tolower(word[i]);
    }
    
    return true;
}   

void LinkedList::read_txt(ifstream &inputfile)
{
    vector <string> validWords;
    string word;

    while(inputfile >> word)
    {
        if(isWord(word))
        {
            validWords.push_back(word);
        }

        else
            continue;
    }

    for(int i = 0; i < validWords.size(); i++)
    {
        cout << validWords[i] << endl;
    }


}





