#pragma once
#include <string>
#include <iostream>

class Item
{
private:
	std::string Description;
	std::string name;
public:
	//maybe define item type?
	Item();
	~Item();
	std::string getDescription();
	void setDescription(std::string desc);
	virtual void displayStats();
	std::string getName();
	void setName(std::string N);
	
};

