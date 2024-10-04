#include "linkedlist.h"
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// constructor
LinkedList::LinkedList() 
{
    head = nullptr; 
    countCleanedWords = 0; 
    countTotalWords = 0; 

}

// destructor
LinkedList::~LinkedList()
{
    Node *current = head;
    while (current != nullptr) 
    {
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::insertSorted(const string &word) 
{
    // duplicate check
    Node *current = head;
    while (current != nullptr) 
    {
        if (current->word == word) 
        {
            return;
        }
        current = current->next;
    }

    Node *newNode = new Node(word);

    if (head == nullptr || word < head->word) 
    {
        countCleanedWords++;
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *prev = nullptr;
    current = head;
    while (current != nullptr && current->word < word) 
    {
        prev = current;
        current = current->next;
    }

    newNode->next = prev->next;
    prev->next = newNode;
    countCleanedWords++;
}

void LinkedList::read_txt(ifstream &inputfile)
{
    string word;

    while(inputfile >> word)
    {
        string cleanedWord = "";

        countTotalWords+=1;

        for (int i = 0; i < word.length(); i++) 
        {
            if(isalpha(word[i]) || word[i] == '-' || word[i] == '\'') 
            {
                cleanedWord = cleanedWord + char(tolower(word[i]));
            }

        }

        if (!cleanedWord.empty()) 
        {
            insertSorted(cleanedWord);
        }
    }
}

void LinkedList::printList() const 
{
    Node *current = head;
    while (current != nullptr) 
    {
        cout << current->word << endl;
        current = current->next;
    }
}

void LinkedList::output() const
{
    cout << endl;
    cout << "Total unique words: " << countCleanedWords << endl;
    cout << "Total words: " << countTotalWords << endl;
}
