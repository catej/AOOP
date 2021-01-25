#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string instructors[3];
    instructors[0] =  "Mark Jones";
    instructors[1] =  "Sandy Smith"; 
    instructors[2] =  "Sarah Johnson";
    int instructorsLength;
    instructorsLength = sizeof(instructors)/ sizeof(instructors[0]);
    
    for (int i = 0; i <  instructorsLength; ++i) 
    {
        cout << i <<") " << instructors[i] << endl;
    }

    getchar();
    return 0;
}