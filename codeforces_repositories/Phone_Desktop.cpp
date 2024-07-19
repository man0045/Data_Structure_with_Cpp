#include <iostream>
#include <utility>  // for pair

using namespace std;

// Function to get the number of test cases (renamed for clarity)
int get_number_of_test_cases() {
  int num_test_cases;
  cin >> num_test_cases;
  return num_test_cases;
}

// Function to get two integers as a pair (renamed for clarity)
pair<int, int> get_two_integers() {
  int first_integer, second_integer;
  cin >> first_integer >> second_integer;
  return make_pair(first_integer, second_integer);
}

int main() {
  // Total number of test cases (more descriptive)
  int total_test_cases = get_number_of_test_cases();

  while (total_test_cases--) {
    // Integers from user input (more specific)
    pair<int, int> input_integers = get_two_integers();
    int first_number = input_integers.first;
    int second_number = input_integers.second;

    int minimum_operations = 0;  // Renamed for clarity

    // Half of the second number (more specific)
    int half_second_number = second_number / 2;

    // Counter for the loop (more specific)
    int loop_counter = half_second_number;

    // Handle even part of the second number
    minimum_operations += half_second_number;
    while (loop_counter > 0) {
      first_number -= 7;
      loop_counter--;
    }

    // Ensure first number is non-negative (more specific)
    first_number = max(0, first_number);

    // Handle odd second number (more specific)
    if (second_number % 2 == 1) {
      first_number -= 11;
      minimum_operations++;
    }

    // Ensure first number is non-negative (more specific)
    first_number = max(0, first_number);

    // Handle remaining first number using 15s (more specific)
    minimum_operations += first_number / 15;
    first_number -= 15 * (first_number / 15);

    // Handle remaining first number (if any)
    if (first_number > 0) {
      minimum_operations++;
    }

    cout << minimum_operations << endl;
  }

  return 0;
}
