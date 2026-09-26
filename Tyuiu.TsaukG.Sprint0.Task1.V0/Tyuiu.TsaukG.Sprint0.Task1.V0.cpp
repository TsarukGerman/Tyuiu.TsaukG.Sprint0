#include <iostream>
using namespace std; //пространство имен 

int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Введите ФИО: ";//cout - вывод текста на экран
    string a; //Объявили переменную 
	cin >> a; //cin - оператор извлекающий ввод и присваивающий его переменной a
	//cout << a << endl; //endl - конец строки

	cout << "Введите возраст: ";
	int v;
	cin >> v;
	cout << "Возраст равен: "<<v <<" лет" << endl;
	return 0; //явный return не обязан

}


