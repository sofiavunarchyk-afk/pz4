#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> S; // Стек для зберігання цілих чисел
    int count = 0; // Змінна для підрахунку витягнутих елементів
    int foundCount = 0; // Змінна для підрахунку знайдених елементів

    // Додаємо елементи до стека
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.push(30); // Додаємо повторюване число
    S.push(30); // Додаємо ще одне повторюване число

    int findNum;
    cout << "Введіть число для пошуку: ";
    cin >> findNum;
    
    // Витягніть елементи зі стека
    cout << "Витягнуті елементи з стека: ";
    while (!S.empty())
    {
        int num = S.top(); // Отримати верхній елемент
        S.pop(); // Видалити верхній елемент
        cout << num << " "; // Вивести число
        count++; // Збільшити лічильник

        if (num == findNum)
        {
            foundCount++; // Збільшити лічильник знайдених елементів
        }
    }
    cout << endl;

    // Виведення результатів
    if (foundCount > 0) {
        cout << "Число " << findNum << " знайдено " << foundCount << " раз(и)!" << endl;
    } else {
        cout << "Число " << findNum << " не знайдено." << endl;
    }

    cout << "Кількість витягнутих елементів: " << count << endl;

    return 0;
}