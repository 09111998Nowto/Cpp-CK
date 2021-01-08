#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    float n;
    int A[10000], B[10000];
    ifstream is;
    is.open("input.txt");
    if(is.fail())
        return 0;
    is>>n;
    for(int i = 0; i<n;i++){
        is>>A[i];
    }
     for(int i = 0; i<n;i++){
        is>>B[i];
    }
    is.close();

    for(int i = 0; i<n;i++){
        A[i]-=B[i];
    }
    ofstream of;
    of.open("output.txt");
    for(int i = 0; i<n;i++){
       of<<A[i]<<" ";
    }

    of.close();

}
