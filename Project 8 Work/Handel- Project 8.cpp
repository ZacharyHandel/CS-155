#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//***FUNCTION DECLARATIONS HERE
//***PROPER FUNCTION COMMENT HEADERS REQUIRED
void initializeArray(int[][10], int);
void insertRand(int[][10], int);
void printBoard(int[][10],int);
void getGuess(int[][10], int, int&);



int main(){
    srand(time(0));

    const int numRows = 2;
    const int numCols = 10;

    int ttlFound = 0;

    int cardrows[numRows][numCols];



    initializeArray(cardrows, numRows);

    insertRand(cardrows, numRows);

    printBoard(cardrows, numRows);

    while(ttlFound < 10)
    {
       getGuess(cardrows, numRows, ttlFound);
       printBoard(cardrows, numRows);
    }

   cout<<"Game Over!"<<endl;
} ///END OF MAIN



void printBoard(int a[][10], int r)
{

    cout << "Row 1:: ";
    for (int i = 0; i < 10; i++)
    {
        if(a[0][i] == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << i+1 << " ";
        }
    }
    cout << endl;

    cout << "Row 2:: ";

    for (int i = 0; i < 10; i++)
    {
        if(a[1][i] == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << i+1 << " ";
        }
    }
    cout << endl;

   /* for(int i = 0; i < r; i++)
    {
        cout << "Row " << i+1 << ":: ";
        for(int j = 0; j < 10; j++)
        {
            if(a[i][j] = -1)
            {
                cout << "X ";
            }
            else
            {
                cout << i+1 << " ";
            }

        }
     cout << endl;
    }*/

}




///****************************************************
void initializeArray(int a[][10], int r)
{
    for(int i = 0; i < 10; i++)
    {
        a[0][i] = -1;
        a[1][i] = -1;

    }
}


///****************************************************
void insertRand(int a[][10], int r)
{



    int i = 0, j = 0;
    int card;

    while (i < 10)
    {

    cout << "Values for first row: " << a[0][i] << endl;
        card = (rand()%10) + 1;

        while(j < 10)
        {

            if(a[0][i] =a[0][i+j])
            {
                j++;
            }
            else
            {
                a[0][i] = card;
                j = 10;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        cout << a[0][i] << " ";
    }





    /*int card;


    cout << "Test values: " << endl;
    a[0][0] = (rand()% 10) + 1;
    for (int i = 1; i < 10; i++)
    {

        card = rand()%10;
        card += 1;

        if(a[0][i-1] = card)
        {
            i--;
        }
        else
        {
            a[0][i] = card;
        }
        cout << a[0][i] << " ";
    }*/













}




///****************************************************
void getGuess(int a[][10], int r, int& t)
{
    int card1, card2;

    cout << "What number would you like to guess from the first row?" << endl;
    cin >> card1;
    cout << card1 << " is a(n) " << a[0][card1-1] << endl;

    cout << "What number would you like to guess from the second row?" << endl;
    cin >> card2;
    cout << card2 << " is a(n)" << a[1][card2-1] << endl;

    if(a[0][card1-1] == a[1][card2-1])
    {
        cout << "Match!" << endl;
        a[0][card1-1] = -1;
        a[1][card2-1] = -1;
        t++;
    }
    else
    {
        cout << "No match!" << endl;
    }
}
//FUNCTION IMPLEMENTATIONS HERE

