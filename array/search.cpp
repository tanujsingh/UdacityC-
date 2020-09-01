#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int searchArray[10] = {324, 4567, 6789, 5421345, 7, 65, 8965, 12, 342, 485};
    int searchKey, location = -1;

    while (1)
    {
        cout << "Enter an integer (-1 to Quit) \n";
        scanf("%d", &searchKey);

        if (searchKey == -1)
        {
            break;
        }

        for (int i = 0; i < 10; i++)
        {
            if (searchKey == searchArray[i])
            {
                location = i + 1;
                break;
            }
        }

        if (location != -1)
        {
            cout << searchKey << " is at location " << location << " in the array.\n";
        }
        else
        {
            cout << searchKey << " is not in the array.\n";
        }
    }

    return 0;
}
