#pragma once

#include <iostream>
#include <string>

class Warlock{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock &operator=(const Warlock &rhs);
		Warlock(const Warlock &rhs);

	public:
		const std::string getName() const;
		const std::string getTitle() const;
		void introduce() const;
		void setTitle(const std::string &str);

		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);
};

