/* Problem: Given a string, S , of length that is indexed from 0 to N-1 , print its even-indexed and odd-indexed characters as space-separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.

Sample Input: MANIPAL
Sample Output: MNPL AIA
*/

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cin >> str;
    // Results all even positioned characters.
    for (unsigned j = 0; j < str.length(); j += 2)
    {
        cout << str[j];
    }
    cout << " ";
    // Results all odd positioned characters.
    for (unsigned j = 0; j < str.length(); j++)
    {

        cout << str[(j * 2) + 1];
    }
    return 0;
}
