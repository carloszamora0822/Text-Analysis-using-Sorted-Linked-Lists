#include <iostream>
#include <fstream>
#include "linkedlist.h"

using namespace std;

int main()
{
    LinkedList linkedlist;
    string fileName;
    int choice;

    // screen
    cout << "Choose a file by entering the corresponding number:\n";
    cout << "1. CallWild.txt\n";
    cout << "2. AnneGables.txt\n";
    cout << "3. WarPeace.txt\n";
    cout << "4. TimeMachine.txt\n";
    cout << "5. SleepyHollow.txt\n";
    cout << "6. Dracula.txt\n";
    cout << "7. Hound.txt\n";
    cout << "8. JungleBook.txt\n";
    cout << "9. Huckelberry.txt\n";
    cout << "10. Odyssey.txt\n";
    cout << "11. Enter your own file\n";
    
    cout << "Enter your choice (1-11): ";
    cin >> choice;

    // switch to store or choose the file name
    switch(choice) 
    {
        case 1: fileName = "CallWild.txt"; break;
        case 2: fileName = "AnneGables.txt"; break;
        case 3: fileName = "WarPeace.txt"; break;
        case 4: fileName = "TimeMachine.txt"; break;
        case 5: fileName = "SleepyHollow.txt"; break;
        case 6: fileName = "Dracula.txt"; break;
        case 7: fileName = "Hound.txt"; break;
        case 8: fileName = "JungleBook.txt"; break;
        case 9: fileName = "Huckelberry.txt"; break;
        case 10: fileName = "Odyssey.txt"; break;
        case 11: cout << "File name: ";
        cin >> fileName; break;
        default: 
            cout << "Invalid choice. Please enter a number between 1 and 11." << endl;
            return 1; 
    }

    ifstream inputFile(fileName);

    if(!inputFile.is_open())
    {
        cout << "Error, could not open the file!" << endl;
    }
    
    linkedlist.read_txt(inputFile);
    //linkedlist.printList();
    linkedlist.output();
}
