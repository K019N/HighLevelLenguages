#include <iostream>
#include <string>

using namespace std;

int variantDefiner(string studentsName, int variantsAmount, int wayToFindVariant) 
{
    if (wayToFindVariant == 1)
    {
        int counter = 0;
        for (int i = 0; i < studentsName.length(); i++)
        {
            if ((int)studentsName[i] != (int)' ') {
                counter += (int)studentsName[i];
            }
        }

        return counter % variantsAmount + 1;
    }
    if (wayToFindVariant == 2)
    {
        return abs((int)studentsName[0]) % variantsAmount + 1 ;
    }
    else
    {
        cout << "There is not such way to define your variant";
        return 0;
    }
}

int main()
{
    string name;
    cout << "Enter your name and surname: ";
    getline(cin, name);

    int variants, way;
    cout << "Enter how many variants do you have: ";
    cin >> variants;
    cout << "Enter the way how you want to get your variant\n" 
        "1 - by all your name\n2 - by the first letter of your name\n";
    cin >> way;

    cout << "\nYour variant is: " << variantDefiner(name, variants, way);
    cin >> way;
    return 0;
}

