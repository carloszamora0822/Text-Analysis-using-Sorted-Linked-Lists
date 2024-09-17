#include <iostream>
#include <fstream>
#include "linkedlist.h"

using namespace std;

int main()
{
    ifstream inputFile("errorHandlingRead.txt");

    LinkedList linkedlist;

    linkedlist.read_txt(inputFile);

    if(!inputFile.is_open())
    {
        cout << "Error: Could not open the file!" << endl;
    }

   // LinkedList *ptr = NULL;
    //ptr = new LinkedList();

}
