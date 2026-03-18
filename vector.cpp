#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // String turidagi dinamik vector yaratish
    vector<string> iPhonelar;

    // Element qo'shish
    iPhonelar.push_back("iPhone 11");
    iPhonelar.push_back("iPhone 12");
    iPhonelar.push_back("iPhone 13");
    iPhonelar.push_back("iPhone 14");

    // Oxirgi elementni o'chirish
    iPhonelar.pop_back();

    cout << "Hozirgi ro'yxat: " << endl;
    for (int i = 0; i < iPhonelar.size(); i++) {
        cout << i + 1 << ". " << iPhonelar[i] << endl;
    }

    return 0;
}
