#include <iostream>
#include <exception>

class MyIOException : public std::exception {
	std::string *s;
	public:
		MyIOException(std::string str) : s(new std::string(str + " hello")) {}
		virtual ~MyIOException() throw(){delete s;}
		virtual const char* what() const throw() {
			return (*s).c_str();
		}
};


int main () {
	try {
		throw MyIOException("problem in the time function");
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}