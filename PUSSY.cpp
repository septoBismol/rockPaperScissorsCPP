#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;

int main() {
    string hand;
    int NPCcout;
    srand((unsigned int)time(NULL));
    NPCcout = rand() % 3 + 1;
    cout << "rock paper scissors! pick your hand, r, p, or s.\n";
    cin >> hand;
    switch (NPCcout) {
    case 1:
        cout << "You win!\n";
        system("pause");
        return 0;
        break;
    case 2:
        cout << "You lose!\n";
        system("pause");
        return 0;
        break;
    case 3:
        cout << "It's a tie!\n";
        system("pause");
        return 0;
        break;
    }
    return 0;

}