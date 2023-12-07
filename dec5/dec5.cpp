#include <iostream>

using namespace std;

int main()
{
    //STATIC!
    //int listOfNumbers[5] = 
    //{
    //    11, 22, 33, 44, 55
    //};

    //cout << listOfNumbers[2] << endl; 
    //listOfNumbers[0] = 42; 


    //const int DOZEN = 13;
    ////DOZEN = 13; 

    //string cookies[DOZEN] =
    //{
    //    "snickerdoodle",
    //    "Pizookie®",
    //    "oatmeal raisin"
    //    //NOTE that no error occurs if array initialization is incomplete
    //    //(there are less than 12 cookies here)
    //};

    //int nums[DOZEN]; //makes space for 12 integers (each 4 Bytes) in RAM
    //nums[0] = 42; 

    //for (int i = 0; i < DOZEN; i++)
    //{
    //    cout << "Enter number at index " << i << " :" << endl; 
    //    cin >> nums[i]; 
    //}

    //for (int i = 0; i < DOZEN; i++)
    //{
    //    cout << nums[i] << endl; 
    //}


    //int arraySize;

    //cout << "Enter desired array size: " << endl;
    //cin >> arraySize;
    //C-style array (static (and relates to "pointers"))
    int list[1'000'000'000] = { 5, 10, 15 };
    
    double a = 5;

    cout << sizeof(list) << endl; 

    return 0;
}