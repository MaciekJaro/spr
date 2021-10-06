#include <iostream>
#include <string>
class uczen{ 
	public:     
		string imie;                   
		string nazwisko;                
		string klasa;
		string rok_ur;
		
		void wyswietl_imie(){               
			cout<<"Imie "<<imie<<endl; 
		}
	void wyswietl_nazwisko(){               
			cout<<"Nazwisko "<<nazwisko<<endl; 
		}
		}
		void wyswietl_klase(){
		cout<<"Klasa "<<klasa<<endl;
		}
			void wyswietl_rok_ur(){
		cout<<"Rok ur "<<rok_ur<<endl;
		}
};

int main() {
	uczen uczen1;
	uczen1.imie=(Maciek);
	uczen1.nazwisko=(Nazwisko);
	uczen1.klasa=(Cg);
	uczen1.rok_ur=(2003);
	
	cout<<imie<<nazwisko<<klasa<<rok_ur<<endl;
	return 0;
}
