// Author: Ryu R. Mendoza
// Date: April 6, 2024
// Description: A program that demonstrates the implementation of a dynamic array list.

/*
 * This function creates a DynamicArrayList object and provides a menu for the user to interact with the list.
 * The user can perform the following operations:
 *
 * 'a': Add an element to the list. The user must provide the element to be added after the 'a' command.
 * 'r': Remove an element from the list. The user must provide the element to be removed after the 'r' command.
 * 'p': Print the list.
 * 'x': Exit the program.
 */

#include "myArrayList.h"
#include <iostream>
using namespace std;

int main()
{
    // Create a DynamicArrayList object
    ArrayList *myList = new DynamicArrayList();

    char op;
    int num, pos;

    cout << "Menu:" << endl;
    cout << "a: Add an element to the list." << endl;
    cout << "r: Remove an element from the list." << endl;
    cout << "g: Get the position of an element in the list. (zero-based)" << endl;
    cout << "p: Print the list." << endl;
    cout << "x: Exit the program." << endl;

    do
    {

        cout << "Op: ";

        cin >> op;

        switch (op)
        {

            // Sample Input: a10
        case 'a':

            cin >> num;
            myList->add(num);
            break;

            // Sample Input: r10
        case 'r':

            cin >> num;
            myList->remove(num);
            break;

        case 'g':
            cin >> pos;
            cout << "Element at position " << pos << ": " << myList->get(pos) << endl;

        case 'p':
            myList->print();
            break;

        case 'x':
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid operation." << endl;
            break;
        }
    } while (op != 'x');

    delete myList;

    return 0;
}