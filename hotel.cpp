/*WAP to get and display N numbers of Hotels and static information using encapsulation with array of objects member by including below mentioned attributes:
	hotel_id
	hotel_name
 	hotel_type (like hotel or motel)
 	hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
 	hotel_location (city name)
 	hotel_establish_year
 	hotel_staff_quantity
 	hotel_room_quantity*/
 	
	 
#include<iostream>
using namespace std;

class hotel{
	private:
		static int id;
		static char name[20];
		static char type[20];//hotel or motel
		static char rating[20];//1*,2*
		static char location[20];//city
		static int establish_year;
		static int staff_quantity;
		static int room_quantity;
	
	public:
		static void setter();
		static void getter();
	};
		 int hotel:: id=0;
		 char hotel::name[20]="raj";
		 char hotel::type[20]="hotel";//hotel or motel
		 char hotel::rating[20]="star";//1*,2*
		 char hotel::location[20]="surat";//city
		 int hotel::establish_year=2023;
		 int hotel::staff_quantity=20;
		 int hotel::room_quantity=10;
		
		
	void hotel::setter()
		{
			cout<<"enter hotel id: ";
			cin>>id;
			
			cout<<"enter hotel name: ";
			cin>>name;
		
			cout<<"enter hotel type: ";
			cin>>type;
			
			cout<<"enter hotel rating: ";
			cin>>rating;
			
			cout<<"enter hotel location: ";
			cin>>location;
			
			cout<<"enter hotel establish_year:";
			cin>>establish_year;
			
			cout<<"enter hotel staff_quatity: ";
			cin>>staff_quantity;
			
			cout<<"enter room_quantity: ";
			cin>>room_quantity;
			cout<<endl;
		}
	void hotel::getter()
		{
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<type<<endl;
			cout<<rating<<endl;
			cout<<location<<endl;
			cout<<establish_year<<endl;
			cout<<staff_quantity<<endl;
			cout<<room_quantity<<endl;
			cout<<endl;
		}
main(){
	int i;
	int n;
	hotel obj[n];
		cout<<"enter object: ";
		cin>>n;
		for(i=0;i<n;i++)
		{
			obj[i].setter();
	
			obj[i].getter();
		}
}
