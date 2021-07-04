#include<Cream.h>

class TheBox : public Cream :: Applicaton
{
public:
	TheBox()
	{

	}
	~TheBox()
	{


	}

};


Cream::Applicaton* Cream::CreatApplicaton()
{
	return new TheBox();
}