#include <iostream>
using namespace std;

int main()
{
  // Initialize variables
  int cur, prev;

  // Setup first iteration
  cin >> cur;
  prev = cur;

  // Repeat until cur is greater than prev
  while (1)
  {
    if (cur <= prev)
    {
      cout << cur << "  ";
      prev = cur;
      cin >> cur;
    }
    else
     break;
  }

  // Print newline and end program
  cout << endl;
  return 0;
}