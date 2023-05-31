#include <iostream>
#include <String>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string jeniskelamin;

	manusia(string pjeniskelamin) :
		jeniskelamin(pjeniskelamin) {
		cout << "manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "manusia diahpus\n" << endl;
	}
};

