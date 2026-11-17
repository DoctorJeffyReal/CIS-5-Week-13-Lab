#include <iostream>
#include <string>

// Lab 13 — Jesus
// CIS 5 Week 13 · Names and a roster

struct Student {
  std::string name;
  int id;
  double gpa;
};

void printStudent(const Student& s) {
  // TODO: print the id, name, and gpa on one line, then "\n"
}

int main() {
  // Part 1: format a name
  std::string first, last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;
  // TODO: join first and last with a space
  // TODO: print "Full name: " and the full name, then "Length: " and its size()

  // Part 2: a roster of three
  const int N = 3;
  Student roster[N] = {
    {"Ada", 1, 3.9}, {"Ben", 2, 2.7}, {"Cy", 3, 3.2}
  };
  std::cout << "All students:\n";
  // TODO: print every student with printStudent

  std::cout << "Honors (gpa 3.0 or above):\n";
  // TODO: print only students with gpa >= 3.0, then "<count> of 3"
  return 0;
}
