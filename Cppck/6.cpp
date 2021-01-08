#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int n,sum=0;
    int A[1000];

    ifstream is;
    is.open("input.txt");
    if(is.fail())
        return 0;
    is>>n;
    for(int i = 0;i<n;i++){
        is>>A[i];
    }
    is.close();


    for(int i = 0;i<n-2;i++){
        int sum1 =0;
        for(int j = i;j<=(i+2);j++){
            sum1 += A[j];

        }
        if(sum1>sum){
            sum = sum1;
        }


    }


    ofstream of;
    of.open("output.txt");
    of<<sum;
    of.close();
}
