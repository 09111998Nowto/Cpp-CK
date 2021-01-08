#include <iostream>
#include <iomanip>
using namespace std;

class Block{
 float width;
 float height;
 float length;
 float mass;
public:
 Block();
 Block(float w, float h,float l, float m);
 float getDensity();
};

Block::Block()
{
	width = 0;
	height = 0;
	length = 0;
	mass = 0;
}

Block::Block(float w, float h,float l, float m)
{
	width = w;
	height = h;
	length = l;
	mass = m;
}

float Block::getDensity()
{
	return mass/(width * height * length);
}

int main()
{
 float w,h,l,m;
 cin>>w>>h>>l>>m;
 Block b(w,h,l,m);
 
 cout<<fixed<<setprecision(2)<<b.getDensity()<<"kg/m3";
 return 0;
}
