#include <iostream>
#include <cctype>
using namespace std;

class student{
    
    private:
    
    string firstName;
    string lastName;
    string dob;
    float gpa;
    char gender;
    char status;
    string id;
    
    public:
    
    student(string, string);
    
    void setFirstName(string); 
    string getFirstName();

    void setLastName(string);
    string getLastName();

    void setDob(string);
    string getDob();

    void setGPA(float);
    float getGPA();

    void setGender(char);
    char getGender();

    void setStatus(char);
    char getStatus();

    void setID(string);
    string getID();
    
    string getTitle(char, char);
    
    string convertGPAtoGrade(float);
    };
    
    student::student(string fn, string ln){
    
    setFirstName(fn);
    setLastName(ln);
    setDob("01/01/1900");
    setGPA(0.0);
    setGender('m');
    setStatus('m');
    setID("1000000001");
    
}

bool containsDigit(const string& n) {
        for (char ch : n) {
            if (isdigit(ch)) {
                return true;  // Return true if a digit is found
            }
        }
        return false;  // Return false if no digits are found
    }

void student::setFirstName(string fn){
    
    if (containsDigit(fn))
    firstName = "";
    else
    firstName = fn;
} 
    

string student::getFirstName(){
    
    return firstName;
    
}
void student::setLastName(string ln){
    
    if (containsDigit(ln))
    lastName = "";
    else
    lastName = ln;
    
}

string student::getLastName(){
    
    return lastName;
}
void student::setDob(string DOB){
    
    dob = DOB;
    
}

string student::getDob(){
    
    return dob;
}

void student::setGPA(float GPA){
    
    if (GPA < 0 || GPA > 4)
    gpa = 0;
    else
    gpa = GPA;
}
float student::getGPA(){
    
    return gpa;
}

void student::setGender(char gen){
    
    if (gen == 'm' || gen == 'M'|| gen == 'f' || gen == 'F')
    gender = gen;
    else
    gender = 'M';
}
char student::getGender(){
    
    return gender;
}
void student::setStatus(char stat){
    
    if (stat == 'm' || stat == 'M'|| stat == 's' || stat == 'S')
    status = stat;
    else
    status = 'S';
}
char student::getStatus(){
    
    return status;
}

string student::getTitle(char gender, char status){
    
    if ((gender == 'f' || gender == 'F') && (status == 'm' || status == 'M'))
    return "Mrs.";
    else if ((gender == 'f' || gender == 'F') && (status == 's' || status == 'S'))
    return "Ms.";
    else
    return "Mr.";
    
    
}

string student::convertGPAtoGrade(float gpa){
    
    if( gpa == 4 )
    return "A";
    else if (gpa < 4 && gpa >= 3.7)
    return "A-";
    else if (gpa < 3.7 && gpa >= 3.3)
    return "B+";
    else if (gpa < 3.3 && gpa >= 3)
    return "B";
    else if (gpa < 3 && gpa >= 2.7)
    return "B-";
    else if (gpa < 2.7 && gpa >= 2.3)
    return "C+";
    else if (gpa < 2.3 && gpa >= 2)
    return "C";
    else if (gpa < 2 && gpa >= 1.7)
    return "C-";
    else if (gpa < 1.7 && gpa >= 1.3)
    return "D+";
    else if (gpa < 1.3 && gpa >= 1)
    return "D";
    else if (gpa < 1&& gpa >= 0.7)
    return "D-";
    else
    return "F";
}

void student::setID(string ID){
    
    id = ID;
    
}

string student::getID(){
    
    return id;
}

int main(){
    
    
    string firstName, lastName, dob, id;
    float gpa;
    char gender, status;

    
    cout << "Enter the following student information:" << endl;
    
    cout << "First Name: ";
    cin >> firstName;
    
    cout << "Last Name: ";
    cin >> lastName;
    
    cout << "Date of Birth (DD/MM/YYYY): ";
    cin >> dob;
    
    cout << "GPA (0.0 - 4.0): ";
    cin >> gpa;
    
    cout << "Gender (M/F): ";
    cin >> gender;
    
    cout << "Status (M for married, S for single): ";
    cin >> status;
    
    cout << "ID: ";
    cin >> id;

   
    student student1(firstName, lastName);
    student1.setDob(dob);
    student1.setGPA(gpa);
    student1.setGender(gender);
    student1.setStatus(status);
    student1.setID(id);

    
    cout << "\nStudent Information:" << endl;
    cout << "Full Name: " << student1.getFirstName() << " "<<student1.getLastName()<< endl;
    cout << "Date of Birth: " << student1.getDob() << endl;
    cout << "GPA: " << student1.getGPA() << endl;
    cout << "Grade: " << student1.convertGPAtoGrade(student1.getGPA()) << endl;
    cout << "Gender: " << student1.getGender() << endl;
    cout << "Status: " << student1.getStatus() << endl;
    cout << "Title: " << student1.getTitle(student1.getGender(), student1.getStatus()) << endl;
    cout << "ID: " << student1.getID() << endl;

    return 0;
}