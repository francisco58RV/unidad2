# include <iostream>

using namespace std;

int main(){
	
int c[5] = {1,2,3,4,5};
int* p3 = &c[1];
// obtiene la direcci�n de este elemento
cout << "*p3 = " << *p3 << endl;
p3++;
// apunta al siguiente elemento
cout << "*p3 = " << *p3 << endl;

return 0;	
	
}

