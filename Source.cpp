#include <iostream>
#include <string>

using namespace std;

string processJsonArray(string aJsonString)
{
    int openBracketCounter = 0;
    int closedBracketCounter = 0;
    //If I could figure it out, remove first open bracket here
    for (int i = 0; i < aJsonString.length(); i++)
    {
        if (aJsonString[i] == char('['))
        {
            openBracketCounter++;
        }
        else if (aJsonString[i] == char(']'))
        {
            if (openBracketCounter == 1)
            {
                //If I could figure it out, delete end bracket and return the string
                return aJsonString;
            }
            else
            {
                openBracketCounter--;
            }
        }

    }
    return "";
}

int main()
{
    string jsonString = "[{\"fname\":\"val1\", \"lname\":\"val2\", \"sums\":[1,2,3]}, {\"fname\":\"val3\", \"lname\":\"val4\"}";
    string modifiedString = processJsonArray(jsonString);
    cout << modifiedString << endl;
    return 0;
}