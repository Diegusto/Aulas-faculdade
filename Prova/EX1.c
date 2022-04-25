#include <iomanip>
#include <iostream>
using namespace std

int main(void)
{
    float RESULTADO, AX1, BY2, H7;

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cin >> AX1;
    cin >> BY2;
    cin >> H7;

    RESULTADO = AX1 * BY2 - H7;

    cout << setw(8) << RESULTADO << endl;

    return 0;

}
