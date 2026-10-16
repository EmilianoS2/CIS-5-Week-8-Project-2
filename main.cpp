#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 60; // change this number

// Project 2 — Emiliano Sanchez
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main()
{
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 100; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 36; // change this number

  for (int i = 0; i < N; ++i)
  {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 0; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // TODO: print each index and scores[i]
  int A = 0;
  int B = 0;
  int C = 0;
  int D = 0;
  int F = 0;
  for (int i = 0; i < N; ++i)
  {
    std::cout << "[" << i << "] " << scores[i] << "\n";
    if (scores[i] > 89)
    {
      ++A;
    }
    else if (scores[i] > 79)
    {
      ++B;
    }
    else if (scores[i] > 69)
    {
      ++C;
    }
    else if (scores[i] > 59)
    {
      ++D;
    }
    else
    {
      ++F;
    }
  }
  std::cout << "==========Grades==========\n"
            << "A: " << A << "\n"
            << "B: " << B << "\n"
            << "C: " << C << "\n"
            << "D: " << D << "\n"
            << "F: " << F << "\n"
            << "Total: " << A + B + C + D + F << "\n";

  // TODO: one for loop. Count A, B, C, D, and failing.
  // 90 and up is A. 80 to 89 is B. 70 to 79 is C. 60 to 69 is D.
  // Below 60 is failing. A score of 60 is a D.
  // Print A:, B:, C:, D:, and F:. The five totals add up to 30.
  int i = 0;
  int officeHours = 0;
  while (i < N)
  {
    if (60 > scores[i])
    {
      std::cout << "Student at index [" << i << "] needs to come to office hours\n";
      ++officeHours;
    }
    ++i;
  }
  std::cout << officeHours;
  // TODO: one while loop. If scores[i] is under 60, print:
  // Student at index i needs to come to office hours.
  // Put ++i in the loop or it never ends.

  return 0;
}
