#include "avto.h"
#include <iostream>
using namespace std;
/*public*/
//констурктор
Avto::Avto(const std::string& _times, const std::string& _volume, const std::string& _citirs, int _year, const std::string& _name, const std::string& _mark)
	: _times(_times), _volume(_volume), _citirs(_citirs), _year(_year), _name(_name), _mark(_mark) {
	cout << "Конструктор Машины" << endl;
}
//коснтурктор копирвания
Avto::Avto(const Avto& g) :
	_times(g._times), _volume(g._volume), _citirs(g._citirs), _year(g._year), _name(g._name), _mark(g._mark) {
	cout << "Конструктор копирования Машины" << endl;
}
//деструктор
Avto::~Avto() {
	cout << "Деструктор Машины" << endl;
}
/*геттеры сеттеры*/
int& Avto::year() { return _year; }
std::string& Avto::mark() { return _mark; }
std::string& Avto::times() { return _times; }
std::string& Avto::volume() { return _volume; }//объём перевозимого груза
std::string& Avto::citirs() { return _citirs; }//в какие города осуществляет поездки
std::string& Avto::name() { return _name; }//наименование/модель

//перегрука операторов ввода и выводадля объектов
std::istream& operator>>(std::istream& in, Avto& g) {
	if (!(in >> g._times >> g._volume >> g._citirs >> g._year >> g._name >> g._mark)) {
		throw  Exception("reading exception");
	}
	return in;
}
std::ostream& operator<<(std::ostream& out, const Avto& g) {
	out << g._times << '\t' << g._volume << '\t' << g._citirs << '\t' << g._year << '\t' << g._name << '\t' << g._mark;
	return out;
}
