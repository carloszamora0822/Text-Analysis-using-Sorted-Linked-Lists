#include <fstream>
#include <vector>
#include <string>

using namespace std;

class LinkedList
{
    public:
    LinkedList();
    ~LinkedList();
    
    // node manipulation
    //string words;
   //LinkedList *next;
    
   //void insert_sorted_list(LinkedList* &head, string &words);
    


    // reading file
    void read_txt(ifstream &inputfile);
    bool isWord(string &word);

    private:


};