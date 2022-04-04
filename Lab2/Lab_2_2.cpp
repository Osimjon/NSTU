#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[256], m;
    int n, c, c1, i, a, k;

    cout << "Enter ur numb : ";
    cin >> s;
    k = strlen(s);

    for (i = 0; i < k; i++)
    {
        if ((s[i] != 'I') && (s[i] != 'V') && (s[i] != 'X') && 
            (s[i] != 'L') && (s[i] != 'C') &&
            (s[i] != 'D') && (s[i] != 'M')) exit(0);
    };

    for (i = 0, c = 0, n = 0; i < k; i++)
    {
        c1 = c;

        if (s[i] == 'I')
            c = 1;

        if (s[i] == 'V')
            c = 5;

        if (s[i] == 'X')
            c = 10;

        if (s[i] == 'L')
            c = 50;

        if (s[i] == 'C')
            c = 100;

        if (s[i] == 'D')
            c = 500;

        if (s[i] == 'M')
            c = 1000;

        if (c > c1)
            a = -2 * c1;
        else
            a = 0;

        n = n + a + c;
    }

    printf("Ur numb is: %d", n);
    return 0;
}
