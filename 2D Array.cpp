#include <iostream>
#include <fstream> //Write or Read File
#include <iomanip> //set width -> setw(n)

using namespace std;
/*
struct player{
    int id;
    string name;
    string major;
    int score;
    int avg;
};
*/
int main()
{
    int num, col, row;
    //cout << "How many student you want to input?";
    //cin >> num;
    cout << "Column?" << endl;
    cin >> col;
    cout << "Row?" << endl;
    cin >> row;
    int numb[row][col];
    cout << "Insert the number :" << endl;
    for (int i=0;i<row;i++) //Insert row by row (if want to insert column by column,swap the condition)
    {
            for (int j=0;j<col;j++)
            {
                cout << i << " " << j << endl; //Check Index
                cin >> numb[i][j];
            }
    }
    cout << "Here is your number :" << endl;
    for (int a=0;a<row;a++)
    {
        for(int b=0;b<col;b++)
        {
            cout << a << " " << b << endl; //Check Index
            cout << numb[a][b] << " ";
        }
        cout << endl;
    }


    /*
    string name[num];
    double player[num][2];
    for (int i = 0; i < num ; i++){
    cout << "Name   :" << endl;
    cin >> name[i];
    cout << "Height :" << endl;
    cin >> player[i][0];
    cout << "Weight :" << endl;
    cin  >> player[i][1];
    }
    */
    cout << "" << endl;
}
