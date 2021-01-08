#include <bits/stdc++.h>


using namespace std;

int main()
{
    ifstream in;
    in.open("input.txt", ios::in);
    if(in.fail())
        return 0;

    int A[100][100];
    int N;
    in>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++)
        in>>A[i][j];
    }
    in.close();

    ofstream out;
    out.open("output.txt");
    int temp=0;
    double tBTemp;
    for(int i=0; i<N; i++){
            temp=0;
        for(int j=0; j<3; j++){

        temp+=A[i][j];

    }
     tBTemp=temp/3;
     out<<fixed<<setprecision(2)<<tBTemp<<" ";
    }

    return 0;
    }
