#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
     for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }
           for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }


    return 0;
}
