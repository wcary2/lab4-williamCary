#include "VectorDriver.h"

int main() {
  /*******************************SAMPLE CODE PROVIDED******************************/
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;
  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl << endl << endl;
  /*******************************SAMPLE CODE END************************************/
  //CODE FOR LAB BELOW
  vector<short> testing_vector;
  cout << "new vector: ";
  print(testing_vector); //prints vector elements in order
  add_numbers(testing_vector); // inserts 10 random numbers from 0 to 99 to the end of the vector
  cout << endl << "added to testing_vector" << endl; //Output tells user new elements have been added to the vector
  print(testing_vector); //prints vector once again to demonstrate elements have changed
  add_numbers(testing_vector); //adds ten more random numbers
  cout << endl << "added to testing_vector" << endl;
  print(testing_vector); //prints for reference
  cout << "sum of vector's elements: " << compute_sum(testing_vector) << endl; 
  cout << endl << endl;
  print(testing_vector); //For reference for print_even below
  cout << "Print even: ";
  print_even(testing_vector);
  cout << endl;
  cout << "Finding if value 41 is in vector: ";
  is_present(testing_vector, 41);
  cout << endl;
  cout << "Current order of elements: " << endl;
  print(testing_vector);
  cout << "Now sorting vector " << endl << "Current order of elements: " << endl;
  sort(testing_vector.begin(), testing_vector.end());
  print(testing_vector);
  
  system("pause");
  return 0;
}
