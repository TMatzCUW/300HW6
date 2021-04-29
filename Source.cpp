#include <iostream>
#include <string>

using namespace std;

string jsonArrayEditor(string jsonArray)
{
    int counter = 1;
    string newString = "";
    for (int i = 1; i < jsonArray.length(); i++)
    {
        if (jsonArray[i] == '[')
        {
            counter++;
        }
        else if (jsonArray[i] == ']')
        {
            counter--;
        }

        if (jsonArray[i] == ']' && counter == 0)
        {
            return newString;
        }
        else
        {
            newString += jsonArray[i];
        }
    }
    return "Please enter a jsonArray represented as a string";
}

int main(int argc, char* argv[])
{
    string exampleInput = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";
    string exampleOutput = jsonArrayEditor(exampleInput);
    cout << exampleOutput << endl;
    return 0;
}