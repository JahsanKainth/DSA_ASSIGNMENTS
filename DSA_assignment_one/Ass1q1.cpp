/* Q1) Developa Menu driven program to demonstrate the following operations of Arrays
——MENU——-
1.CREATE
2.DISPLAY
3.INSERT
4.DELETE
5.LINEAR SEARCH
6.EXIT */
#include <iostream>
using namespace std;

void menu_dispay()
{
    cout << "\n----MENU----\n";
    cout << "1. CREATE\n";
    cout << "2. DISPLAY\n";
    cout << "3. INSERT\n";
    cout << "4. DELETE\n";
    cout << "5. LINEAR SEARCH\n";
    cout << "6. EXIT\n";
}

int main()
{
    int *arr = nullptr;
    int size;
    int choice;

    while (true)
    {
        menu_dispay();

        cout << "Enter the choice(1-6)\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
        { // creation of array
            cout << "Enter the size of array: ";
            cin >> size;
            arr = new int[size];
            cout << "Enter the elements of array: \n";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
            break;
        }
        case 2:
        { // DISPLAY
            if (size == 0)
            {
                cout << "Array is empty!\n";
            }
            else
            {
                cout << "Array elements: ";
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;
        }
        case 3:
        { // insertion
            if (size == 0)
            {
                cout << "Create an array first ";
            }
            else
            {
                int pos, val;
                cout << "Enter the position of element: \n";
                cin >> pos;
                cout << "Enter the element: \n";
                cin >> val;
                if (pos < 1 || pos > size)
                {
                    cout << "Invalid position";
                }
                else
                {
                    for (int i = size; i >= pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[pos] = val;
                }
                cout << "Array elements: ";
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
        case 4:
        { // deletion of element
            if (size == 0)
            {
                cout << "Array is empty";
            }
            else
            {
                int pos;
                cout << "Enter the position of element to delete";
                cin >> pos;
                if (pos < 1 || pos > size)
                {
                    cout << "Invalid position";
                }
                else
                {
                    for (int i = pos; i < size; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                }
            }
        }
        }
    }
}