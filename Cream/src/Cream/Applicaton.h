#pragma once


#include "Core.h"
namespace Cream {

	class CREAM_API Applicaton
	{
	public :
		Applicaton();
		virtual ~Applicaton();
		void Run();
	};

	Applicaton* CreatApplicaton();

}


