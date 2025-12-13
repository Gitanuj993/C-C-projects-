#include<iostream>
using namespace std ;
#define Max 20 
// pP rogram to show use of Array 
// Functios which can be called when required!
void insert();
void display(void);
int  search(int);
void delet();
void update(); 
 int size();
 int a[Max];
  int len ;
     int deletedEle[Max];
// Main function  
int main()
{
    char ch = 'y';
    while (ch == 'y')
    {     cout <<"\n†**********************************************************\n";
        cout << " \nChoose What You want to do - \n";
        cout<<"1. To insert an element \n";
        cout<<"2. To search for Element \n";
        cout<<"3. To Delete an Element \n ";
        cout<<"4. To update \n";
        cout <<"5. To display !\n";
        cout << " 6. Exit";
        int ans ;
        cout << "\n–--------------------------------------> Enter Your choice :";
        cin >> ans;
        if (ans == 6)
        break;
     
        switch(ans)
        {
            case 1 :
                            insert();                     // if error occure than  modify return type void
                            break;
             
            case 2 :
                        int key ;
                          cout << "Enter Element to find its index  :"   ;
                          cin >> key ;
                          int index = search(key);
                            cout << "Element " << key << " found at INDEX : "  << index<<endl;     
                          
            break ;
            
            case 3 : delet();
                            
            case 5 : display();
            break;                                                                    
                            
                            
            
        }
        
    }
}    
int size()
{
    int  c=0;
    for (int i = 0 ; i  < Max ; i ++)
    {
        if (a[i] != 0 )
            { c++;}
    }
    return c;
}
void insert()
{
    len = size();
 //   cout << " ----Size of Array is :" << len <<endl;
      cout << " Number of Elements before Insertion is :"<<len<<endl;
    int ch ;
    cout << "Number Of Elements You Want to Insert :";
    cin>> ch;
   int next = len + ch;
   cout  <<endl;
     int countZ = 0; // to add number of zero elements 
    if ( ch > Max)
    {cout << " Array overflow occure !";}
    else {
              for (int i = len; i<ch+len;i++)
                       {
                            cout << " Enter Element " << i+1 << ": ";
                            cin>>a[i]; 
                            if (a[i]==0)
                            { countZ++ ;}
                        } 
              }                      
    len = size() + countZ;
//    len = len + countZ;      // number of nonzero elements
     cout << "  Number of elements in the Array after insertion is :" << len << " and Insertion is successfull!";   
    
}
void display()
{
    for (int i = 0 ; i< len ; i ++  )
    { cout << a[i] << " " ; }
    
}

void search(int key)
    {
         int indexOfEle ;         
         for (int i = 0 ; i < len ;
                 i++)
                     {   if ( a[i] == key)  
                         { 
                         i=indexOfEle ;
                   
                     cout << "Program executed successfully!";
                     break ;
                          }
                          if (i==len-1 && a[i] != key )
                              { cout << "Element isn't found in the given array !";
                              indexOfEle = -1; }
                       }            
                  return indexOfEle ;
      }
    
void delet()
          {
               int num ;
               cout << " Enter number of Elements you want to delete :"   ;
               cin >>  num ;
               char choice ;
               cout << "Do You Want to delete the Elements Really ! (y/n) :";
               cin >> choice;
               if (choice!='y')
                    { ` }
                
                //int del[num]; // already decleared in the main function if program can't run 
                // Declear the array in the global scope !
                for (int i = 0 ; i <num ; i++)
                { cout << "Enter Element to delete : " ;
                cin>>deletedEle[i];
                }
                 cout << endl << " Now processong your request to delete element(s)!";
                 for(int i = 0 ; i<num; i++)
                 { int ele2delet = search(deletedEle[i]) ;
                   a[ele2delet] = -1 ; // -1 represent deleted elements 
                  }      
                  cout << " Elements Deletes Successfully\n!";
               
           } 


/*
 0.0 : currently unable to find occupied elements of array . (exact nunbers of filled )
 0.1 : when again insert elements , program override the previous values !
0.2 + : While displaying elements only filled elements is shown ! 
0.3 - :   for ( int x : a)
         { 
              i ++ ;
              if (x == key)   
              {cout << "Key is available  at :"<<i<<" index"; }
              //Doesn't run ;'
0.4  + :  at codeLine No 82 , addition is feasible in a variable whivh also calling a function!

*/