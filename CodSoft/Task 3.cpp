#include <iostream>
using namespace std;
#define MAX_STUDENTS 100 

int main() 
{
  int numStudents;
  cout << "Enter the number of students (upto "<< MAX_STUDENTS <<") : ";
  cin >> numStudents;

  while (numStudents<0||numStudents>MAX_STUDENTS) 
  {
    cout << "Invalid number of students. Please enter a value between 1 and " << MAX_STUDENTS << ": ";
    cin >> numStudents;
  }

  string studentNames[MAX_STUDENTS];
  double studentGrades[MAX_STUDENTS];

  for(int i=0;i<numStudents;i++)
  {
    cout << "Enter student " << i + 1 << " name: ";
    cin >> studentNames[i];
    cout << "Enter student " << i + 1 << " grade: ";
    cin >> studentGrades[i];
  }
  
  double totalGrade=0.0;
  for(int i=0;i<numStudents;i++) 
  {
    totalGrade += studentGrades[i];
  }
  double averageGrade = totalGrade / numStudents;

  int highestIndex= 0, lowestIndex= 0;
  for (int i = 1; i < numStudents; ++i) 
  {
    if(studentGrades[i]>studentGrades[highestIndex]) 
    {
      highestIndex = i;
    } 
    else if (studentGrades[i] < studentGrades[lowestIndex]) 
    {
      lowestIndex = i;
    }
  }

  cout << "Average Grade : " << averageGrade << endl;
  cout << "Highest Grade : " << studentNames[highestIndex] << " (" << studentGrades[highestIndex] << ")" << endl;
  cout << "Lowest Grade : " << studentNames[lowestIndex] << " (" << studentGrades[lowestIndex] << ")" << endl;

  return 0;
}