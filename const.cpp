#include<iostream>
#include<string>
using namespace std;
class student
{
    int roll_no;

public:
    int put_no(int);
    void diplay();

};
int student::put_no(int)
{
  roll_no=25;
}
void student::display()
{
    cout<<"roll number:"<<roll_no<<endl;

}
int main()
{
    student.obj1;
    obj1.put_no(25);
    obj1.display();
    return 0;
}
