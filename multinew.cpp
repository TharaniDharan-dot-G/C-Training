#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main() {
    multimap<string, float>student;
    if (student.empty()) {                                 //Check whether the map is empty
        cout << "No elements in the map" << endl;
    }
    student.insert({ "Tharani",8.2 });                     //Inserting the elements into the map
    student.insert({ "Aravind",7.3 });
    student.insert({ "Sujith",6.6 });
    student.insert({ "Aravind",6.0 });
    student.emplace("Saran", 9.5);
    student.emplace("Sujith", 7.1);

    cout << "\nSem 1 marks are \n";
    for (auto i = student.begin(); i != student.end(); i++) {    //begin and end points to the first and last element
        cout << i->first << "\t" << i->second << endl;           //first points to key and second points to value
    }

    cout << "\nThe size is " << student.size() << endl;
    cout << "\nThe maximum size is " << student.max_size() << endl;

    cout << "\nThe key Aravind exists ";
    auto siz = student.count("Aravind");
    
    cout << siz << " times" << endl;                           //To print no of times the key exists(count)
    auto val = student.find("Aravind");
    cout << val->second << endl;                             //To print the key or the value

    /*cout << "Printing the pair matched with the key using find and count" << endl;
    for(auto i=student.find("Aravind");i->second>siz;i++){
    cout<<i->first<<"\t"<<i->second<<endl;
    }*/

    cout << "\nPrinting the pair matched with the key using equal_range" << endl;
    auto same = student.equal_range("Aravind");
    cout << "\nKEY\tELEMENT\n";
    for (auto i = same.first; i != same.second; ++i) {
        cout << i->first << "\t" << i->second << endl;
    }

    cout << "\nPrinting the pair matched with the key using find and upperbound" << endl;
    for (auto it = student.find("Aravind"); it != student.upper_bound("Aravind"); it++) {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << "\nPrinting elements of the map using crbegin and crend" << endl;
    for (auto cit = student.crbegin(); cit != student.crend(); ++cit) {
        cout << " |" << cit->first << ':' << cit->second << '|'<<endl;
    }
    
    multimap < string, float>student_2;
    cout << "\nMap 1 has student name and marks of sem 1 and Map 2 has details of sem 2";
    cout << "\nSem 1\n";
    for (auto i = student.begin(); i != student.end(); i++) {    
        cout << i->first << "\t" << i->second << endl;           
    }
    cout << "\nSem 2\n";
    student_2={ {"Aravind", 8.0},
                {"Aravind", 6.0},
                {"Sujith", 6.4},
                {"Sujith", 7.3},
                {"Swetha", 9.1},
                {"Tharani", 7.7}
              };
    for (auto i = student_2.begin(); i != student_2.end(); i++) {
        cout << i->first << "\t" << i->second << endl;
    }


    cout << "\nSwapping the elements of the map\n";
    student_2.swap(student);                
   // swap(student,student_2);
    cout << "\nSem 1\n";
    for (auto i = student.begin(); i != student.end(); i++) {
        cout << i->first << "\t" << i->second << endl;
    }
    cout << "\nSem 2\n";
    for (auto i = student_2.begin(); i != student_2.end(); i++) {
        cout << i->first << "\t" << i->second << endl;
    }
    return 0;
}
