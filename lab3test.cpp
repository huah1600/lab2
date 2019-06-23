
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	system("chcp 1252");
	ifstream names;

	string line;
	string name;
	string lastname;
	string personnummer;
	string adress;
	
	names.open("names.txt");
	if (!names) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}

	while (getline(names, line)) {

		name = line.substr(0, line.find(" "));
	    line.erase(0,line.find(" "));
		lastname = line.substr(line.find("  ") + 1);
		
		getline(names, personnummer);
		getline(names, adress);


		
		
		
		

		

		if (personnummer[8]%2 == 0) {

			std::cout << lastname <<" "<< name << "[K] " << adress << "\n";
			//std::cout << line << "\n";
		}
		else {

			

				std::cout << lastname <<" "<< name << "[M] " <<  adress << "\n";
				//std::cout << line << "\n";
			
		}

	}




	names.close();

	cin.get();
	return 0;
}
