/**
 * In deep copy we are also creating a space for the storage of the int variable.
 * So every time a copy of the object is made the copy constructor will allocate memory to the
 * raw pointers data also. Hence it will point to another location and when the destructor will
 * erase it from the memory, only the copy will be erased not the actual one.
 */
#include <iostream>

using namespace std;

class Deep{
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
	Deep(int d);

	//	Copy Constructor
	Deep(const Deep &source);

	//	Destructor
	~Deep();
};

Deep::Deep(int d){
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
	: Deep(*source.data){
	cout << "Copy Constructor - Deep Copy" << endl;
}

Deep::~Deep(){
	delete data;
	cout << "Destructor freeing data." << endl;
}

void display_deep(Deep s){
	cout << s.get_data_value() << endl;
}

int main(){

	Deep obj1{100};
	display_deep(obj1);

	Deep obj2{obj1};
	obj2.set_data_value(1000);

	return 0;
}