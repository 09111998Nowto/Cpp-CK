#include <bits/stdc++.h>

using namespace std;

class Balo{
 float trong_luong;
 float so_ngan;
 string thuong_hieu;
public:
 Balo ();
 Balo (float tl, float sn,string th);
 void themDo(float trong_luong_do);
 float trongluong();
};

Balo::Balo() {
    trong_luong = 0.0;
    so_ngan = 0.0;
    thuong_hieu = " ";
}

Balo::Balo(float tl, float sn,string th) {
    trong_luong = tl;
    so_ngan = sn;
    thuong_hieu = th;
}

void Balo:: themDo(float trong_luong_do) {
    trong_luong += trong_luong_do;
}

float Balo::trongluong() {
    return this->trong_luong;
}




int main()
{
 float tl,sn;
 string th;
 cin>>tl>>sn>>th;
 Balo b(tl,sn,th);
 b.themDo(10);
 cout<<fixed<<setprecision(2)<<b.trongluong();
 return 0;
}
