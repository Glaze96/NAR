#ifndef XMLIO_H
#define XMLIO_H
#include <string>
#include "character.h"
#include "dep/PugiXML/pugixml.hpp"
#include <vector>

class XMLIO
{
private:
	XMLIO() { }

public:
	static void InitDocument(const std::string& filePath);
	static std::vector<const char*> GetCharacterNames();
	static Character GetCharacter(const char* name);
	static void AppendCharacter(const Character& character);
private:
	static void UpdateCharacter(const Character &character);
	static void DeleteFile();
	static void LoadFile();
	static void SaveFile();

private:
	static std::string m_filePath;
	static pugi::xml_document m_doc;

};

#endif // XMLIO_H
