// Chapter 8_8.10_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   
    int Width;
    int Height;
    int X_Axis = 1;
    int Y_Axis = 1;

    int Upper_Left_Corner = 218;
    int Upper_Right_Corner = 191;
    int Lower_Left_Corner = 192;
    int Lower_Right_Corner = 217;
    int All_Sides = 179;
    int Top_To_Bottom = 196;

    cout << "Enter Width of Rectangle: ";
    cin >> Width;
    
    cout << "Enter Height of Rectangle: ";
    cin >> Height;

    Width *= 2;
    cout << char(Upper_Left_Corner);
    
    while ( X_Axis < Width)
    {
        cout << char(Top_To_Bottom);
        X_Axis++;
    }
   
    cout << char(Upper_Right_Corner) << endl;

    while (Y_Axis < Height)
    {
        cout << char(All_Sides) << setw(Width) << char(All_Sides) << endl;
        Y_Axis++;
    }
    
    cout << char(Lower_Left_Corner);

    for (Y_Axis = Height, X_Axis = 1; Y_Axis = Height, X_Axis < Width; X_Axis++)
    {
        cout << char(Top_To_Bottom);

    }

    cout << char(Lower_Right_Corner) << endl;

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
