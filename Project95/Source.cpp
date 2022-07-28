#include<iostream>
#include<string>
using namespace std;
struct SEAT{
	int number;
	bool seatstatus;
};
struct CAR{
	int id, number_of_seats;
	SEAT seat[30];
};
void mainminue(){
	cout << "choose one from the next operations....." << endl << "1- Reserve a ticket." << endl << "2- Cancel the reservation." << endl << "3- Check whether a car has available seat or not." << endl << "4- Check whether a seat is available or not." << endl << "5- Get the number of the available seats in a specific car." << endl << "6- Check the statues of the car's seats." << endl << "7- End the programm." << endl;
}
void timer(){
	for (int i = 0; i < 100000000; i++){
	}
}

int main(){
	CAR car[10];
	bool z = true, u = false;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 30; j++){
			car[i].seat[j].number = j + 1;
			car[i].seat[j].seatstatus = true;
		}
	}
	for (int i = 0; i < 10; i++){
		car[i].id = i + 1;
		car[i].number_of_seats = 30;
	}
	mainminue();
	int x;
	while (1){
		cin >> x;
		switch (x){
		case 1:{
				   cout << "choose from{1:10} the ID of the car you want to reserve in." << endl;
				   int q;
				   cin >> q;
				   bool zzz = false;
				   for (int mm = 0; mm < 30; mm++){
					   if (car[q - 1].seat[mm].seatstatus == true){
						   zzz = true;
						   break;
					   }
				   }
				   while (q >= 11 || q < 1 || zzz == false){
					   if (q >= 11 || q <= 0){
						   timer();
						   cout << "Not valid please choose another car." << endl;
					   }
					   else if (zzz == false)
						   cout << "Sorry but this car is not available please choose another car" << endl;
					   cin >> q;
				   }
				   timer();
				   cout << "the available seats of car " << q << " is ";
				   for (int i = 0; i < 30; i++){
					   if (car[q - 1].seat[i].seatstatus == true){
						   cout << i + 1 << " ";
						   timer();
					   }
				   }
				   cout << "." << endl;
				   timer();
				   cout << "How many seats you want to reserve." << endl;
				   int zz;
				   cin >> zz;
				   while (zz<1 || zz>30 || zz>car[q - 1].number_of_seats){
					   cout << "this is a wrong number please choose from[1:" << car[q - 1].number_of_seats << "]" << endl;
					   cin >> zz;
				   }
				   for (int i = 0; i<zz; i++){
					   timer();
					   cout << "choose the number of seat that you want to reserve." << endl;
					   int w;
					   cin >> w;
					   while (w <= 0 || w>30 || car[q - 1].seat[w - 1].seatstatus == false){
						   if (w <= 0 || w > 30){
							   timer();
							   cout << "Not valid please choose another seat." << endl;
						   }
						   else if (car[q - 1].seat[w - 1].seatstatus == false){
							   timer();
							   cout << "sorry but this seat was reserved before please choose another seat." << endl;
						   }
						   cin >> w;
					   }
					   car[q - 1].seat[w - 1].seatstatus = false;
					   car[q - 1].number_of_seats--;
					   timer();
					   cout << "Reserved" << endl;
					   timer(); timer();
				   }
				   timer();
				   cout << "Reservation **done**." << endl;
				   timer();
				   cout << "if you want to back to the main menue enter y." << endl;
				   char ch;
				   cin >> ch;
				   while (ch != 'y'){
					   timer();
					   cout << "please enter the right char." << endl;
					   cin >> ch;
				   }
				   break;
		}
		case 2:{
				   cout << "What is the number of the car." << endl;
				   int j;
				   cin >> j;
				   while (j <= 0 || j > 10){
					   if (j <= 0 || j > 10){
						   timer();
						   cout << "Not valid please enter a number of another car." << endl;
					   }
					   cin >> j;
				   }
				   timer();
				   cout << "How many seats you want to cancel." << endl;
				   int zz;
				   cin >> zz;
				   while (zz<1 || z>30 || zz > (30 - car[j - 1].number_of_seats)){
					   cout << "this is a wrong number please choose from[1:30]" << endl;
					   cin >> zz;
				   }
				   for (int i = 0; i<zz; i++){
					   timer();
					   cout << "What is the number of the seat you want to cancel." << endl;
					   int o;
					   cin >> o;
					   while (o <= 0 || o > 30 || car[j - 1].seat[o - 1].seatstatus == true){
						   if (o <= 0 || o > 30){
							   timer();
							   cout << "Not valid please enter a number of another seat." << endl;
						   }
						   else if (car[j - 1].seat[o - 1].seatstatus == true){
							   timer();
							   cout << "This seat is currently not reserved please enter a number of another seat." << endl;
						   }
						   cin >> o;
					   }
					   car[j - 1].seat[o - 1].seatstatus = true;
					   car[j - 1].number_of_seats++;
					   timer();
					   cout << "canceled." << endl;
					   timer(); timer(); timer();
				   }
				   timer();
				   cout << "if you want to back to the main menue enter y." << endl;
				   char ch;
				   cin >> ch;
				   while (ch != 'y'){
					   timer();
					   cout << "please enter the right char." << endl;
					   cin >> ch;
				   }
				   break;
		}
		case 3:{
				   cout << "Which car you Inquire about it." << endl;
				   int h;
				   cin >> h;
				   while (h <= 0 || h > 10){
					   timer();
					   cout << "Not valid please enter a number of another car." << endl;
					   cin >> h;
				   }
				   bool zzz = false;
				   for (int mm = 0; mm < 30; mm++){
					   if (car[h - 1].seat[mm].seatstatus == true){
						   zzz = true;
						   break;
					   }
				   }
				   if (zzz == true){
					   timer();
					   cout << "Yes this car is Available." << endl;
				   }
				   else{
					   timer();
					   cout << "Sorry this car is Notavailable." << endl;
				   }
				   cout << "if you want to back to the main menue enter y." << endl;
				   char ch;
				   cin >> ch;
				   while (ch != 'y'){
					   timer();
					   cout << "please enter the right char." << endl;
					   cin >> ch;
				   }
				   break;
		}
		case 4:{
				   int h;
				   cout << "Which car you Inquire about it." << endl;
				   cin >> h;
				   while (h <= 0 || h > 10){
					   timer();
					   cout << "Not valid please enter a number of another car." << endl;
					   cin >> h;
				   }
				   timer();
				   cout << "enter the number of seat that you want to check whether it's available or not." << endl;
				   int rr;
				   cin >> rr;
				   while (rr > 30 || rr < 1){
					   timer();
					   cout << "Not valid please choose another seat." << endl;
					   cin >> rr;
				   }
				   if (car[h - 1].seat[rr - 1].seatstatus == true){
					   timer();
					   cout << "This seat is available" << endl;
				   }
				   else{
					   timer();
					   cout << "This seat isn't available" << endl;
				   }
				   timer();
				   cout << "if you want to back to the main menue enter y." << endl;
				   char ch;
				   cin >> ch;
				   while (ch != 'y'){
					   timer();
					   cout << "please enter the right char." << endl;
					   cin >> ch;
				   }
				   break;
		}
		case 5:{
				   cout << "Which car you Inquire about it." << endl;
				   int h;
				   cin >> h;
				   while (h <= 0 || h > 10){
					   timer();
					   cout << "Not valid please enter a number of another car." << endl;
					   cin >> h;
				   }
				   timer();
				   cout << "there is a " << car[h - 1].number_of_seats << " available seat\s int this car." << endl;
				   cout << "if you want to back to the main menue enter y." << endl;
				   char ch;
				   cin >> ch;
				   while (ch != 'y'){
					   timer();
					   cout << "please enter the right char." << endl;
					   cin >> ch;
				   }
				   break;
		}
		case 6:{
				   int h;
				   cout << "Which car you Inquire about it." << endl;
				   cin >> h;
				   while (h <= 0 || h > 10){
					   timer();
					   cout << "Not valid please choose another car." << endl;
					   cin >> h;
				   }
				   for (int i = 0; i < 30; i++){
					   if (i < 9)
						   cout << "seat " << i + 1 << "  is  :";
					   else
						   cout << "seat " << i + 1 << " is  :";
					   if (car[h - 1].seat[i].seatstatus == true){
						   cout << "^-^ Available ^-^." << endl;
					   }
					   else
						   cout << "-_- Not available -_-." << endl;
					   timer();
				   }
				   timer();
				   cout << "if you want to back to the main menue enter y." << endl;
				   char ch;
				   cin >> ch;
				   while (ch != 'y'){
					   timer();
					   cout << "please enter the right char." << endl;
					   cin >> ch;
				   }
				   break;
		}
		case 7:{
				   return 0;
		}
		}
		system("CLS");

		cout << "*Operation done* DO you nead any thing else ?" << endl << "_______________________________________________________________________________________________________________________" << endl;
		mainminue();
	}
}
