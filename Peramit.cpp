#include <iostream>
using namespace std;

int main()
{
    int a=1;

    for (int i = 1; i < 5; i++)
    {

        for (int k = 1; k <= i; k++)
        {
            if((i+k) % 2 == 0){
                cout << "1" ;
            }
            else{
                cout <<"0";
            }
        }
       

        cout << endl;
    }
    return 0;
}
