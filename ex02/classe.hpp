#pragma once

class  Base
{
public:
	virtual ~Base();
};

 Base::~ Base()
{
}

class A{

};
class B{

};
class C{

};
void identify(Base* p);
void identify(Base& p);