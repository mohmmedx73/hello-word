// FCI – Programming 1 – 2018 - Assignment 2
// Program Name:   XOR Cipher(8) .cpp
// Last Modification Date: 3/3/2018
// Author1 and ID and Group: Khaled Ali Mater. ID:201603368. G17

// Teaching Assistant:  Dr. Mohammed Al-Ramly.
// Purpose: For the purpose of learning programming.
#include <iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()

{   int fahrenheit;
    int celsius;
    celsius = 100;

    while (celsius >= 0)
        {
        fahrenheit = ((celsius - 32) * 5 / 9);
        cout<<celsius<<" degrees C= "<<fahrenheit <<" degrees F\n";
        celsius--;
        }
          system("pause");

}









