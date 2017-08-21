#include "Inputs_data.h"
#include "DfSettings.h"
#include <fstream>
#include <string>

int FileInputs::Inputs::get_size( Inst::Settings & def )
{
	std::fstream file;
	file.open( def.path, std::ios::in );
	file.seekg( 0, std::ios::end );
	int size = file.tellg();
	file.close();
	return size;
}

void FileInputs::Inputs::get_data( Inst::Settings const &def, DataLog::Data &log)
{
	char symbol;
	std::ifstream file(def.path );
	while ( file.eof() )
	{
		symbol = file.get();
		log.data_push(symbol);
	}
	file.close();
}
