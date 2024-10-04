#include <fstream>
#include <vector>
#include <string>

using namespace std;

class LinkedList
{
    public:
    LinkedList();
    ~LinkedList();

    // reading and manipulating words
    void read_txt(ifstream &inputfile);
    void insertSorted(const string &word);
    void printList() const; // error checking
    void output() const;

    private:
    ifstream inputfile;
    
    // outputs
    int countCleanedWords;
    int countTotalWords;
 
    // declaring nodes
    struct Node
    {
        string word;
        Node *next;
        Node(const string &w)
        {
            word = w;        
            next = nullptr;  
        }

    };

    Node *head;


};
