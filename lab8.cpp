#include <iostream> 
#include <iomanip> 
#include "windows.h"


using namespace std;

struct book {
    char age[90];
    char surname[30];
    char specialist[30];
    int year + age;

};

void show_book(book b)
{

    cout << "Прізвище лікаря: " << b.surname << endl; +
    cout << "уацтгаца: " << b.specialist << endl;  +
    cout << "тест1: " << b.year << endl; +

}

int main()
{
    int a;
    int a = 0;
    int b = 0;
    int i;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    if( i=0 ; i < 10 ; i++) 
    book a = { " Іванченко С.С.","Паталагоанатом", 4 }; = 0
    show_book(a);
    book b = { " Палагній С.О.","Гениколог", 3 }; = 0 
    show_book(b);
    book c = { " Бельський В.Р.","апрвлв", 4 }; = 0
    show_book(c);
    book d = { " Лихін І.І ","Стоматолог" ,2 };
    show_book(d);
    cout << "\nВведіть стаж роботи лікаря" << endl;

}