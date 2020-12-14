#include <iostream>
#include <fstream>
using namespace std;
class NumberList
{
protected:
     // Declare a class for the list node.
     struct ListNode
     {
          double value;
          ListNode * next;
          ListNode(double value1, ListNode * next1 = NULL)
              {
              value = value1;
              next = next1;
              }
         
     };
     ListNode * head; // List head pointer
 public:
     NumberList() { head = NULL; } //Constructor
    ~NumberList(); // Destructor
     void add(double number);
   //  void remove(double number);
     void displayList();
};
NumberList list;
void NumberList::add(double number)
{
if (head == NULL)
         head = new ListNode(number);
else
         {
         // The list is not empty.
             // Use nodePtr to traverse the list
         ListNode * nodePtr = head;
         while (nodePtr->next != NULL)
         nodePtr = nodePtr->next;
        
             // nodePtr->next is NULL so nodePtr points to the last node.
             // Create a new node and put it after the last node.
             nodePtr->next = new ListNode(number);
         }
}
void NumberList::displayList()
{
     ListNode * nodePtr = head; // Start at head of list
     while (nodePtr)
         {
         // Print the value in the current node
         cout << nodePtr->value << " ";
         // Move on to the next node
         nodePtr = nodePtr->next;
         }
}
NumberList::~NumberList()
{
ListNode * nodePtr = head; // Start at head of list
     while (nodePtr != NULL)
         {
         // garbage keeps track of node to be deleted
         ListNode * garbage = nodePtr;
         // Move on to the next node, if any
         nodePtr = nodePtr->next;
         // Delete the "garbage" node
         delete garbage;
         }
 }
void createLinkedList()
{
    int number;
    ifstream numberFile("file.txt");
    if (!numberFile) {
        cout << "Error in opening the file of numbers.";
        exit(1);

    }
    while (numberFile >> number) {// create a node to hold this
        list.add(number);
    }
}
void addNumber()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;
    list.add(x);
}


int main(int argc, const char* argv[]) {
    int choice;
    do {
        cout << "What do you want top do? " << endl;
        cout << "1. Crearte a linked list " << endl;
        cout << "2. Traverese a linked list" << endl;
        cout << "3. Add a number to the linked list" << endl;
        cout << "4. Remove a number fro the linked list" << endl;
        cout << "5. Destroy the linked List"<<endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            createLinkedList();
            break;
        case 2:
            list.displayList();
            break;
        case 3:
            addNumber();
            break;
        case 4:
           // removenumber();
            break;
        case 5:
            list.~NumberList();
            break;
        case 6:
            return 0;
            break;
        }
    } while (1);
    return 0;
}

