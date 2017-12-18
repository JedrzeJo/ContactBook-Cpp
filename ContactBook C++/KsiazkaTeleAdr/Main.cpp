#include "AllHeaders.h"
int menu();											//klasa email do poprawy
Person T[1000];										//domyslny nr tel ustawic
													

int main(){
	while (true) {
		for (int i = 0; i == 0; i++) {
			int b = menu();
				if(b==0){
					cout << "Sure You want to quit? If so, type 0" << endl;
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
	cout << "Add new contact - type 1" << endl;
	cout << "Display Your contacts - type 2" << endl;
	cout << "Quit - type 0" << endl;
	int a, nr;
	cin >> a;
	if (a == 0) { return 0; }
	else if (a == 1) 
	{
					T[licznik];
					T[licznik].setName();
					T[licznik].setSurname();
						
					cout << "Would You like to set some additional informations about that contact now?: \n"
						"1.No \n2.Yes " << endl;
					cin >> nr;
			
							switch (nr) {						
							case 1:
								++licznik;
								return a;
								break;
							case 2:
								while (true) {
									cout << "     1.Job \n     2.Contact data \n     3.Birthday Date \n     4.Exit " << endl;
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
										cout << "Required number doesn't exist " << endl;
										break;
									}
									if (local == 4) { break; }
								}
								++licznik;
								return a;
								break;
							default:
								cout << "Required number doesn't exist " << endl;
								++licznik;
								return a;
								break;
							}
	}
	else if (a == 2) {										
		cout << "Your contacts list: " << endl;
			for (int i = 0; i < licznik; i++)
				{
				cout << i + 1 << ") ";
				T[i].displayNames();
				}
			cout << "Would you like to manage Your contacts : \n"
				"1.No \n2.Yes " << endl;
			cin >> nr;
			switch (nr) {
			case 1:
				break;
			case 2:
				while (true) 
				{
					cout << "Type Contact No: " << endl;
					int local;
					cin >> local;
					local--;
							if(local>=0 && local<licznik)
							{
								cout << "       1.Edit \n       2.Display details \n       3.Return to main menu"
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
												cout << "You are in edition mode ";
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
							else { cout << "Such contact doesn't exist. " << endl; continue; }
				}
				break;
			default:
				cout << "Required number doesn't exist " << endl;
				break;
			}


			cout << endl;
			return a;
	}
	else { return a; }
}