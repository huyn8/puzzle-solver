#pragma once
#include <iostream>

using namespace std;

class Puzzle
{
protected:
	virtual void outputHelper(ostream& out) const = 0;
	virtual void inputHelper(istream& in) = 0;
	virtual void setFit(int) = 0;
	virtual int getFit() = 0;
	
	int fit_score_ = 999999;

public:
	friend ostream& operator<<(ostream& out, const Puzzle& p)
	{
		p.outputHelper(out);
		return out;
	}

	friend istream& operator>>(istream& in, Puzzle& p)
	{
		p.inputHelper(in);
		return in;
	}
};