#include <iostream>
using namespace std;

struct student{
	struct studentName{
		string fName;
		string lName;
	}name;
	int age;
	string id;
	struct grades{
		float programGrade;
		float quizGrade;
		float finalExam;
		float gpa;
	}grade;
};

void getData(student ptr[], int i){
	cout<<"Enter the first name: ";
	cin>>ptr[i].name.fName;
	cout<<"Enter the last name: ";
	cin>>ptr[i].name.lName;
	cout<<"Enter the age: ";
	cin>>ptr[i].age;
	cout<<"Enter the id: ";
	cin>>ptr[i].id;
	cout<<"Enter the program grade: ";
	cin>>ptr[i].grade.programGrade;
	cout<<"Enter the final exam grade: ";
	cin>>ptr[i].grade.finalExam;
	cout<<"Enter the quiz grade: ";
	cin>>ptr[i].grade.quizGrade;
	cout<<"Enter the gpa: ";
	cin>>ptr[i].grade.gpa;
}
void showAll(int length, struct student *ptr){
	for(int i=0;i<length;i++){
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"First Name is :"<<ptr[i].name.fName<<endl;
		cout<<"Last Name is :"<<ptr[i].name.lName<<endl;
		cout<<"Age is :"<<ptr[i].age<<endl;
		cout<<"Id is :"<<ptr[i].id<<endl;
		cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
		cout<<"Final Exam is :"<<ptr[i].grade.finalExam<<endl;
		cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
		cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
	}
}
void show(struct student *ptr, int length)
{
	string id;
	cout<<"Enter the id of the Student :";
	cin>>id;
	bool result=false;
	for(int i=0;i<length;i++){
		if(ptr[i].id==id){
			cout<<"-----------------------------------------------------------------"<<endl;
			cout<<"First Name is :"<<ptr[i].name.fName<<endl;
			cout<<"Last Name is :"<<ptr[i].name.lName<<endl;
			cout<<"Age is :"<<ptr[i].age<<endl;
			cout<<"Id is :"<<ptr[i].id<<endl;
			cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
			cout<<"Final Exam is :"<<ptr[i].grade.finalExam<<endl;
			cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
			cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
			cout<<"-----------------------------------------------------------------"<<endl;
			result=true;
			break;
		}
	}
	if(result==false){
		cout<<"No student with id "<<id<<" exists"<<endl;
	}
}
int main(int argc, char **argv) {
	student astudent[10];
	int option;
	int i=0;
	while(true){
		cout<<"Menu\n1.Enter the Data\n2.Print All Data\n3.Print specific student data\n4.Exit"<<endl;
		cout<<"Enter the choice: ";
		cin>>option;
		switch(option){
		case 1: getData(astudent,i);
				i++;
				break;
		case 2: showAll(i,astudent);
				break;
		case 3: show(astudent,i);
				break;
		case 4: exit(0);
				break;
		default: cout<<"Enter the correct option"<<endl;
		}

	}

}
