#include "Inputs_data.h"
#include "DfSettings.h"

int main()
{
	Inst::Factory Test(Inst::Factory::DEBUG);
	Test.Get_Settings();
	/*
	FileInputs::Inputs file;
	Inst::Consol_Settings *def = Inst::Consol_Settings::Instans();
	std::string test = def->get_path();
	DataLog::Data log(file.get_size(def));
	file.get_data(def,log);
	*/
	return 0;
	
}