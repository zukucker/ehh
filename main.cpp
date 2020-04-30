#include<iostream>
#include<fstream>

using namespace std;

int write(string name, string category, string description){
	ofstream file;
	file.open("test");
	file << name + ";" + category + ";"  + description + "\n";
	file.close();
	return 0;
}

string addArticle(){
	string name;
	string category;
	string description;	
		cout << "Bitte Artikel Namen eingeben" << endl;
		cin >> name;
		cout << "Bitte Kategorie eingeben" << endl;
		cin >> category;
		cout << "Bitte Beschreibung eingeben" << endl;
		cin >> description;
	write(name, category, description);
	return name + ";" +  category + ";" + description;
}

int main() {
	 	int eingabe;	
		string test;
		cout << "===================="<<endl;		
		cout << "Was möchtest du tun?"<<endl;
		cout << "===================="<<endl;		
		cout << "1.)Artikel suchen"<<endl;
		cout << "2.)Artikel anlegen"<<endl;
		cout << "3.)Artikel löschen"<<endl;
		cout << "x.)Beenden"<<endl;
		cout << "===================="<<endl;		

		cin >> eingabe;
		
		switch(eingabe){
				case 1:
						cout << "Works" << endl;
						break;
				case 2:
						cout << addArticle() << endl;
						break;
				case 3:
						cout << "Works" << endl;
						break;
				default:
						return 0;
						break;

		}
		return 0;
}

