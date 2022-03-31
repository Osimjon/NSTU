#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    setlocale(LC_ALL, "rus");
    fstream file;
    file.open("data.txt");
    string data;
    int closeBrackets = 0;
    int openBrackets = 0;
    char symbol;

    if (!file) {
        cout << "Файл 'data.txt' не удалось найти.\n\n";
    }
    else {
        cout << "Файл успешно открыт." << endl;
        getline(file, data);
        cout << data << endl;
        for (int i = 0; i < data.length(); i++) {
            if (data[i] == '}') {
                closeBrackets++;  
            }
            if (data[i] == '{') {
                openBrackets++;
            }
        }
    }
    if (closeBrackets != openBrackets) {
        cout << "Нарушен порядок скобок" << endl;
    }
    else {
        cout << "порядок скобок не нарушен!" << endl;
    }
    file.close();
    return 0;
}

