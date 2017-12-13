#include "AllHeaders.h"
int menu();											//klasa email do poprawy
Person T[1000];										//
													//przerobka na jez angielski(e mail, adress, job ,date, person. DONE lack of monbileno)

int main(){
	while (true) {
		for (int i = 0; i == 0; i++) {
			int b = menu();
				if(b==0){
					cout << "Czy napewno chcesz wyjsc? - jesli tak wcisnij 0" << endl;
					int a;
					cin >> a;
					if (a == 0) { exit(1); }
				};
		}
	}


	system("pause");
	return 0;

}

int menu()
{
	static int licznik;
	cout << "Dodaj kontakt - wcisnij 1" << endl;
	cout << "Wyswietl kontakty - wcisnij 2" << endl;
	cout << "Zakoncz program - wcisnij 0" << endl;
	int a, nr;
	cin >> a;
	if (a == 0) { return 0; }
	else if (a == 1) 
	{
					T[licznik];
					T[licznik].setName();
					T[licznik].setSurname();
						
					cout << "Czy chcesz uzupelnic inne dane dot. wybranego kontaktu: \n"
						"1.Nie \n2.Tak " << endl;
					cin >> nr;
			
							switch (nr) {						
							case 1:
								++licznik;
								return a;
								break;
							case 2:
								while (true) {
									cout << "     1.Praca \n     2.Kontakt \n     3.Data urodzenia \n     4.Wyjscie " << endl;
									int local;
									cin >> local;
									switch (local) {
									case 1:
										T[licznik].SetJobDetails();
										break;
									case 2:
										T[licznik].setContact();
										break;
									case 3:
										T[licznik].SetDate();
										break;
									case 4:
										break;
									default:
										cout << "Zarzadales nr " << nr << " nie ma takiego!" << endl;
										break;
									}
									if (local == 4) { break; }
								}
								++licznik;
								return a;
								break;
							default:
								cout << "Zarzadales nr " << nr << " nie ma takiego!" << endl;
								++licznik;
								return a;
								break;
							}
	}
	else if (a == 2) {										
		cout << "Lista twoich kontaktow: " << endl;
			for (int i = 0; i < licznik; i++)
				{
				cout << i + 1 << ") ";
				T[i].displayNames();
				}
			cout << "Czy chcesz zarzadzac kontaktami : \n"
				"1.Nie \n2.Tak " << endl;
			cin >> nr;
			switch (nr) {
			case 1:
				break;
			case 2:
				while (true) 
				{
					cout << "Podaj numer kontaktu: " << endl;
					int local;
					cin >> local;
					local--;
							if(local>=0 && local<licznik)
							{
								cout << "       1.Edytuj \n       2.Wyswietl szczegolowe dane \n       3.Powrot do Menu glownego"
									<< endl;
								int a;
								cin >> a;
											if (a == 2) 
											{
												cout << endl;
												T[local].DisplayDate();
												T[local].DisplayJob();
												T[local].displayContact();
												break;
											}
											else if(a==1)
											{
												cout << "Jestes w trybie edycji kontaktu ";
												T[local].displayNames();
													while (true) 
													{
														cout << "1)Edit name.\n2)Edit Surname.\n3)Edit date of birth.\n"
															"4)Edit contact data.\n5)Edit Job details\n6)Return to main menu." << endl;
														int a;
														cin >> a;
														if (a == 1) { T[local].setName(); }
														else if (a == 2) { T[local].setSurname(); }
														else if (a == 3) { T[local].SetDate(); }
														else if (a == 4) { T[local].setContact(); }
														else if (a == 5) { T[local].SetJobDetails(); }
														else if (a == 6) { break; }
														else { cout << "Wrong number" << endl; continue; }

													}
													break;
											}
											else if (a == 3) { break; }
											else { break; }
							}
							else { cout << "Nie ma takiego kontaktu. " << endl; continue; }
				}
				break;
			default:
				cout << "Zarzadales nr " << nr << " nie ma takiego!" << endl;
				break;
			}


			cout << endl;
			return a;
	}
	else { return a; }
}