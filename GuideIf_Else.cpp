    /*Problem 1b: 
	Write a complete program of tourism guide for three countries
	(each country contains four cites) using nested if-else-if statement.*/
          
#include<stdio.h>
int main()
{
	int num;
	printf("welcome To The Tourism Guide\n");
	printf("For PAKISTAN press 1 :\n");	
    printf("For DUBAI press 2 :\n");
	printf("For TURKEY press 3 :\n");
	scanf("%d",&num);
	
	if(num==1)
{
	

			printf("\n\nwelcome to the PAKISTAN\n");
		
	int n1;
	printf("\nFor Lahore press 1 :\n");
	printf("For Karachi press 2 :\n");
	printf("For Islamabad press 3 :\n");
	printf("For Peshawer press 4 :\n");
	scanf("%d",&n1);

	
	 if(n1==1)						//Nested else if
	{
		
			printf("===================================================");
			printf("\nWelcome to Lahore\n");
			printf("\nFORT ROAD FOOD STREET\n");
			printf("\nTOMB OF JAHANGIR\n");
			printf("\nSHALIMAR GARDENS\n");
			printf("\nBADSHAHI MOSQUE\n Thank You\n");
			printf("===================================================\n");
	}
	else if(n1==2)
	{
	
			printf("===================================================");
			printf("\nWelcome to Karachi\n");
			printf("\nMonuments, mosques, and memorials\n");
			printf("\nBeaches\n");
			printf("\nHistoric and other notable buildings\n");
			printf("Museums\n Thank You\n");
			printf("===================================================");
	}
	else if(n1==3)
	{
		printf("===================================================");
		printf("\nWelcome to Islamabad\n");
		printf("\nAyub National Park\n");
		printf("\nModel villages\n");
		printf("\nMuseums and art galleries\n");
		printf("Rock climbing\n Thank You\n");
		printf("===================================================");
	}
	else if(n1==4)
	{
			printf("===================================================");
			printf("\nWelcome to Peshawer\n");
			printf("\nSethi House\n");
			printf("\nChowk Yadgar\n");
			printf("\nPeshawar Museum\n");
			printf("\nMahabat Khan Masjid\n Thank You\n");
			printf("===================================================");
	}
		else
		{
		
			printf("soory you Entered Invalid key");
		}
}
	
	if(num==2)								//nested
{
	int n1;

			printf("\n\nwelcome to the DUBAI\n");
	
	printf("\nFor Abu Dhabi press 1 :\n");
	printf("For Sharjah press 2 :\n");
	printf("For Fujairah press 3 :\n");
	printf("For Umm Al Quwain press 4 :\n");
	scanf("%d",&n1);
		
	 if (n1==1)							
	{
	
			printf("===================================================");
			printf("\n\nWelcome to Abu Dhabi\n");
			printf("\nAbu Dhabi city tours\n");
			printf("\nEmirate water adventures\n");
			printf("\nSheikh Zayed Grand Mosque\n");
			printf("\nArabian desert safaris\n Thank You\n");
			printf("===================================================");
	}
	else if (n1==2)
	{
	
			printf("===================================================");
			printf("\nWelcome to Sharjah\n");
			printf("\nKhorfakkan\n");
			printf("\nAl Qasba \n");
			printf("\nSharjah Desert Park\n");
			printf(" Sharjah Aquarium \n Thank You\n");
			printf("===================================================");
		}
	else if (n1==3)
	{
			printf("===================================================");
			printf("\nWelcome to Fujairah\n");
			printf("\nBeach Time & Diving in Al Aqah\n");
			printf("\nVisit Al-Bidyah Mosque\n");
			printf("\nRoad-Trip to the Hajar Mountains\n");
			printf(" Explore the Hajar Mountain Wadis\n Thank You\n");
			printf("===================================================");
	}
		else if (n1==4)
	{
			printf("===================================================");
			printf("\nWelcome to Umm Al Quwain\n");
			printf("\n UAQ National Museum\n");
			printf("\n Dreamland Aqua Park \n");
			printf("\nAl Sinniyah Island\n");
			printf("Soak Up the Sun on Ajman's Beaches\n Thank You\n");
			printf("===================================================");
	}
		else{
		
			printf("soory you Entered Invalid key");
		}
	}

		
	if(num==3)
	{
	int n1;
			printf("\n\nwelcome to the TURKEY\n");
	
	printf("\nFor Istanbul press 1 :\n");
	printf("For Izmir press 2 :\n");
	printf("For Antalya press 3 :\n");
	printf("For Ankara press 4 :\n");
	scanf("%d",&n1);
		
	if(n1==1) 								
	{
			printf("===================================================");
			printf("\n\nWelcome to Istanbul\n");
			printf("\n Admire the Hagia Sophia (Aya Sofya) Mosque\n");
			printf("\n Explore Topkapi Palace\n");
			printf("\nVisit the Blue Mosque (Sultan Ahmet Cami)\n");
			printf("Stroll the Hippodrome\n Thank You\n");
			printf("===================================================");
	}
	else if(n1==2) 								
	{
			printf("===================================================");
			printf("\nWelcome to Izmir\n");
			printf("\nPergamon Acropolis\n");
			printf("\n Izmir Wildlife Park \n");
			printf("\nKemeralti Market \n");
			printf("Izmir Agora\n Thank You\n");
			printf("===================================================");
	}
	else if(n1==3) 								
	{
			printf("===================================================");
			printf("\nWelcome to Antalya\n");
			printf("\nAntalya's Old Town\n");
			printf("\n Kursunlu Waterfalls \n");
			printf("\nAntalya Muzesi\n");
			printf(". Relax on Konyaalti Beach\n Thank You\n");
			printf("===================================================");
	}
	else if(n1==4) 							
	{
			printf("===================================================");
			printf("\nWelcome to Ankara\n");
			printf("\n Anitkabir\n");
			printf("\nUlucanlar Prison Museum\n");
			printf("\nAnadolu Medeniyetleri Muzesi\n");
			printf("MTA Sehit Cuma Dag Natural\n Thank You\n");
			printf("===================================================");
	}
	else
	{
			printf("soory you Entered Invalid key");
	}
}

else 
{
	printf("soory you Entered Invalid key");
	}	

	return 0;
}
