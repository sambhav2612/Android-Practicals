// implement a lifo data structure
#include"myHeader.h"    // custom header

// class to store content for each node of our lifo structure
class node {
public:
    int info;
    node* next;

    // default constructor for class node
    node() {
        info = 0;
        next = NULL;
    }

    // paramertised constructor of class node to get some value into info 
    node(int data) {
        info = data;
        next = NULL;
    }
};

// class to implement linked list for our lifo structure
class lifo {
public:
    node* top;
    int size;

    lifo() {
        size = 0;
        top = NULL;
    }

    void push(int data);    // method 1 : standard in method
    void pop();             // method 2 : standard out method

    int eleAtTop();         // method 3 : auxillary method to find the element at top of the lifo structure
    int isEmpty();          // method 4 : auxillary method to check if the structure is empty or not
    int sizeOfList();       // method 5 : custom mthod to return the size of the structure

    void traverse();        // method 6 : standard method to traverse the list
};

// method 1
void lifo::push(int data) {
    node* newNode = new node(data);

    // to check if the newNode was created
    if (!newNode) { 
        cout << "\n Could not create newNode ... return";
        return;
    } else {

        // to check if top is NULL
        if (!top) {
            top = newNode;
            top->next = NULL;
        } else {
            newNode->next = top;
            top = newNode;
        }

        // to check (and confirm) if top is pointing at newNode
        if (top == newNode) {

            // if it is, increase the size of the structure immediately
            ++size;
            cout << "\n Datum: " << data << " successfully inserted at top. ";

            // to check if list can be traversed
            if (!isEmpty()) {
                cout << "\n Here's how it looks like now: ";
                traverse();
            }
        }
    }
}

// method 2
void lifo::pop() {

    // to check if the structure is empty
    if (isEmpty()) {
        cout << "\n Empty lifo structure detected ... return";
        return;
    } else {

        // if not, create two node instances, one to point at top and other to point at the next node of top
        // the former would be the one to get deleted or popped out
        node* p = new node();
        node* q = new node();
        int val = 0;

        // to check if any of the new node instances were not created
        if (!p | !q) {
            return;
        } else {
            p = top;
            q = top->next;

            // get the value stored at the top node
            val = p->info;

            top = q;

            // delete (and free) the top of the list
            delete p;

            // to confirm deletion
            if (p) {
                p = NULL;
            }

            // to check (and confirm) if top is pointing at nect node a.k.a. q
            if (top == q) {

                // if it is, increase the size of the structure immediately
                --size;
                cout << "\n Datum: " << val << " successfully removed from top. ";

                // to check if list can be traversed
                if (!isEmpty()) {
                    cout << "\n Here's how it looks like now: ";
                    traverse();
                }
            }
        }
    }
}

// method 3
int lifo::eleAtTop() {
    return top->info;
}

// method 4
int lifo::isEmpty() {
    return ((top == NULL) & (size == 0));
}

// method 5
int lifo::sizeOfList() {
    return size;
}

// method 6
void lifo::traverse() {

    // to check if the structure is empty
    if (isEmpty()) {
        cout << "\n Empty lifo structure detected ... return";
        return;
    } else {

        // if not, create a node instance to point at top and traverse throughout the list
        node* p = new node();
        p = top;
        int k = 0;

        // to check if the new node instance was not created
        if (!p) {
            return;
        } else {
            cout << "\n\n Traversing lifo structure ... (TOP)";

            // loop while p becomes NULL and k remains lesser than size of the structure
            while((p != NULL) & k < size) {
                ++k;                            // increment k
                cout << p->info << "->";
                p = p->next;                    // move p to the next node in the list
            }
            if (!p) {                           // if p has reached NULL
                cout << "(NULL)";
            }
        }
    }
}

// main driver function
int main () {
    lifo list;
    int choice;
    int x = 0;
    int value = 0;
    do {
        
        // to clear the discplay
        system("clear");                                

        cout << "\n Implementing a LIFO structure";
        cout << "\n\n MENU";
        cout << "\n 1. Push(x)";
        cout << "\n 2. Pop(x)";
        cout << "\n 3. Traverse";
        cout << "\n 4. Print the element at Top";
        cout << "\n 5. Print the size of the lifo structure";
        cout << "\n 6. Check if the structure is empty or not";

        again:        
        cout << "\n\n Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1 : cout << "\n Enter data to push: ";
                     cin >> value;

                     list.push(value);
                     break;

            case 2 : list.pop();
                     break;

            case 3 : list.traverse();
                     break;

            case 4 : if (!list.isEmpty())
                        cout << "\n Element at the top is: " << list.eleAtTop();
                     else 
                        cout << "\n No element found at the top.";
                     break;

            case 5 : if (!list.isEmpty()) 
                        cout << "\n Size of the structure is: " << list.sizeOfList();
                     else 
                        cout << "\n ZERO size detected";
                     break;

            case 6 : // using conditional operators to check if the structure is empty or not
                     list.isEmpty() ? cout << "\n Structure is empty" : cout << "\n Structure is not empty";
                     break;

            default : cout << "\n Entered choice is invalid please enter again ... return";
                      goto again;
                      break;
        }
        cout << "\n Continue? (enter !0 for yes): ";
        cin >> x;    
    } while(x);     // loops while x remains greater than zero

    // clears the screen again on exit
    system("clear");

    return 0;
}
