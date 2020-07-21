#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

char print_selection(){
    char choice_letter;

    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find number in vector" << endl;
    cout << "Q - Quit program" << endl;
    cout << endl;

    cout << "Enter your choice: ";
    cin >> choice_letter;
    cout << endl;
    return choice_letter; 
}

void print_numbers(const vector<int> &numbers){

    for(auto num: numbers){
        cout << num << " ";
    }
    cout << endl;
}

int add_number(vector<int> &numbers){
    int x{};
    cout << "What number do you want to add to the vector? ";
    cin >> x;
    cout << endl;
    numbers.push_back(x);
}

double get_mean(const vector<int> &numbers){
    double total{};
    for(auto num: numbers){
        total += num;
    }
    return total/numbers.size();
}

int get_smallest(const vector<int> &numbers){
    int smallest{numbers[0]};
    for(auto num: numbers){
        if(num < smallest) smallest = num;
    }
    return smallest;
}

int get_largest(const vector<int> &numbers){
    int largest{numbers[0]};
    for(auto num: numbers){
        if(num > largest) largest = num;
    }
    return largest;
}

bool find(const vector<int> &numbers, int x){
    for(auto num: numbers)
        if(num == x) {
            return true;
        }
    return false;
}

string find_number(const vector<int> &numbers){
    int x{};
    cout << "Enter the number to search for: ";
    cin >> x;
    cout << endl;
    if(find(numbers, x))
        return "Target was found";
    else 
        return "Target was not found";
}

void choice_action(const char choice_letter, vector<int> &numbers){
    if(choice_letter == 'P'){
        print_numbers(numbers);
        cout << endl;
    }
    else if (choice_letter == 'A'){
        add_number(numbers);
        print_numbers(numbers);
        cout << endl;
    }
    else if (choice_letter == 'M'){
        cout << get_mean(numbers) << endl;
        cout << endl;
    }
    else if (choice_letter == 'S'){
        cout << get_smallest(numbers) << endl;
        cout << endl;
    }
    else if (choice_letter == 'L'){
        cout << get_largest(numbers) << endl;
        cout << endl;
    }
    else if(choice_letter == 'F'){
        cout << find_number(numbers) << endl;
        cout << endl;
    }
}

int main()
{
    static char choice_letter;
    vector<int> numbers{};

    do{
        choice_letter = print_selection();
        choice_action(choice_letter, numbers);
    } while(choice_letter != 'Q');

    cout << endl;
    return 0;
}
