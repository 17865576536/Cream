#pragma once


extern Cream::Applicaton* Cream::CreatApplicaton();


#ifdef CR_PLATFORM_WINDOWS
int main(int argc,char** argv)
{
	auto app = Cream::CreatApplicaton();
	app->Run();
	delete app;
	
}

#endif


