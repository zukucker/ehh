#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int write(string name, string category, string description){
	ofstream file("test", ios_base::app | std::ios_base::out);
	file << name + ";" + category + ";"  + description << endl;
	file.close();
	return 0;
}

string search(string searchterm){
	ifstream file("test", ios_base::app | std::ios_base::out);
	unsigned int currentLine = 0;
	string line;
	while(getline(file, line)){
					currentLine++;
					if(line.find(searchterm, 0) != string::npos){
									
									//TODO:
									//found string, now need to parse.
									//print out name, categorie and description
									
									system("clear");
									return line;
					}
	}
	return "Es konnte nichts gefunden werden, sorry!";
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
	return "Erfolgreich gespeichert";
}

int main() {
	 	int eingabe;	
		string test;
		string searchterm;
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
						cout << "Suchterm eingeben" <<endl;
						cin >> searchterm;
						cout << search(searchterm) << endl;
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

