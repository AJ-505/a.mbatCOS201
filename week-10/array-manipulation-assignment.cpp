#include <cstdlib>
#include <iostream>

using namespace std;

int generateRandomNumbersBetweenRange(int lowerBound, int upperBound) {
  // Generates a random number between two boundaries (both exclusive hence in the form [lowerBound..=upperBound])
  return (rand() % (upperBound + 1)) + lowerBound;
}

void traverseAndPrintArrayElements(int arr[], int size) {
  if (size == 1) {
    cout << arr[0] << ".";
    return;
  }

  for (int i = 0; i < size; ++i) {
    // Prints elements in the form 1, 2, 3, 4, and 5. (for example)
    if (i == size - 1) {
      cout << "and " << arr[i] << ".";
    } else {
      cout << arr[i] << ", ";
    }
  }
}

int findMaxElement(int arr[], int size) {
  int max = arr[0];
  
  for (int i = 1; i < size; ++i) {
    if (arr[i] > max) max = arr[i];
  }

  return max;
}

int findMinElement(int arr[], int size) {
  int min = arr[0];
  
  for (int i = 1; i < size; ++i) {
    if (arr[i] < min) min = arr[i];
  }

  return min;
}

int sumAllElements(int arr[], int size) {
  int sum = 0;

  for (int i = 0; i < size; ++i)  sum += arr[i]; 
  return sum;
}

int returnIndexOfArrayElement(int arr[], int size, int elementToFind) {
  for (int i = 0; i < size; ++i) {
    if (arr[i] == elementToFind) return i;
  } 

  return -1;
}

int main() {
  srand(time(0));
  cout << "Hello there! Welcome to my lovely program!\n";
  // Step 1: Get the user-defined array
  int arrSize;

  cout << "Enter the size of your array (numeric values only): ";
  cin >> arrSize;
  int customArray[arrSize];

  for (int i = 0; i < arrSize; ++i) {
    cout << "Enter array element at index " << i << ": ";
    cin >> customArray[i];
  }

  cout << "\nThe minimum number in the array is: " << findMinElement(customArray, arrSize) << endl;
  cout << "The maximum number in the array is: " << findMaxElement(customArray, arrSize) << endl;
  cout << "The sum of all numbers (elements) in the array is: " << sumAllElements(customArray, arrSize) << endl;
  
  cout << "\nAren't you impressed? One more thing... \n";
  cout << "Do you remember all the elements in this array? Surely not! But thankfully, you can just check! \n";
  cout << "Please enter a number to see whether it exists in the array: ";

  int userNum; cin >> userNum;

  // Conditional logic to check whether the element in question exists in the array

  if (returnIndexOfArrayElement(customArray, arrSize, userNum) != -1) {
    cout << "The element " << userNum << " exists in the array! Woohoo!\n";
  } else {
    cout << "The element " << userNum << " does not exist in the array.\n";
  }

  cout << "\nReady for one more trick?\n";
  cout << "We can generate random numbers and save them into an array. Isn't that cool? Let's see it in action!\nRun this program multiple times to see the beauty of randomness.\n";

  int randomSize = generateRandomNumbersBetweenRange(0, 20);
  int randomArray[randomSize];
  
  for (int j = 0; j < randomSize; ++j) {
    randomArray[j] = generateRandomNumbersBetweenRange(0, 20); 
  }

  cout << "The array elements are: "; traverseAndPrintArrayElements(randomArray, arrSize);
  return 0;
}
