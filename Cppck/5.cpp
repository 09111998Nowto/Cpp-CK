#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int n,m;

    ifstream is;
    is.open("input.txt");
    if(is.fail())
        return 0;
    is>>n>>m;
    int A[100][100];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            is>>A[i][j];
        }
    }

    is.close();
    int dem =0, max = A[0][0];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(max<=A[i][j])
                max = A[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(max==A[i][j])
                dem++;
        }
    }



    ofstream of;
    of.open("output.txt");
    of<<max<<" "<<dem;

    of.close();
}
