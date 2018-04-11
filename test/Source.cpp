#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

	
struct Avto
{
	struct make
	{
		char *mark;
		char *nameofc;
		int year;
	}make;

	struct dvig
	{
		char *type;
		int size;
		int power;
	}dvig;
	struct corpse
	{
		char* type;
		char* colour;
	}corpse;
	struct wheel
	{
		int rad;
		int w;
		int prof;
	}wheel;
	struct cp
	{
		char* typ;
		int ammount;
	}cp;
};

int Menu()
{
	int choice = 0;
	cout << "Welcome to our carshop!" << endl;
	cout << "Pick option" << endl;
	cout << "1. Watch all cars in list" << endl;
	cout << "2. Add car in list" << endl;
	cin >> choice;
	return choice;
}

int CarsWatch(Avto* allcar, int countcars)
{
	int choice = 0;
	cout << "Pick a car you would like to watch detale" << endl;
	for (int i = 0; i < countcars; i++)
	{
		cout << allcar[i].make.mark << endl;
	}
	cin >> choice;
	return choice;
}


void main()
{
	int countcars = 2;
	int choice = 0;
	Avto* allcar = new Avto[15];
	Avto* allnameofc = new Avto[15];
	Avto* years = new Avto[15];
	allcar[0].make.mark = "Audi";
	allnameofc[0].make.nameofc = "A8";
	years[0].make.year = 1999;
	Avto* alldv = new Avto[15];
	Avto* allsize = new Avto[15];
	Avto* allpower = new Avto[15];
	alldv[0].dvig.type = "Turbodizel";
	allsize[0].dvig.size = 2200;
	allpower[0].dvig.power = 220;
	Avto* allcorpse = new Avto[15];
	Avto* allcolours = new Avto[15];
	allcorpse[0].corpse.type = "Sedan";
	allcolours[0].corpse.colour = "Red";
	Avto* allwheels = new Avto[15];
	Avto* allw = new Avto[15];
	Avto* allprof = new Avto[15];
	allwheels[0].wheel.rad = 10;
	allw[0].wheel.w = 8;
	allprof[0].wheel.prof = 7;
	Avto* allcptyp = new Avto[15];
	Avto* allammounts = new Avto[15];
	allcptyp[0].cp.typ = "Avtomat";
	allammounts[0].cp.ammount = 5;
	


	allcar[1].make.mark = "Huindai";
	allnameofc[1].make.nameofc = "Elantra";
	years[1].make.year = 2008;
	alldv[1].dvig.type = "Benzin";
	allsize[1].dvig.size = 2100;
	allpower[1].dvig.power = 220;
	allcorpse[1].corpse.type = "Universal";
	allcolours[1].corpse.colour = "White";
	allwheels[1].wheel.rad = 10;
	allw[1].wheel.w = 8;
	allprof[1].wheel.prof = 7;
	allcptyp[1].cp.typ = "Avtomat";
	allammounts[1].cp.ammount = 5;



	HOME:
	choice = Menu();
	if (choice == 1)
	{
		choice = CarsWatch(allcar, countcars);
		if (choice == 1)
		{
			cout << "Name of creator: " << allcar[0].make.mark << endl;
			cout << "Mark: " << allnameofc[0].make.nameofc << endl;
			cout << "Date of cr." << years[0].make.year << endl;
			cout << "Type of dvig: " << alldv[0].dvig.type << endl;
			cout << "Size of dvig: " << allsize[0].dvig.size << endl;
			cout << "Power of dvig: " << allpower[0].dvig.power << endl;
			cout << "Type of corpse: " << allcorpse[0].corpse.type << endl;
			cout << "Colour of corpse: " << allcolours[0].corpse.colour << endl;
			cout << "Radius of wheels: " << allwheels[0].wheel.rad << endl;
			cout << "W of wheels: " << allw[0].wheel.w << endl;
			cout << "Profile of wheel: " << allprof[0].wheel.prof << endl;
			goto HOME;
		}
		if (choice == 2)
		{
			cout << "Name of creator: " << allcar[1].make.mark << endl;
			cout << "Mark: " << allnameofc[1].make.nameofc << endl;
			cout << "Date of cr.: " << years[1].make.year << endl;
			cout << "Type of dvig: " << alldv[1].dvig.type << endl;
			cout << "Size of dvig: " << allsize[1].dvig.size << endl;
			cout << "Power of dvig: " << allpower[1].dvig.power << endl;
			cout << "Type of corpse: " << allcorpse[1].corpse.type << endl;
			cout << "Colour of corpse: " << allcolours[1].corpse.colour << endl;
			cout << "Radius of wheels: " << allwheels[1].wheel.rad << endl;
			cout << "W of wheels: " << allw[1].wheel.w << endl;
			cout << "Profile of wheel: " << allprof[1].wheel.prof << endl;
			goto HOME;
		}

	}
	else if (choice == 2)
	{
		allcar[countcars].make.mark = new char[32];
		allnameofc[countcars].make.nameofc = new char[32];

		cout << "Add car option" << endl;
		cout << "Name of creator: ";
		cin >> allcar[countcars].make.mark;
		cout << "Mark: ";
		cin >> allnameofc[countcars].make.nameofc;
		cout << "Date of cr.: ";
		cin >> years[countcars].make.year;
		cout << "Type of dvig: ";
		cin >> alldv[countcars].dvig.type;
		cout << "Size of dvig: ";
		cin >> allsize[countcars].dvig.size;
		cout << "Power of dvig: ";
		cin >> allpower[countcars].dvig.power;
		cout << "Type of corpse: ";
		cin >> allcorpse[countcars].corpse.type;
		cout << "Colour of corpse: "; 
		cin >> allcolours[countcars].corpse.colour;
		cout << "Radius of wheels: ";
		cin	>> allwheels[countcars].wheel.rad;
		cout << "W of wheels: ";
		cin >> allw[countcars].wheel.w;
		cout << "Profile of wheel: ";
		cin >> allprof[countcars].wheel.prof;
		countcars++;
		goto HOME;
	}

	_getch();
	

	

	
}