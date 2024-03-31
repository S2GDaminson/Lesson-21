#include<iostream>
using namespace std;


class Phone_book {
	string name;
	string home_phone;
	string work_phone;
	string mobile_phone;

public:
	Phone_book() {
		cout << "Default Constructer" << endl;
	}
	Phone_book(string name, string home_phone, string work_phone, string mobile_phone) {
		cout << "Constructer with parameters )4(" << endl;
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = mobile_phone;
	}
	Phone_book(string name, string home_phone, string work_phone) {
		cout << "Constructer with parameters )3(" << endl;
		this->name = name;
		this->home_phone = home_phone;
		this->work_phone = work_phone;
		this->mobile_phone = "";
	}

	Phone_book(Phone_book& phone) {
		this->name = phone.name;
		this->mobile_phone = phone.mobile_phone;
		this->home_phone = phone.home_phone;
		this->work_phone = phone.work_phone;
		cout << "Copy Consrtructor" << endl;
	}


	void Set_Mobile_Phone(string mobile_phone) {
		this->mobile_phone = mobile_phone;
	}
	void Set_Home_Phone(string home_phone) {
		this->home_phone = home_phone;
	}
	void Set_Work_Phone(string work_phone) {
		this->work_phone = work_phone;
	}


	string Get_Name() {
		return name;
	}
	string Get_Mobile_Phone() {
		return mobile_phone;
	}
	string Get_Home_Phone() {
		return home_phone;
	}
	string Get_Work_Phone() {
		return work_phone;
	}


	void Show() {

		cout << "Name: " << name << endl;
		cout << "Mobile Phone: " << mobile_phone << endl;
		cout << "Home Phone: " << home_phone << endl;
		cout << "Work Phone: " << work_phone << endl;
	}











	~Phone_book()
	{
		cout << "Destructor" << endl;
	}

};


void main() {


	Phone_book* phone1=new Phone_book("Ehmed", "321423434", "321321231", "312637321");
	phone1->Show();
	cout << "_____________________________" << endl;
	Phone_book* phone2 = new Phone_book;
	phone2 = phone1;
	phone2->Set_Home_Phone("111111111111111");
	phone1->Show();






















}