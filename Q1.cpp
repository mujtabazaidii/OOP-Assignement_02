#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class teacher {
	string Name;
	string Address;
	string ContactInfo;
	string EmailAddress;
	string Institution;
	string Type;
	string Department;
	string Qualification;
	string Designation;
	int Experience;
	int Publications;
	int CreditHrsPerWeek;
	int MonthlySalary;
	char** AllocateCourses;
	int* CreditHrs;
public:
	teacher() {
		Name = " "; Address = " "; ContactInfo = " "; EmailAddress = " "; Institution = " "; Type = " "; Address = " ";
		Designation = " "; Experience = 0; CreditHrsPerWeek = 0; MonthlySalary = 0; Publications = 0;Qualification = " ";		
    }
	void setName(string n) {
		Name = n;
	}
	void setAddress(string add) {
		Address = add;
	}
	void setContact(string cont) {
		ContactInfo = cont;
	}
	void setEmail(string email) {
		EmailAddress = email;
	}
	void setInstituation(string Inst) {
		Institution = Inst;
	}
	void setDepartment(string dept) {
		Department = dept;
	}
	void setQualification(string qual) {
		Qualification = qual;
	}
	void setDesignation(string desig) {
		Designation = desig;
	}
	void setType(string t) {
		Type = t;
	}
	void setExperience(int exp) {
		Experience = exp;
	}
	void setPublications(int p) {
		Publications = p;
	}
	int size = 4;
	void SetCourses(int course) {
		size = course;
		char** allocate = new char* [size];
		AllocateCourses = new char* [4];
		int count = 0;
        for (int i = 0; i < course; i++) {
			string a;
			for (int ii = 0; a[ii] != '\0'; ii++) {
				count++;
			}
			AllocateCourses[i] = new char[count];
			for (int j = 0; j < count; j++) {
				AllocateCourses[i][j] = allocate[i][j];
			}
		}
	}
	void setCreditHrs(int hours) {
		CreditHrs = new int[size];
		for (int i = 0; i < size; i++) {
			CreditHrs[i] = hours;
			cout << endl;
		}
	}
	int salary = 0;
	int s = 0;
	void set_salary() {

		if (Type == "V") {

			if (Designation == "Lecturer") {

				for (int i = 0; i < size; i++) {
					if (CreditHrs[i] == 1) {
						salary = (2000 * (1 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 2) {
						salary = (2000 * (2 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 3) {
						salary = (2000 * (3 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 4) {
						salary = (2000 * (4 * 4));
						s += salary;
					}
				}
			}
			else if (Designation == "Assistant Professor") {

				for (int i = 0; i < size; i++) {
					if (CreditHrs[i] == 1) {
						salary = (4000 * (1 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 2) {
						salary = (4000 * (2 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 3) {
						salary = (4000 * (3 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 4) {
						salary = (4000 * (4 * 4));
						s += salary;
					}
				}
			}
			else if (Designation == "Associate Professor") {
				for (int i = 0; i < size; i++) {
					if (CreditHrs[i] == 1) {
						salary = (7000 * (1 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 2) {
						salary = (7000 * (2 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 3) {
						salary = (7000 * (3 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 4) {
						salary = (7000 * (4 * 4));
						s += salary;
					}
				}
			}
			else if (Designation == "Professor") {

				for (int i = 0; i < size; i++) {
					if (CreditHrs[i] == 1) {
						salary = (9000 * (1 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 2) {
						salary = (9000 * (2 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 3) {
						salary = (9000 * (3 * 4));
						s += salary;
					}
					if (CreditHrs[i] == 4) {
						salary = (9000 * (4 * 4));
						s += salary;
					}
				}
			}
		}
		if (Type == "P") {
			if (Designation == "Lecturer") {
				salary = 100000;
				s = salary;
			}
			if (Designation == "Assistant Professor") {
				salary = 175000;
				s = salary;
			}
			if (Designation == "Associate Professor") {
				salary = 250000;
				s = salary;
			}
			if (Designation == "Professor") {
				salary = 325000;
				s = salary;
			}
		} 
		int increment = 0;
		if (Experience == 1) {
			increment = s * 0.05;
		}
		if (Experience == 2) {
			increment = s * 0.01;
		}
		if (Experience == 3) {
			increment = s * 0.1;
		}
		if (Experience == 4) {
			increment = s * 0.2;
		}
		MonthlySalary = s + increment;
		for (int i = 0; i < Publications; i++) {
			MonthlySalary += 8000;
		}
	}
	string getName() const {
		return Name;
	}
	string getAddress() const {
		return Address;
	}
	string getContact() const {
		return ContactInfo;
	}
	string getEmail() const {
		return EmailAddress;
	}
	string getInstituation() const {
		return Institution;
	}
	string getDepartment() const {
		return Department;
	}
	string getQualification() const {
		return Qualification;
	}
	string getDesignation() const {
		return Designation;
	}
	string getType() const {
		return Type;
	}
	int getSalary() const {
		return MonthlySalary;
	}
	int getExperience() const {
		return Experience;
	}
	int getPublications() const {
		return Publications;
	}
	int getCourses() const {
		cout << endl;
		for (int i = 0; i < size; i++) {
			for (int j = 0; AllocateCourses[i][j] != '\0'; j++) {
				cout << AllocateCourses[i][j];
			}
			cout << endl;
		}
		return **AllocateCourses;
	}
	int getCreditHrs() {
		for (int i = 0; i < size; i++) {
			cout << CreditHrs[i] << " ";
		}
		return *CreditHrs;
	}
	void updateRecord(int a) {
		string qual, cont, inst;
		if (a == 1) {
			cout << endl << "Please Enter Your Updated Qualification" << endl;
			cin >> qual; cout << endl;
			Qualification = qual;
		}
		if (a == 2) {
			cout << endl << "Please Enter Your Updated Contact Info" << endl;
			cin >> cont; cout << endl;
			ContactInfo = cont;
		}
		if (a == 3) {
			cout << endl << "Please Enter Your Updated Institute" << endl;
			cin >> inst; cout << endl;
			Institution = inst;

		}
	}

	void showData() {
		cout << getName() << endl << getAddress() << endl << getContact() << endl << getEmail() << endl << getInstituation() << endl;
		cout << getDepartment() << endl << getQualification() << endl << getDesignation() << endl << getType() << endl;

	}
	void showD() {
		cout << getSalary() << endl << getExperience() << endl << getPublications() << endl;
	}
};


int main() {
	string Name;
	string Address;
	string ContactInfo;
	string EmailAddress;
	string Institution;
	string Type;
	string Department;
	string Qualification;
	string Designation;
	int Experience;
	int Publications;
	int CreditHrsPerWeek;
	int MonthlySalary;
	teacher t1;
	int get_line;
	int* credit_hours = new int[4];
	char** Allocate_courses = new char* [20];
	string data = "";
	get_line = 4;
	int count = 0;
	int i = 0;
	string a;
	ifstream file("data.txt");
	getline(file, Name);
	getline(file, Address);
	getline(file, ContactInfo);
	getline(file, EmailAddress);
	getline(file, Institution);
	getline(file, Department);
	getline(file, Type);
	getline(file, Designation);
	t1.setCreditHrs(get_line);
	t1.setName(Name);
	t1.setAddress(Address);
	t1.setContact(ContactInfo);
	t1.setEmail(EmailAddress);
	t1.setInstituation(Institution);
	t1.setDepartment(Department);
	t1.setQualification("Master");
	t1.setDesignation(Designation);
	t1.setType(Type);
	t1.setExperience(2);
	t1.setPublications(6);
	t1.set_salary();
	t1.showData();
	for (int i = 0; i < 4; i++) {
		getline(file, data, ',');
		string a;
		a = data;
		for (int ii = 0; a[ii] != '\0';ii++) {
			count++;
		}
		Allocate_courses[i] = new char[count];
		for (int j = 0; j < count; j++) {
			Allocate_courses[i][j] = a[j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; Allocate_courses[i][j] != '\0'; j++) {
			cout << Allocate_courses[i][j];
		}
		cout << ",";
	}
	cout << endl;
	t1.showD();
	cout << "To Update Information in Class" << endl << endl;
	int m;
	cout << "Enter 1 to update Qualification" << endl;
	cout << "Enter 2 to update Contact Information" << endl;
	cout << "Enter 3 to update Institution" << endl;
	cin >> m;
	t1.updateRecord(m);
	t1.showData();
	t1.showD();
	return 0;
}
