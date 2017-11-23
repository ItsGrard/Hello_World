#include <iostream>
using namespace std;


int main (){

		int height;
		
		cout << "Insert height: " << endl;
			cin >> height;
		
//hola			for (int fila = 1; fila <= height; fila++){
					for (int i = 1; i <= height-fila; i++){
							cout << " ";
					}
					for (int k = 1; k <= fila; k++){
							cout << " *";
					}
		

			cout << endl;
		}
return 0;
}
