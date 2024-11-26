#include<iostream>
using namespace std;
main()
{
	// print the 3 shape

    // Left-side triangle shape
    int rows = 7;
    
    for (int i = 1; i <= rows; ++i) 
	{
        for (int j = 1; j <= i; ++j) 
		{
            cout << "*";
        }
        cout << endl;
    }
    
    // Right-side triangle shape
    int row = 7;
    
    for (int i = 1; i <= row; ++i)
	 {
        
        for (int j = 1; j <= (row - i); ++j)
		{
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) 
		{
            cout << "*";
        }
        cout << endl;
     }
    

    int n = 5; 

   
    for (int i = 1; i <= n; i++) {
       
        for (int j = i; j < n; j++) 
		{
            cout << " ";
        }
   
        for (int j = 1; j <= (2 * i - 1); j++) 
		{
            cout << "*";
        }
        cout << endl;
    }

   
    for (int i = n - 1; i >= 1; i--)
	 {
        
        for (int j = n; j > i; j--)
		{
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
	    {
            cout << "*";
        }
        cout << endl;  
}
    return 0;
}
