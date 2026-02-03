#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a, int &b, int &c, int &d){
    
        for(int i = 0; i < 10; i++){
        int r = rand() % 3;
        int temp;
        if(r == 0) { temp = a; a = b; b = temp; }
        else if(r == 1) { temp = b; b = c; c = temp; }
        else { temp = c; c = d; d = temp; }
    }
}
