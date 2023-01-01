#include <iostream>
using namespace std;
class base1{
    protected:
      string name;
    public:
      void setname(string s){
          name=s;
      }
};
class base2{
    protected:
      int age;
    public:
       void setage(int a){
         age=a;
       }
};
class student: public base1, public base2{
      float id;
    public:
         void setid(float a){
             id=a;
           }
         void getdata(){
             cout<<"the name of the student is: "<<name<<endl;
             cout<<"the age of the student is: "<<age<<endl;
            cout<<"the id of the student is: "<<id<<endl;
         };
};

int main() {
    student devesh;
    devesh.setname("Devesh khichar");
    devesh.setage(21);
    devesh.setid(35.92);
    devesh.getdata();
    return 0;
}