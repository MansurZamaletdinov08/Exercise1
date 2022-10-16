#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream file("in.txt");
    std::ifstream file2("in.txt");
    std::ifstream file3("in.txt");

    std::ofstream fileo1("out.txt");

    int x = 1, y = 0;
    int a = 0, b;

    int size = 0;

    int str = 0;

    file3 >> b;

    if (!file.is_open()) {
        std::cout << "Файл не найден!" << std::endl;
    }
    else {
        while (!(file >> y).eof()) {
            x++;
        }

        //int* arr = new int[x];
        int* arr = static_cast<int*>(malloc(x * sizeof(int)));

        while (a < x) {
            file2 >> str;
            arr[size++] = str;

            a++;
        }


        int p = arr[b + 1];
        fileo1 << p << std::endl;
        std::cout << p << std::endl;

        for (int i = b + 2; i < size; i++) {
            fileo1 << arr[i] << " ";
            std::cout << arr[i] << " ";
        }

        fileo1 << std::endl;
        std::cout << std::endl;

        fileo1 << b;
        std::cout << b << std::endl;

        fileo1 << std::endl;

        for (int i = 2; i <= b; i++) {
            fileo1 << arr[i] << " ";
            std::cout << arr[i] << " ";
            if (i == b) {
                fileo1 << i - (i - 1);
                std::cout << i - (i - 1);
            }
        }
        free(arr);
    }
}