#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "xmlio.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
	ui(new Ui::MainWindow) {

    ui->setupUi(this);
	init();
}

MainWindow::~MainWindow() {
	delete ui;
}

void MainWindow::init() {
	XMLIO::InitDocument("characters.xml");
	fillList();
}

void MainWindow::fillList() {
	std::vector<const char*> characterNames;

	characterNames = XMLIO::GetCharacterNames();

	for	(auto name : characterNames) {
		ui->character_list->addItem(name);
	}

}

void MainWindow::showMessageBox(QString text) {
	QMessageBox messageBox;
	messageBox.setText(text);
	messageBox.exec();
}

void MainWindow::on_helloWorld_Button_clicked() {

	Character character;
	character.name = ui->name_lineEdit->text().toLocal8Bit().constData();
	character.health = "100";
	character.energy = "5";
	character.defence = "10";
	character.level = "20";
	character.dexterity = "2";
	character.constitution = "8";

	XMLIO::AppendCharacter(character);
}

void MainWindow::fillTextBoxes(const Character& character) {

	ui->name_lineEdit->setText(character.name.c_str());
	ui->health_lineEdit->setText(character.health.c_str());
	ui->energy_lineEdit->setText(character.energy.c_str());
	ui->defence_lineEdit->setText(character.defence.c_str());
	ui->level_lineEdit->setText(character.level.c_str());
	ui->dexterity_lineEdit->setText(character.dexterity.c_str());
	ui->constitution_lineEdit->setText(character.constitution.c_str());

}


void MainWindow::on_character_list_itemDoubleClicked(QListWidgetItem *item)
{
	Character character = XMLIO::GetCharacter(item->text().toLocal8Bit().constData());
	fillTextBoxes(character);
}
