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
    int M;
    in>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++)
        in>>A[i][j];
    }
    in.close();

    ofstream out;
    out.open("output.txt");
    int temp=A[0][0];
    for(int i=0; i<N; i++){
            temp=A[i][0];
        for(int j=0; j<M; j++){
        if(temp<A[i][j])
        {
            temp=A[i][j];
        }
    }
        out<<temp<<" ";
    }


    return 0;
    }
