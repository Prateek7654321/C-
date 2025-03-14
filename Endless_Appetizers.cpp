#include <iostream>
using namespace std;

int main() {
    int T;
   
    cin >> T;

    while (T--) {
        int  sticks_per_plate, extra_sticks_price, sticks_received;

        cin >> sticks_per_plate >> extra_sticks_price >> sticks_received;

        int total_sticks =   (sticks_received / extra_sticks_price);
        int max_plates = (total_sticks + sticks_per_plate - 1) / sticks_per_plate;

        cout<< max_plates << endl;
    }

    return 0;
}
