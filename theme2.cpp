#include <iostream>
using namespace std;
 
class Ship
{
    public:
        Ship()
        {
            ksh = new int[7] { 4, 9, 1, 8, 7, 3 };
        }
        ~Ship()
        {
            delete []ksh;
        }
        int *ksh;
};
 
int main()
{
    Ship *kShip = new Ship;
    cout << kShip->ksh[0] << endl;
    return 0;
}
