#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Struct
struct Student
{
    string name;
    int score;
};

// Prototypes
Student get_score();
void set_scores(Student[], int);
void print(Student[], int);

int main()
{
    const int SIZE = 5;
    Student students[SIZE];
    set_scores(students, SIZE);
    print(students, SIZE);

    return 0;
}

Student get_score()
{
    Student current;
    cout << "Enter the student's first name: ";
    cin >> current.name;
    cout << "Enter the student's score: ";
    cin >> current.score;
    return current;
}

void set_scores(Student students[], int size)
{
    for (int c = 0; c < size; c++)
    {
        students[c] = get_score();
    }
}

void print(Student students[], int size)
{
    cout << left << setw(21) << "Name" << right << "Score" << endl;
    for (int c = 0; c < size; c++)
    {
        cout << left << setw(23) << students[c].name << right << setw(3) << students[c].score << endl;
    }
}