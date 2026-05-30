    #include <iostream>
    using namespace std; 
	
	struct Student {
    string name;
    int marks[3];
};

int main() {
    Student students[2];
    for (int i = 0; i < 2; i++) {
   cout <<"Enter name of student " << i+1 <<endl;  
    cin >> students[i].name;
    for (int j = 0; j < 3; j++) {
    cout <<"Enter marks of student " << j+1 <<endl;
    cin >> students[i].marks[j];
        }
    }
}

