#include <iostream>
#include <fstream>

using namespace std;
bool finder(char* st1, char* st2, int max, int e) {
	int i, z, k;
	int f = 0;
		for(k=0;k<=max;k++)
		for (i = 0; i <= max; i++) {
			if(st1[i]=st2[k])(f++);
	}	
		delete st1;
		delete st2;
		if (f=e) return true;
}

int main() {
	setlocale(0, "RU");
	int count = 0;
	int r = 0;
	int o,e = 0;
	char str;
	const char ch = '\n';
	char *str2 = new char;
	char *str1 = new char;
	ifstream fin("TextFile2.txt");
while (!fin.eof())
	{
		fin >> str;
		count++;
	}
while (!fin.eof())
	{
		//if (e < 1) {
			fin.getline(str1, count / 2,ch);
			
			e++;
		//}
		//else {
			//fin.getline(str2, count,ch);
			
		//	break;
		//}
	}
	
	fin.close();
	//cout<<count--;
	cout << "строка 1 -> " << str1 << "\n строка 2 -> " << str2;
	cout << " ";
	//cout << endl << finder(str1, str2, count, e);

	delete str1;
	delete str2;
}
