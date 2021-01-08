#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream in;
    in.open("input.txt");
    int n;
    in >> n;
    in.close();

    cout << n;

    ofstream out;
    out.open("output.txt");
    out << n + 99;
    out.close();


    return 0;
}
