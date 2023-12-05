#include <iostream>
#include<vector>

using namespace std;

int main()
{
    //int a
    //array == list

    int theNumber = 1; //variable can vary
    theNumber = 2;

    
    //make a list of strings (grocery list) 
    vector<string> groceryList =
    {
        "eggs",
        "bacon",
        "milk", 
        "something else"
    };

    //cout << groceryList[0] << endl; 
    groceryList.push_back("peas");
    groceryList.push_back("corn");
    //cout << groceryList.size() << endl; 
    for (int i = 0; i < groceryList.size(); i++)
    {
        cout << groceryList[i] << endl; 
    }

    return 0;
}