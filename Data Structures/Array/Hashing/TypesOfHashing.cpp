#include <iostream>

using namespace std;

int *initHashing()
{
    int *h = new int[3];
    cout << "Enter type of hashing:[Enter 1 or 2]" << endl;
    cout << "1.direct adress table" << endl;
    cout << "2.hash table" << endl;

    do
    {
        if (h[0] != -1)
        {
            cout << "Invalid input!Retry..." << endl;
        }
        cin >> h[0];
    } while (h[0] < 1 && h[0] > 2);

    /*if hashing != direct adress*/
    if (h[0]!=1)
    {
        cout << "Enter type of HashFunction:[Enter 1-5]" << endl;

        cout << "1.diviion modulo method" << endl;
        cout << "2.midsquare method" << endl;
        cout << "3.digit extraction method" << endl;
        cout << "4.fold boundary method" << endl;
        cout << "5.fold shifting" << endl;

        h[1] = h[2] = h[3] = -1;
        //validate input
        do
        {
            if (h[1] != -1)
            {
                cout << "Invalid input!Retry..." << endl;
            }
            cin >> h[1];
        } while (h[1] < 1 && h[1] > 6);

        cout << "Enter collision resolution technique:[Enter 1-4]" << endl;

        cout << "1.chaining" << endl;
        cout << "2.linear probing" << endl;
        cout << "3.quadratic probing" << endl;
        cout << "4.double hashing" << endl;

        do
        {
            if (h[2] != -1)
            {
                cout << "Invalid input!Retry..." << endl;
            }
            cin >> h[1];
        } while (h[2] < 1 && h[2] > 4);
    }
    return h;
}

void main()
{
    int *h = initHashing();

    if(h[0] == 1){
        /*Direct adress table = element itself is its address
        No hash function required
        No collision resolution technique required..
        */
    }
    else{
        /**/
    }
}
