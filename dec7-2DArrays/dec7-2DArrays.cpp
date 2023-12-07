#include <iostream>
#include <vector>

using namespace std;

//class Person //This is NEXT semester
//{
//    int age; 
//    int height; 
//    int weight; 
//    string eyeColor; 
//};

int findMinimumAge(vector<int> listOfAges)
{

    int minimumAge = listOfAges[0]; //so far ...
    for (int currentAgeInList : listOfAges)
    {
        if (currentAgeInList < minimumAge)
        {
            minimumAge = currentAgeInList; 
        }
    }

    return minimumAge;
}

int main()
{
    vector<int> ageList = { 32, -21, 15 };

    cout << "Minimum age : " << findMinimumAge(ageList) << endl;


    //vector<Person>
                                         //age   //weight (lbs)  //height(in)
    vector<int> alice_characteristics = { 32,     140,           65 };

    vector<int> bob_characteristics; 
    bob_characteristics.push_back(21); 
    bob_characteristics.push_back(200);
    bob_characteristics.push_back(72);

    vector<int> carol_characteristics{ {25, 110, 60} };

    //making a TABLE! (matrix) 
    vector< vector<int> > tableOfPeoplesCharacteristics =
    {
        {32, 140, 65},//row 1 (alice)
        {21, 200, 72},//row 2 (bob)
        {25, 110, 60} //row 3(carol)
    };

    int staticTableOfPeoplesCharactersistics[3][3]; //this is another way of doing 
                                                    //what line numbers 28 - 33 are doing 
    staticTableOfPeoplesCharactersistics[0][0] = 32; 
    //vector<vector<int> > peopleCharacteristicsTable; 

    //for (auto& row: tableOfPeoplesCharacteristics)
    //{
    //    for (auto& characteristic : row)
    //    {
    //        cout << characteristic << " ";
    //    }
    //    cout << "\n";
    //}

    //cout << "The maximum age is: " << findMaxAge(tableOfPeoplesCharacteristics) << endl; 

    return 0;
}