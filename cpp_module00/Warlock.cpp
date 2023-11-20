#include "Warlock.hpp"

const std::string Warlock::getName(void) const{
		return (this->name);
}

const std::string Warlock::getTitle(void) const{
	return (this->title);
}

void Warlock::setTitle(const std::string &t){
		this->title = t;
}

void Warlock::introduce(void) const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

Warlock::Warlock(){
}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock &Warlock::operator=(const Warlock &rhs)
{
		if (this == &rhs)
				return (*this);
		this->name = rhs.getName();
		this->title = rhs.getTitle();
		return (*this);
}

Warlock::Warlock(const std::string &n, const std::string &t) : name(n), title(t)
{
		std::cout << this->name << ": This looks like another boring day." << std::endl;
}

