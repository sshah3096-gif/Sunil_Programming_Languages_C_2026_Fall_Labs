/*
 * week4_2_struct_student.c
 * Author: [Sunil Kumar Thakuri]
 * Student ID: [251ADB032]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[50]), id (int), grade
// (float) Example: struct Student {
//     char name[50];
//     int id;
//     float grade;
// };
struct Student {
  char name[50];
  int id;
  float grade;
};
int main(void) {
  // TODO: Declare two Student variables
  struct Student Student1;
  struct Student Student2;
  // TODO: Assign the values (use strcpy for the name):
  //       Student 1: Alice Johnson, 1001, 9.1
  //       Student 2: Bob Smith,     1002, 8.7
  strcpy(Student1.name, "Alice Johnson");
  Student1.id = 1001;
  Student1.grade = 9.1;

  strcpy(Student2.name, "Bob Smith");
  Student2.id = 1002;
  Student2.grade = 8.7;
  // TODO: Print each student exactly as:
  //       Student <k>: <name>, ID: <id>, Grade: <grade with 1 decimal, %.1f>
  printf("Student 1: %s, id: %d, grade: %.1f\n", Student1.name, Student1.id,
         Student1.grade);
  printf("Student 2: %s, id: %d, grade: %.1f\n", Student2.name, Student2.id,
         Student2.grade);
  return 0;
}
