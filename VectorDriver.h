/* File: VectorDriver.cpp
 * Athr: William Cary
 * Date: October 8 2018
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>


using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">" << endl;
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

void add_numbers(vector<short> &data) {
	srand(time(NULL)); //initizalizes seed for random numbers based on time
	for (unsigned i = 0; i < 10; i++) {
		data.push_back(rand() % 100); //use push_back to insert random numbers from 0 to 99
	}
	return;
}

void print_even(vector<short> &data) {
	if (data.empty()) { //checks if data is empty and if it is it prints "<empty>"
		cout << "<empty>";
		return;
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i<data.size(); i+=2) { // adds two to i so that it skips every other index in the vector
			cout << ", " << data.at(i);
		}
		cout << ">" << endl;
	}
}

bool is_present(vector<short> &data, short val) {
	if (!data.empty()) { //quick test if empty: returns false if it is.
		for (vector<short>::iterator it = data.begin(); it != data.end(); it++) { //uses iterator to increase efficiency over at function for vectors
			if (*it == val) { //dereference iterator and checks the value to see if
				cout << val << " Present in vector " << endl;
				return true;
			}
		}
	}
		cout << val << " Not present in vector" << endl;
		return false;
}

// TODO: implement std::sort function
