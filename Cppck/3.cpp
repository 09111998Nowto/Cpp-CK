#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream in;
    in.open("input.txt", ios::in);
    if(in.fail())
        return 0;

    int N;
    int A[100];
    in>>N;

    for(int i=0;i<N;i++){
        in>>A[i];
    }

    in.close();

    ofstream out;
    out.open("output.txt", ios::out);

    for(int i=0;i<N;i++){
        if(A[i]<0)
            out<<A[i]<<" ";
    }

    for(int i=0;i<N;i++){
        if(A[i]==0)
            out<<A[i]<<" ";
    }

    for(int i=0;i<N;i++){
        if(A[i]>0)
            out<<A[i]<<" ";
    }

    out.close();

    return 0;
}


