using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web.UI.WebControls;
using System.Windows.Forms;
using System.Xml;
using System.Xml.Linq;

namespace CharacterCreator {
	public partial class Form1 : Form {
		public Form1() {
			InitializeComponent();
			Init();
		}

		private XDocument characterDocument;

		private void Init() {
			//XDocument xDoc = XDocument.Load("Characters.xml");
			//var query = from xEle in xDoc.Descendants("Character")
			//			select new ListItem(xEle.Element("Name").Value);

			//Characters_ListBox.DataValueField = "value";
			//Characters_ListBox.DataTextField = "text";
			//Characters_ListBox.DataSource = query;
			//Characters_ListBox.DataBind();

			if (File.Exists("Characters.xml")) {
				ReloadList();
			}
			else {
				GenerateXMLDoc();
			}

			characterDocument = XDocument.Load("Characters.xml");

		}

		private void ReloadList() {

			Characters_ListBox.Items.Clear();

			XmlDocument doc = new XmlDocument();
			doc.Load("Characters.xml");
			XmlNodeList list = doc.SelectNodes("Characters/Character/Name");
			
			foreach (XmlNode name in list) {
				Characters_ListBox.Items.Add(name.InnerText);
			}

		}

		private void Create_Button_Click(object sender, EventArgs e) {
			string name = Name_TextBox.Text;
			string healthStr = Health_TextBox.Text;
			string manaStr = Mana_TextBox.Text;

			AppendXML(name, healthStr, manaStr);

			ReloadList();
		}

		private void AppendXML(string name, string health, string mana) {
			XElement characterDesc =
				new XElement("Character",
					new XElement("Name", name),
					new XElement("Stats",
						new XElement("Health", health),
						new XElement("Mana", mana)
					)
				);

			characterDocument.Element("Characters").Add(characterDesc);

			characterDocument.Save("Characters.xml");

			MessageBox.Show("Appended XML document");

		}



		private void Apply_Button_Click(object sender, EventArgs e) {

		}

		private void Characters_ListBox_SelectedIndexChanged(object sender, EventArgs e) {



		}

		private void GenerateXMLDoc() {
			XDocument newDoc = new XDocument();

			XElement charactersElement = new XElement("Characters");

			newDoc.Add(charactersElement);

			newDoc.Save("Characters.xml");

			characterDocument = newDoc;

			MessageBox.Show("Created XML document");
		}

	}
}
