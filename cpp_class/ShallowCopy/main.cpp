/**
 * In shallow copy, the data members of a class is a raw pointer. Hence when there is a copy of the 
 * raw pointer created, when another function is called then the pointer is pointing to a memory location.
 * When that called function is over the destructor is called and it erases the space in the heap
 * which was created first. Hence the original pointer starts pointing to an invalid location.
 * This leads to a crash in the memory.
 */

#include<iostream>

using namespace std;

class Shallow{
private:
	int *data;
	
public:
	void set_data_value(int d){
		*data = d;
	}
	int get_data_value(){
		return *data;
	}
//	Constructor
	Shallow(int d);
	
//	Copy Constructor
	Shallow(const Shallow &source);
	
//	Destructor
	~Shallow();
};

Shallow::Shallow(int d){
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow &source)
	:data(source.data){
		cout << "Copy Constructor - Shallow Copy" << endl;
	}
	
Shallow::~Shallow(){
	delete data;
	cout << "Destructor freeing data." << endl;
}

void display_shallow(Shallow s){
	cout << s.get_data_value() << endl;
}

int main(){
	
	Shallow obj1{100};
	display_shallow(obj1);
	
	Shallow obj2{obj1};
	obj2.set_data_value(1000);
	
	return 0;
}