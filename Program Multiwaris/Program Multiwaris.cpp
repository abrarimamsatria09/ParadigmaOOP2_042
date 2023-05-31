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

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pjeniskelamin, string pSekolah) :
		orang(pNama),
		manusia(pjeniskelamin),
		sekolah(pSekolah) {
		cout << "pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya " + nama + " dengan jenis kelamin "
			+ jeniskelamin + " dari sekolah " + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("andi laksono", "laki-laki", "SMAN 1 BANTUL");
	cout << siswa.perkenalan();

	return 0;
}