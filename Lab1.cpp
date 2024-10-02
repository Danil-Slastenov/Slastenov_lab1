int main() {
    int age;
    cout << "Введіть ваш вік: ";
    cin >> age;

    if (age >= 0 && age <= 17) {
        cout << "Ви належите до молоді." << endl;
    } else if (age >= 18 && age <= 65) {
        cout << "Ви належите до дорослих." << endl;
    } else if (age >= 66) {
        cout << "Ви належите до людей похилого віку." << endl;
    } else {
        cout << " Повторіть ще раз." << endl;
    }

    return 0;
}
