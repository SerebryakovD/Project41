#include<iostream>
using namespace std;

class Children {
	private:
		string name;
		string last_name;
		int age;
	public:
		Children(string _name, string _last_name, int _age)
			: name(_name), last_name(_last_name), age(_age) {}

		Children(int age) {
			this->name = "Default";
			this->last_name = "Default";
			this->age = age;
		}

		Children() {
			this->name = "Jonh";
			this->last_name = "Smith";
			this->age = 42;
		}

		void getData() {
			cout << "name: " << this->name << endl;
			cout << "last_name: " << this->last_name << endl;
			cout << "age: " << this->age << endl;
		}

		string getName() {return this->name;}
		string getLastName() {return this->last_name;}
		int getAge() {return this->age;}

		void setName(string newName) {this->name = newName;}
		void setLastName(string newLastName) {this->last_name = newLastName;}
		void setAge(int newAge) {this->age = newAge;}
};

int main() {
	Children* child = new Children();
	Children* child2 = new Children("Mike", "Washington", 19);
	Children* child3 = new Children(89);
	cout << child->getName() << endl;
	cout << child->getName() << endl;
	cout << child->getAge() << endl;
	child->setAge(15);
	cout << child->getAge() << endl;

	child->getData();
	child2->getData();
	child3->getData();

	return 0;
}