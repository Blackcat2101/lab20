#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	double x,y;
	x = min((a.x+a.w),(b.x+b.w))-max(a.x,b.x);
	y = min(a.y,b.y)-max((a.y-a.h),(b.y-b.h));
	if (x>0 && y>0) return x*y;
	else return 0;

}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
}
