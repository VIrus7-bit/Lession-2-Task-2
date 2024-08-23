#include <iostream>
#include <string>

class Counter {
private:
    int num;
public:
    Counter() :num(1) {}
    Counter(int start_value) :num(start_value) {}
    void increase() { num++; }
    void decrease() { num--; }
    int count() const {std::cout << num << std::endl; return num; }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int  a = 0;
    char s;

    std::string ptr1 = "да";
    std::string ptr2;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> ptr2;

    if (ptr1 == ptr2) {

        std::cout << "Введите начальное значения счётчика: ";
        std::cin >> a;
    }
    else {
        a = 1;
    }
    Counter set{a};

    do {std::cout << "Введите команду ('+' , '-' , '=' или 'x'): ";
        std::cin >> s;

        switch (s){
        case '+': { set.increase(); } break;
        case '-': { set.decrease(); } break;
        case '=': { set.count   (); } break;}
    } while (s != 'x'); std::cout << "Досвидания!";
}
