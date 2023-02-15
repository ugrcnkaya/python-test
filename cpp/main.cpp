#include <iostream>
using namespace std;



class Car {
	public:
	string name; 
	string model;

	virtual void see(){
	cout << this->name << " " << this->model << " " << endl;
	}

void set(string a, string b){
this->name = a;
this->model = b;
}

};


int main(){
	Car car1;
	car1.set("bambam", "audi");
	car1.see();

	
	return 0;
}
