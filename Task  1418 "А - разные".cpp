#include <iostream>
#include <set>

using namespace std;

int main() {
    /*Задание А - Разные (номер 1418)*/
    int N;
    cin >> N; //Количество чисел

    set <int> set1; 
    int num;

    for (int i = 0; i < N; i++) {
        cin >> num; //Считываем число
        set1.insert(num); //Записываем в set
    }
    cout << set1.size();

    return 0;
}
