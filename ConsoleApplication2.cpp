// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

int main()
{
    int x[10], y = 5, z;

    vector<int> vect1(4);

    vect1.at(0) = 100;
    vect1.at(1) = 200;
    vect1.at(2) = 300;
    vect1.at(3) = 400;

    cout << vect1.at(3);

    /*
    for (int i = 0; i < 10;) {
        x[i] = (i+1) * (i+1);
        //cout << ++i << endl;
        cout << "The " << i+1 << " value in the array is " << x[i] << endl;

    }*/
    //cout << i;
    //cout << "Hello World!\t" << mychar2[4];
    //cout << myst.at(8);
    //cout << myst.size();
    //if (myst.at(0) == myst.at(6)) 
    //    cout << "Characters are equal!\n";
    //cout << "This is not governed by the if statement\n";
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
