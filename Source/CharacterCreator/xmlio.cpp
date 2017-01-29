#include "xmlio.h"
#include <QMessageBox>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdio>
#include "dep/PugiXML/pugixml.hpp"

using namespace pugi;

std::string XMLIO::m_filePath;
xml_document XMLIO::m_doc;

void XMLIO::InitDocument(const std::string &filePath) {
	m_filePath = filePath;

	if (std::ifstream(filePath)) {
		QMessageBox messageBox;
		messageBox.setText("Reading from file.");
		messageBox.exec();

		LoadFile();
	}

}

void XMLIO::LoadFile() {
	m_doc.load_file(m_filePath.c_str());
}

void XMLIO::DeleteFile() {

	if (!std::ifstream(m_filePath)) {
		return;
	}

	QMessageBox messageBox;

	if (remove(m_filePath.c_str()) != 0) {
		messageBox.setText("Error deleting file");
	}
	else {
		messageBox.setText("Deleted file");
	}

	messageBox.exec();
}

void XMLIO::SaveFile() {
	DeleteFile();

	m_doc.save_file(m_filePath.c_str());

	QMessageBox messageBox;
	messageBox.setText("Created file");
	messageBox.exec();
}

Character XMLIO::GetCharacter(const char* name) {
	Character character;

	xml_node characterNode = m_doc.find_child_by_attribute("Name", name);

	character.name = name;
	character.health = characterNode.child_value("Health");
	character.energy = characterNode.child_value("Energy");
	character.defence = characterNode.child_value("Defence");
	character.level = characterNode.child_value("Level");
	character.dexterity = characterNode.child_value("Dexterity");
	character.constitution = characterNode.child_value("Constitution");

	return character;
}

void XMLIO::UpdateCharacter(const Character& character) {



}

void XMLIO::AppendCharacter(const Character& character) {

	// add node with some name
	xml_node node = m_doc.append_child("Character");

	pugi::xml_attribute attr = node.append_attribute("Name");
	attr.set_value(character.name.c_str());

	xml_node healthNode = node.append_child("Health");
	healthNode.append_child(node_pcdata).set_value(character.health.c_str());

	xml_node energyNode = node.append_child("Energy");
	energyNode.append_child(node_pcdata).set_value(character.energy.c_str());

	xml_node levelNode = node.append_child("Level");
	levelNode.append_child(node_pcdata).set_value(character.level.c_str());

	xml_node defenceNode= node.append_child("Defence");
	defenceNode.append_child(node_pcdata).set_value(character.defence.c_str());

	xml_node dexterityNode = node.append_child("Dexterity");
	dexterityNode.append_child(node_pcdata).set_value(character.dexterity.c_str());

	xml_node constitutionNode = node.append_child("Constitution");
	constitutionNode.append_child(node_pcdata).set_value(character.constitution.c_str());


	SaveFile();

}

std::vector<const char*> XMLIO::GetCharacterNames() {

	std::vector<const char*> names;

	for (pugi::xml_node character = m_doc.child("Character"); character; character = character.next_sibling("Character"))
	{
		names.push_back(character.attribute("Name").as_string());
	}

	return names;
}



