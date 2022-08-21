///Sorting

//Insertion Sort
/*
#include<iostream>
using namespace std;
int main ()
{
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};

    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)
    {
        cout <<myarray[i]<<"\t";
    }
    for(int k=1; k<10; k++)
    {
        int temp = myarray[k];
        int j= k-1;
        while(j>=0 && temp <= myarray[j])
        {
            myarray[j+1] = myarray[j];
            j = j-1;
        }
        myarray[j+1] = temp;
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)
    {
        cout <<myarray[i]<<"\t";
    }
}
*/
//Bubble Sort
/*
#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
*/
