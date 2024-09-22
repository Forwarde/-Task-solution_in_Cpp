#include <iostream>
/*Пользователь вводит четырехзначное число. Необходимо
поменять в этом числе 1 и 2 цифры, а также 3 и 4 цифры. Если
пользователь вводит не четырехзначное число — вывести
сообщение об ошибке.*/
using namespace std;

void Hello() {
    int x;
    cout << "Введите четырехзначное число:";
    cin >> x;
    
    
    int first = (x / 1000) % 10;
    int second = (x / 100) % 10;
    int third = (x / 10) % 10;
    int fourth = x % 10;

    if (x >= 1000 && x <= 9999) {
        int result = second * 1000 + first * 100 + fourth * 10 + third;
        cout << result << endl;
    } else {
        cout << "ошибка" << endl;
    }

}
