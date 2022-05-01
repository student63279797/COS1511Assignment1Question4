#include <iostream>
#include <string>

using namespace std;

int main()
{
    int programsDone = 0,result=0;
    while (programsDone < 5 && result < 50)
    {
        cout << "Please enter amount of completed programs.";
        cin>>programsDone;
        cout << "Please enter mark obtained.";
        cin>>result;
    }
    cout << "Good! You can now proceed to the next exercise.";
        
    return 0;
}
