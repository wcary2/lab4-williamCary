#include "VectorDriver.h"

int main() {
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
  cout << "  ..:: B E G I N  N E W  I T E R A T I O N  O F  S A M P L E  C O D E  ::.." << endl << endl;


  vector<short> testing_vector;
  cout << "new vector: ";
  print(testing_vector);
  add_numbers(testing_vector);
  cout << endl << "added to testing_vector" << endl;
  print(testing_vector);
  add_numbers(testing_vector);
  cout << endl << "added to testing_vector" << endl;
  print(testing_vector);
  cout << "sum of vector's elements: " << compute_sum(testing_vector) << endl;
  cout << endl << endl;
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

  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl << endl << endl;
  
  system("pause");
  return 0;
}
