// C++ program to check whether the
// number is Armstrong number or not
#include <bits/stdc++.h>

using namespace std;

string armstrong(int n)
{
    string number = to_string(n);

    n = number.length();
    long long output = 0;
    for (char i : number)
        output = output + (long)pow((i - '0'), n);

    if (output == stoll(number))
        return ("True");
    else
        return ("False");
}

// Driver Code
int main()
{
    cout << armstrong(153) << endl;
    cout << armstrong(1253) << endl;
}

// This code is contributed by phasing17
