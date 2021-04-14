#include <iostream>
#include <cstdint>


using namespace std;

class Power
{
private:
	float a;
	float b;
 public: 
	void setA(float a1) { a = a1; }
	void setB(float b1) { b = b1; }

	void calculate()
	{
		cout << pow(a, b) << endl;
	}

};

class RGBA
{
private:

	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;
public:

	RGBA(int red, int green, int blue, int alpha)
	{
		m_red = red;
		m_green = green;
		m_blue = blue;
		m_alpha = alpha;

		cout << "Enter red " << endl;
		cin >> red;

		cout << "Enter green " << endl;
		cin >> green;

		cout << "Enter blue " << endl;
		cin >> blue;

		cout << "Enter alpha " << endl;
		cin >> alpha;

	}
	
void print()
	{
		cout << "red " << m_red << endl;
		cout << "green " << m_green << endl; 
		cout << "blue " << m_blue << endl;
		cout << "alpha " << m_alpha << endl; 
	}
};


class Stack
{
private:
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int t = 0;

public:
	void reset()
	{


	}

};



int main()
{
	// =================== task 1 ================
	//Power calc;
	
	//calc.setA(2.3);
	//calc.setB(3.2);

	//calc.calculate();

	// =================== task 2 ================

	//RGBA task2(1,2,3,4);

	//task2.print();

	// =================== task 3 ================

	


}