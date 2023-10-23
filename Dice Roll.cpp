#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int die1,die2;
    do{

    cout << "Die:" ;
    cin >> die1;
    if(die1<=0)
    {
        cout << "Must have at least one die " << endl;

    }

    int side ;
    cout << "Side:";
    cin >> side;
    if(side<=0)
    {
        cout << "Must have at least one side " << endl;

    }


    die1 = rand() % side + 1;
    die2 = rand() % side + 1;


    cout << die1 << die2 << endl;

    }while(die1!=0);

    return 0;
}
