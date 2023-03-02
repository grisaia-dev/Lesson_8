#include <iostream>
//#include <Windows.h>

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) throw forbidden_length;
    return str.length();
}

int main() {
    //SetConsoleOutput(1251);
    //SetConsoleOutputCP(1351);

    int bad_word_length, word_length;
    std::string word;

    std::cout << "Введите запретную длину слов: ";
    std::cin >> bad_word_length;

    try {
        while(word.length() != bad_word_length) {
            std::cout << "Введите слово: ";
            std::cin >> word;
            word_length = function(word, bad_word_length);
            std::cout << "Длина слова \"" << word << "\" равна " << word_length << std::endl;
        }
    } catch (int bad_length) {
        std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
    }
    return 0;
}