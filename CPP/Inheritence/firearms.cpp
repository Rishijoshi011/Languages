#include<iostream>

    using namespace std;

    class firearms
{
  	int rounds;
  	int magazine;
  	
  	public:
  		void get()
  	{
  		cout << "Enter rounds" << endl;
		cin >> rounds;
		cout << "Enter magazine" << endl;
		cin >> magazine;	
	}
		void print()
	{
		cout << "Rounds : " << rounds << "\nMagazine : " << magazine << "\n" << endl;
	}
};
	
	class primary_weapon : protected firearms
{
	string choice_of_bullets;	
	int choice;
	
	public:
		void choice_()
	{
		cout << "Enter 1 for 5.56x45mm NATO(.223 Remington)" << endl;
		cout << "Enter 2 for 9mm" <<endl;
		cout << "Enter 3 for .30 Carbine (7.62x33mm)\n" << endl;
		cout << "Chose one in given options for primary weapon" << endl;
		cin >> choice;
		 switch(choice)
		{
			case 1 : choice_of_bullets = "5.56x45mm NATO(.223 Remington)"; break;			
			case 2 : choice_of_bullets = "9mm"; break;
			case 3 : choice_of_bullets = "12 Gauge"; break;
			default : cout << "Invalid choice" << endl;
		}
	}
		void print()
	{
		cout << "Your chosen type of bullets for primary weapon : " << choice_of_bullets << endl;	
	}			
};

	class secondary_weapon : protected firearms
{
	string choice_of_bullets;
	int choice;
	
	public:
		void choice_()
	{
		cout << "Enter 1 for Roundnose Lead" << endl;
		cout << "Enter 2 for Full Metal Jacket" << endl;
		cout << "Enter 3 for Semi-Wad Cutter" <<endl;
		cout << "Enter 4 for Hollowpoint" << endl;
		cout << "Enter 5 for Wad Cutter\n" << endl;
		cout << "Chose one in given options for secondary weapon" << endl;
		cin >> choice;
		 switch(choice)
		{
			case 1 : choice_of_bullets = "Roundnose lead"; break;
			case 2 : choice_of_bullets = "Full Metal Jacket"; break;			
			case 3 : choice_of_bullets = "Semi-wad Cutter"; break;
			case 4 : choice_of_bullets = "Hollowpoint"; break;
			case 5 : choice_of_bullets = "Wad Cutter"; break;
			default : cout << "Invalid choice" << endl;
		}
	}
		void print()
	{
		cout << "Your chosen type of bullets for secondary weapon: " << choice_of_bullets << endl;	
	}	
};
	
	class assualt_rifles : protected primary_weapon
{
	string choice_of_ar;
	int choice;
	
	public:
		void choice_()
	{
		cout << "Enter 1 for HK 33" << endl;
		cout << "Enter 2 for HK 416" << endl;
		cout << "Enter 3 for MK 556" <<endl;
		cout << "Enter 4 for M4 Carbine" << endl;
		cout << "Enter 5 for Remington ACR" << endl;
		cout << "Enter 6 for Steyr AUG\n" << endl;
		cout << "Chose one in given options" << endl;
		cin >> choice;
		 switch(choice)
		{
			case 1 : choice_of_ar = "HK 33"; break;
			case 2 : choice_of_ar = "HK 416"; break;			
			case 3 : choice_of_ar = "MK 556"; break;
			case 4 : choice_of_ar = "M4 Carbine"; break;
			case 5 : choice_of_ar = "Remington ACR"; break;
			case 6 : choice_of_ar = "Steyr AUG"; break;
			default : cout << "Invalid choice" << endl;
		}
		firearms::get();
	}
		void print()
	{
		firearms::print();
		cout << "Your chosen Assult Rifle : " << choice_of_ar << endl;
	}
};	
	class sub_machine_guns : protected primary_weapon
{
	string choice_of_smg;
	int choice;

	public:
		void choice_()
	{
		cout << "Enter 1 for Colt 9mm SMG" << endl;
		cout << "Enter 2 for JS 9mm" << endl;
		cout << "Enter 3 for KRISS Vector " <<endl;
		cout << "Enter 4 for HK MP5" << endl;
		cout << "Enter 5 for HK UMP" << endl;
		cout << "Enter 6 for UZI \n" << endl;
		cout << "Chose one in given options" << endl;
		cin >> choice;
		 switch(choice)
		{
			case 1 : choice_of_smg = "Colt 9mm SMG"; break;
			case 2 : choice_of_smg = "JS 9mm"; break;			
			case 3 : choice_of_smg = "KRISS Vector"; break;
			case 4 : choice_of_smg = "HK MP5"; break;
			case 5 : choice_of_smg = "HK UMP"; break;
			case 6 : choice_of_smg = "UZI"; break;
			default : cout << "Invalid choice" << endl;
		}
		firearms::get();
	}
		void print()
	{
		firearms::print();
		cout << "Your chosen Sub Machine Gun : " << choice_of_smg << endl;
	}
};
	
	class shotgun : protected primary_weapon
{
	string choice_of_sg;
	int choice;	
	
	public:
		void choice_()
	{
		cout << "Enter 1 for Beneli M3" << endl;
		cout << "Enter 2 for Beneli M1014" << endl;
		cout << "Enter 3 for Beneli supernova" <<endl;
		cout << "Enter 4 for Mossberg 590\n" << endl;;
		cout << "Chose one in given options" << endl;
		cin >> choice;
		 switch(choice)
		{
			case 1 : choice_of_sg = "Beneli M3"; break;
			case 2 : choice_of_sg = "Beneli M1014"; break;			
			case 3 : choice_of_sg = "Beneli supernova"; break;
			case 4 : choice_of_sg = "Mossbeg 590"; break;
			default : cout << "Invalid choice" << endl;
		}
		firearms::get();
	}
		void print()
	{
		firearms::print();
		cout << "Your chosen Sub Shotgun : " << choice_of_sg << endl;
	}
};
  	int main()
{
	system("COLOR 0B");
	int choice;
	primary_weapon p;
	secondary_weapon s;
	assualt_rifles ar;
	sub_machine_guns smg;
	shotgun sg;
	cout << "Enter 1 for AR" << endl;
	cout << "Enter 2 for SMG" << endl;
	cout << "Enter 3 for SG" << endl;
	cin >> choice;
	 switch(choice)
	{
		case 1 : p.choice_(); 
				 p.print();
				 ar.choice_();
				 ar.print();				 
				 break;
		case 2 : p.choice_();
				 p.print();
				 smg.choice_();
				 smg.print();
				 break;
		case 3 : p.choice_();
				 p.print();
				 sg.choice_();
				 sg.print();
		default : cout << "Invalid choice" << endl;
	}	
}