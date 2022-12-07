#include <iostream>
#include <ctime>//бібліотека для time
#include <cstdlib>//бібліотека для random
using namespace std;
int main(){
	int m[3][3];
	int sumDiagonal1 = 0;// змінна для суми 1 діагоналі
	int sumDiagonal2 = 0;// змінна для суми 2 діагоналі
	srand(time(NULL));// отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним.
	for (int i = 0; i < 3; i++) {// цикл для рядків
		for (int j = 0; j < 3; j++) {// цикл для стовпців
			m[i][j] = rand() %10; }
	}
	for (int i = 0; i < 3; i++) {
		sumDiagonal1 = m[i][i] + sumDiagonal1;//перша діагональ
	}
	for (int i = 0,j=2; i < 3; i++,j--) {
			sumDiagonal2 = m[i][j] + sumDiagonal2;//друга діагональ
	}	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m[i][j] << ' ';//вивід масиву
		}
		cout << endl;
	}
	cout << sumDiagonal1 << " - first diagonal\n" << sumDiagonal2 << " - second diagonal";
}
