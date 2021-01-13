#include <iostream>
#include <cstdlib>
#include <ctime>

void sort_func(int arr[]);
int search_func(int arr[]);

int main() {

    srand((unsigned) time(0));

    int arr[10];

    for (int i = 0; i < 10; i++) {
        int rand1 = rand();
        arr[i] = rand1;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    sort_func(arr);

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    int return_val1 = search_func(arr);

    std::cout << "Here's the index of your array where your integer was found; -1 if not found: " << return_val1;
}

void sort_func(int arr[]) {
    for (int i = 0; i < 9; i++) {
        int min = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int search_func(int arr[]) {
    std::cout << "Please enter an integer to look for in the array: ";
    int in_val;
    std::cin >> in_val;
    int arr_val_search = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == in_val) {
            arr_val_search = i;
        }
    }
    return arr_val_search;
}
