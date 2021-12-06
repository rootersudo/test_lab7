#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;
bool finder(char* st1, char* st2, int max) {
	int i, z, k;
	z = 0;
	int f = 0; 
	for (i = 0; i < max; i++) {
		for (k = 0; k < max; k++) {
			if (st1[i] == st2[k]) { f++; st2[k] = ' '; z++; }
	 }
		
}
	if ((f == max)and(z>0)) return true;
	else return false;
}

int main() {
	char k = 'y';
	while (k == 'y') {
		system("cls");
		k = 'n';
		setlocale(0, "RU");
		int count = 0;
		int r = 0; int b = 5;
		int o;
		char str;
		
	
			const char ch = '\n';
			char* str2 = new char[b];
			char* str1 = new char[b];
			ifstream fin("TextFile2.txt");
			Sleep(500);
			cout << "\n//запуск скрипта :)))))//\n/";
			for (o = 0; o < 25; o++) {
				Sleep(100); cout << "*";
			}
			cout << "/ ";
			
			fin.getline(str1, b, ch);

			fin.getline(str2, b, ch);

			fin.close();
			Sleep(350);
			cout << "\nстрока 1 -> " << str1;
			Sleep(350);
			cout << "\nстрока 2 -> " << str2;
			if(finder(str1, str2, b)) cout<<"\nРЕЗУЛЬТАТ : Из первой стпроки можно сделать вторую";
			else cout << "\nРЕЗУЛЬТАТ : Из первой стпроки нельзя сделать вторую";
			delete  str1;
			delete  str2;

			
			Sleep(900);
			cout << "\nТеперь введите необходимую длину для Вашей с строки ->";
			cin >> b;
			char* str22 = new char[b];
			char* str11 = new char[b];
			cout <<"\n Введите ваши строки :\n строка1 : \n";
			cin >> str11;
			cout << "\nстрока 2 : \n";
			cin >> str22;
			if ((strlen(str11) > b)or( strlen(str22)) > b) { cout << "ОШИБКА!!!\nНЕДОПУСТИМАЯ ДЛИНА СТРОК, перезапустите программу! "; break; }
			cout << "///получаем результат///\n/";
			for (o = 0; o < 25; o++) { Sleep(170); cout << "*"; }
			cout << "/ ";
			Sleep(500);
			if (finder(str11, str22, b))cout << "\nРЕЗУЛЬТАТ : Из первой стпроки можно сделать вторую";
			else cout<<"\nРЕЗУЛЬТАТ : Из первой строки нельзя сделать вторую";
			delete  str11;
			delete  str22;
		cout << "\nВы хотите повторить, если да, то введите y -> ";
	cin >> k;
	}
	
	
	
}
