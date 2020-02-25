#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b,int &c,int &d)
{
	int *x[] = {&a,&b,&c,&d};
	int n = 0;
	for(;n<10;n++)
	{
        int i = rand()%4;
	    int j = rand()%4;
	    int x1 = *x[i];
	    *x[i] = *x[j];
	    *x[j] = x1;
	}
    
    

}


