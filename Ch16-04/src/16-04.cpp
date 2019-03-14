#include <iostream>
using std::cout;
using std::endl;

//Class for a pair of values of type T:
template<class T>
class Pair {
public:
	Pair();
	Pair(T firstValue, T secondValue);
	void setFirst(T newValue);
	void setSecond(T newValue);
	T getFirst() const;
	T getSecond() const;
	Pair<T> update(T a, T b);
	T addUp(const Pair<T>& thePair);
private:
	T first;
	T second;
};

template<class T>
Pair<T>::Pair(T firstValue, T secondValue) {
	first = firstValue;
	second = secondValue;
}

template<class T>
void Pair<T>::setFirst(T newValue) {
	first = newValue;
}

template<class T>
T Pair<T>::getFirst() const {
	return first;
}

template<class T>
Pair<T> Pair<T>::update(T a, T b) {
	return Pair<T>(first + a, second + b);
}

template<class T>
Pair<T>::Pair() {
}

template<class T>
T addUp(const Pair<T>& thePair){
	return thePair.first + thePair.second;
}

int main() {
	Pair<char> p('A', 'B');
	cout << "First is " << p.getFirst() << endl;
	p.setFirst('Z');
	cout << "First changed to " << p.getFirst() << endl;
	p = p.update(1, -1);
	cout << "First changed again to " << p.getFirst() << endl;
	return 0;
}
