#include <sstream>

template <class T>
inline std::string to_string(const T& t) {
	std::stringstream ss;
	ss << t;
	return ss.str();
}

template <class T>
void swap(T& a, T& b) {
	T t = b;
	b = a;
	a = t;
}