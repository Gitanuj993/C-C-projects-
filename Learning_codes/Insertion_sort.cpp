#include <iostream>
using namespace std ;

int   main()
{
    int terms ;
    cout << "Enter Number of terms of the array :";
    cin >> terms ;
    int A[terms];
    for ( int i=0 ; i<terms ; i ++)
    {
        cout <<"Enter "<<i+1<<" terms : ";
        cin >> A[i];
    }
    // insertion sort !
    int i, j, key ;
    for (i = 1 ; i <terms ; i ++)
    {
        key = A[i];
        j = i - 1 ;
        while ( j>= 0 && A[j]>key)
        {
            A[j+1] =  A[j] ;
            j = j - 1 ;
        }
        j = j + 1 ;
        A[j] =  key ;
    }
    // show
    char ans ;
    cout << "Do You Want to see the resultant array ? ( y/n ) : ";
    cin >> ans ;
    if ( ans == 'y' || ans == 'Y')
    {
        for ( int i = 0 ; i < terms ; i++)
        { cout << A[i] << " " ; }
        
    }
    else { exit(0); }
    return 0 ;
}