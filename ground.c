#include<stdio.h>
#include<string.h>

//testing





struct time
{
	int h,m;
}tempT;

struct date
{
	int d,m,y;
	struct time time[2];
}tempD,tDate[10],tempDate[10];

struct sports
{
	char name[50];
	struct date dt[10];
	struct date s_d[1];
	float rate;
	struct time time[2];
	int noDates_aval;
}tempS;

struct grounds{

	char gName[100];
	char city[50];
	char state[50];
	struct sports S[10];
	int noOfSports;
	//char games[10][30];
	//char date_time[10];
	//char time[10][5];
	//struct date D[1];
	//char rate[10];
	//char sport[50];
}temp,G[100],req[100];


struct ground
{
	char name[50];
};

int total=6,size=100,c=0;
int main()
{
	int i,j,n,hour,min,input;
	char city[10],sport[50],ground[50],state[50];
	strcpy(G[0].gName,"rajiv");
	strcpy(G[0].city,"hyderabad");
	strcpy(G[0].state,"rajasthan");
	strcpy(G[0].S[0].name,"cricket");
	strcpy(G[0].S[1].name,"football");
	strcpy(G[0].S[2].name,"hockey");
	G[0].noOfSports=3;
	G[0].S[0].dt[0].d=22;
	G[0].S[0].dt[0].m=10;
	G[0].S[0].dt[0].y=2018;
	G[0].S[0].dt[0].time[0].h=11;
	G[0].S[0].dt[0].time[0].m=00;
	G[0].S[0].dt[0].time[1].h=16;
	G[0].S[0].dt[0].time[1].m=00;


	G[0].S[0].dt[1].d=23;
	G[0].S[0].dt[1].m=10;
	G[0].S[0].dt[1].y=2018;
	G[0].S[0].dt[1].time[0].h=10;
	G[0].S[0].dt[1].time[0].m=00;
	G[0].S[0].dt[1].time[1].h=12;
	G[0].S[0].dt[1].time[1].m=00;


	G[0].S[0].dt[2].d=27;
	G[0].S[0].dt[2].m=10;
	G[0].S[0].dt[2].y=2018;
	G[0].S[0].dt[2].time[0].h=10;
	G[0].S[0].dt[2].time[0].m=00;
	G[0].S[0].dt[2].time[1].h=11;
	G[0].S[0].dt[2].time[1].m=00;
	G[0].S[0].noDates_aval=3;

	G[0].S[1].dt[0].d=22;
	G[0].S[1].dt[0].m=10;
	G[0].S[1].dt[0].y=2018;
	G[0].S[1].dt[0].time[0].h=14;
	G[0].S[1].dt[0].time[0].m=00;
	G[0].S[1].dt[0].time[1].h=16;
	G[0].S[1].dt[0].time[1].m=00;


	G[0].S[1].dt[1].d=24;
	G[0].S[1].dt[1].m=10;
	G[0].S[1].dt[1].y=2018;
	G[0].S[1].dt[1].time[0].h=15;
	G[0].S[1].dt[1].time[0].m=00;
	G[0].S[1].dt[1].time[1].h=18;
	G[0].S[1].dt[1].time[1].m=00;
	G[0].S[1].noDates_aval=2;

	G[0].S[2].dt[0].d=24;
	G[0].S[2].dt[0].m=10;
	G[0].S[2].dt[0].y=2018;
	G[0].S[2].dt[0].time[0].h=13;
	G[0].S[2].dt[0].time[0].m=00;
	G[0].S[2].dt[0].time[1].h=16;
	G[0].S[2].dt[0].time[1].m=00;


	G[0].S[2].dt[1].d=29;
	G[0].S[2].dt[1].m=10;
	G[0].S[2].dt[1].y=2018;
	G[0].S[2].dt[1].time[0].h=18;
	G[0].S[2].dt[1].time[0].m=00;
	G[0].S[2].dt[1].time[1].h=20;
	G[0].S[2].dt[1].time[1].m=00;
	G[0].S[2].noDates_aval=2;


	G[0].S[0].s_d[0].d=23;
	G[0].S[0].s_d[0].m=10;
	G[0].S[0].s_d[0].y=2018;
	G[0].S[1].s_d[0].d=29;
	G[0].S[1].s_d[0].m=10;
	G[0].S[1].s_d[0].y=2018;
	G[0].S[2].s_d[0].d=23;
	G[0].S[2].s_d[0].m=10;
	G[0].S[2].s_d[0].y=2018;


	G[0].S[0].rate=200;
	G[0].S[1].rate=150;
	G[0].S[2].rate=180;


	strcpy(G[1].gName,"sms");
	strcpy(G[1].city,"nagpur");
	strcpy(G[1].state,"maharashtra");
	strcpy(G[1].S[0].name,"cricket");
	strcpy(G[1].S[1].name,"swimming");
	G[1].noOfSports=2;
	G[1].S[0].dt[0].d=22;
	G[1].S[0].dt[0].m=10;
	G[1].S[0].dt[0].y=2018;
	G[1].S[0].dt[0].time[0].h=13;
	G[1].S[0].dt[0].time[0].m=00;
	G[1].S[0].dt[0].time[1].h=17;
	G[1].S[0].dt[0].time[1].m=00;

	G[1].S[0].dt[1].d=29;
	G[1].S[0].dt[1].m=10;
	G[1].S[0].dt[1].y=2018;
	G[1].S[0].dt[1].time[0].h=18;
	G[1].S[0].dt[1].time[0].m=00;
	G[1].S[0].dt[1].time[1].h=20;
	G[1].S[0].dt[1].time[1].m=00;
	G[1].S[0].noDates_aval=2;

	G[1].S[1].dt[0].d=21;
	G[1].S[1].dt[0].m=10;
	G[1].S[1].dt[0].y=2018;
	G[1].S[1].dt[0].time[0].h=10;
	G[1].S[1].dt[0].time[0].m=00;
	G[1].S[1].dt[0].time[1].h=15;
	G[1].S[1].dt[0].time[1].m=00;



	G[1].S[1].dt[1].d=30;
	G[1].S[1].dt[1].m=10;
	G[1].S[1].dt[1].y=2018;
	G[1].S[1].dt[1].time[0].h=11;
	G[1].S[1].dt[1].time[0].m=00;
	G[1].S[1].dt[1].time[1].h=14;
	G[1].S[1].dt[1].time[1].m=00;
	G[1].S[1].noDates_aval=2;


	G[1].S[0].s_d[0].d=23;
	G[1].S[0].s_d[0].m=10;
	G[1].S[0].s_d[0].y=2018;
	G[1].S[1].s_d[0].d=26;
	G[1].S[1].s_d[0].m=10;
	G[1].S[1].s_d[0].y=2018;


	G[1].S[0].rate=250;
	G[1].S[1].rate=100;


	strcpy(G[2].gName,"jntu");
	strcpy(G[2].city,"hyderabad");
	strcpy(G[2].state,"telangana");
	strcpy(G[2].S[0].name,"swimming");
	G[2].noOfSports=1;
	G[2].S[0].dt[0].d=15;
	G[2].S[0].dt[0].m=10;
	G[2].S[0].dt[0].y=2018;
	G[2].S[0].dt[0].time[0].h=10;
	G[2].S[0].dt[0].time[0].m=00;
	G[2].S[0].dt[0].time[1].h=15;
	G[2].S[0].dt[0].time[1].m=00;

	G[2].S[0].dt[1].d=25;
	G[2].S[0].dt[1].m=10;
	G[2].S[0].dt[1].y=2018;
	G[2].S[0].dt[1].time[0].h=07;
	G[2].S[0].dt[1].time[0].m=00;
	G[2].S[0].dt[1].time[1].h=10;
	G[2].S[0].dt[1].time[1].m=00;
	G[2].S[0].noDates_aval=2;

	G[2].S[0].s_d[0].d=23;
	G[2].S[0].s_d[0].m=10;
	G[2].S[0].s_d[0].y=2018;


	G[2].S[0].rate=100;



	strcpy(G[3].gName,"kcr");
	strcpy(G[3].city,"hyderabad");
	strcpy(G[3].state,"telangana");
	strcpy(G[3].S[0].name,"cricket");
	strcpy(G[3].S[1].name,"swimming");
	G[3].noOfSports=2;
	G[3].S[0].dt[0].d=22;
	G[3].S[0].dt[0].m=10;
	G[3].S[0].dt[0].y=2018;
	G[3].S[0].dt[0].time[0].h=10;
	G[3].S[0].dt[0].time[0].m=00;
	G[3].S[0].dt[0].time[1].h=16;
	G[3].S[0].dt[0].time[1].m=00;


	G[3].S[0].dt[1].d=31;
	G[3].S[0].dt[1].m=10;
	G[3].S[0].dt[1].y=2018;
	G[3].S[0].dt[1].time[0].h=13;
	G[3].S[0].dt[1].time[0].m=00;
	G[3].S[0].dt[1].time[1].h=18;
	G[3].S[0].dt[1].time[1].m=00;
	G[3].S[0].noDates_aval=2;


	G[3].S[1].dt[0].d=21;
	G[3].S[1].dt[0].m=10;
	G[3].S[1].dt[0].y=2018;
	G[3].S[1].dt[0].time[0].h=11;
	G[3].S[1].dt[0].time[0].m=00;
	G[3].S[1].dt[0].time[1].h=15;
	G[3].S[1].dt[0].time[1].m=00;



	G[3].S[1].dt[1].d=23;
	G[3].S[1].dt[1].m=10;
	G[3].S[1].dt[1].y=2018;
	G[3].S[1].dt[1].time[0].h=07;
	G[3].S[1].dt[1].time[0].m=00;
	G[3].S[1].dt[1].time[1].h=12;
	G[3].S[1].dt[1].time[1].m=00;
	G[3].S[1].noDates_aval=2;

	G[3].S[0].s_d[0].d=22;
	G[3].S[0].s_d[0].m=10;
	G[3].S[0].s_d[0].y=2018;
	G[3].S[1].s_d[0].d=03;
	G[3].S[1].s_d[0].m=10;
	G[3].S[1].s_d[0].y=2018;


	G[3].S[0].rate=200;
	G[3].S[1].rate=50;



	strcpy(G[4].gName,"gandhi");
	strcpy(G[4].city,"delhi");
	strcpy(G[4].state,"new_delhi");
	strcpy(G[4].S[0].name,"cricket");
	strcpy(G[4].S[1].name,"football");
	strcpy(G[4].S[2].name,"handball");
	G[4].noOfSports=3;
	G[4].S[0].dt[0].d=22;
	G[4].S[0].dt[0].m=10;
	G[4].S[0].dt[0].y=2018;
	G[4].S[0].dt[0].time[0].h=10;
	G[4].S[0].dt[0].time[0].m=00;
	G[4].S[0].dt[0].time[1].h=14;
	G[4].S[0].dt[0].time[1].m=00;

	G[4].S[0].dt[1].d=28;
	G[4].S[0].dt[1].m=10;
	G[4].S[0].dt[1].y=2018;
	G[4].S[0].dt[1].time[0].h=11;
	G[4].S[0].dt[1].time[0].m=00;
	G[4].S[0].dt[1].time[1].h=12;
	G[4].S[0].dt[1].time[1].m=00;
	G[4].S[0].noDates_aval=2;

	G[4].S[1].dt[0].d=21;
	G[4].S[1].dt[0].m=10;
	G[4].S[1].dt[0].y=2018;
	G[4].S[1].dt[0].time[0].h=15;
	G[4].S[1].dt[0].time[0].m=00;
	G[4].S[1].dt[0].time[1].h=16;
	G[4].S[1].dt[0].time[1].m=00;


	G[4].S[1].dt[1].d=28;
	G[4].S[1].dt[1].m=10;
	G[4].S[1].dt[1].y=2018;
	G[4].S[1].dt[1].time[0].h=11;
	G[4].S[1].dt[1].time[0].m=00;
	G[4].S[1].dt[1].time[1].h=13;
	G[4].S[1].dt[1].time[1].m=00;


	G[4].S[1].dt[2].d=27;
	G[4].S[1].dt[2].m=10;
	G[4].S[1].dt[2].y=2018;
	G[4].S[1].dt[2].time[0].h=16;
	G[4].S[1].dt[2].time[0].m=00;
	G[4].S[1].dt[2].time[1].h=19;
	G[4].S[1].dt[2].time[1].m=00;
	G[4].S[1].noDates_aval=3;

	G[4].S[2].dt[0].d=28;
	G[4].S[2].dt[0].m=10;
	G[4].S[2].dt[0].y=2018;
	G[4].S[2].dt[0].time[0].h=11;
	G[4].S[2].dt[0].time[0].m=00;
	G[4].S[2].dt[0].time[1].h=15;
	G[4].S[2].dt[0].time[1].m=00;


	G[4].S[2].dt[1].d=29;
	G[4].S[2].dt[1].m=10;
	G[4].S[2].dt[1].y=2018;
	G[4].S[2].dt[1].time[0].h=06;
	G[4].S[2].dt[1].time[0].m=00;
	G[4].S[2].dt[1].time[1].h=07;
	G[4].S[2].dt[1].time[1].m=00;
	G[4].S[2].noDates_aval=2;


	G[4].S[0].s_d[0].d=22;
	G[4].S[0].s_d[0].m=10;
	G[4].S[0].s_d[0].y=2018;
	G[4].S[1].s_d[0].d=01;
	G[4].S[1].s_d[0].m=11;
	G[4].S[1].s_d[0].y=2018;
	G[4].S[2].s_d[0].d=23;
	G[4].S[2].s_d[0].m=10;
	G[4].S[2].s_d[0].y=2018;


	G[4].S[0].rate=150;
	G[4].S[1].rate=180;
	G[4].S[2].rate=50;



	strcpy(G[5].gName,"rajiv_gandhi");
	strcpy(G[5].city,"indore");
	strcpy(G[5].state,"maharashtra");
	strcpy(G[5].S[0].name,"tennis");
	strcpy(G[5].S[1].name,"football");
	G[5].noOfSports=2;
	G[5].S[0].dt[0].d=29;
	G[5].S[0].dt[0].m=10;
	G[5].S[0].dt[0].y=2018;
	G[5].S[0].dt[0].time[0].h=19;
	G[5].S[0].dt[0].time[0].m=00;
	G[5].S[0].dt[0].time[1].h=22;
	G[5].S[0].dt[0].time[1].m=00;


	G[5].S[0].dt[1].d=31;
	G[5].S[0].dt[1].m=10;
	G[5].S[0].dt[1].y=2018;
	G[5].S[0].dt[1].time[0].h=13;
	G[5].S[0].dt[1].time[0].m=00;
	G[5].S[0].dt[1].time[1].h=15;
	G[5].S[0].dt[1].time[1].m=00;
	G[5].S[0].noDates_aval=2;

	G[5].S[1].dt[0].d=22;
	G[5].S[1].dt[0].m=10;
	G[5].S[1].dt[0].y=2018;
	G[5].S[1].dt[0].time[0].h=19;
	G[5].S[1].dt[0].time[0].m=00;
	G[5].S[1].dt[0].time[1].h=23;
	G[5].S[1].dt[0].time[1].m=00;


	G[5].S[1].dt[1].d=23;
	G[5].S[1].dt[1].m=10;
	G[5].S[1].dt[1].y=2018;
	G[5].S[1].dt[1].time[0].h=10;
	G[5].S[1].dt[1].time[0].m=00;
	G[5].S[1].dt[1].time[1].h=14;
	G[5].S[1].dt[1].time[1].m=00;
	G[5].S[1].noDates_aval=2;

	G[5].S[0].s_d[0].d=20;
	G[5].S[0].s_d[0].m=10;
	G[5].S[0].s_d[0].y=2018;
	G[5].S[1].s_d[0].d=28;
	G[5].S[1].s_d[0].m=10;
	G[5].S[1].s_d[0].y=2018;


	G[5].S[0].rate=50;
	G[5].S[1].rate=150;
	for(i=6;i<100;i++)	
	strcpy(G[i].gName,"null");
	
	struct ground Ground[10];
	struct ground games[10];
					
	//Below statements are for asking user for particular function call
	printf("1.getGroundInfo()\n");
	printf("2.addSport()\n");
	printf("3.deleteSport()\n");
	printf("4.addGround()\n");
	printf("5.deleteGround()\n");
	printf("6.updateGround()\n");
	printf("7.getFixturesinCity()\n");
	printf("8.getFixturesinState()\n");
	printf("9.getFixturesSortedonDate()\n");
	printf("10.getFixturesSortedonState()\n");
	printf("11.isAvailable()\n");
	printf("12.UniqueSport()\n");
	printf("13.SportwithGround()\n");
	printf("14.FindLocationsForGameEvents()\n");
	printf("15.FindLocationsForGame()\n");
	printf("16.FindLocationsForGameInTimeRange()\n");
	printf("17.ClashOfMatches()\n");
	printf("18.GiveListOfGroundsHavingMinOneMatch()\n");
	printf("19.GiveListOfGroundsHavingAtLeastKMatches()\n");
	printf("20.SortOnPriceForAGame()\n");
	printf("21.FindGamesSchedule()\n");
	printf("Enter the no. to run respective function:\n");
	scanf("%d",&input);
	
	initialSort(G,total);
	switch(input)
	{
		case 1:	printf("Enter City: ");
			scanf("%s",&city);
			getGroundInfo(city);
			break;
			
		case 2: printf("Enter ground Name, city, sport: ");
			scanf("%s%s%s",&ground,&city,&sport);
			addSport(ground,city,sport);
			break;
			
		case 3:	printf("Enter ground Name, city, sport: ");
			scanf("%s%s%s",&ground,&city,&sport);
			deleteSport(ground,city,sport);
			break;
			
		case 4: printf("Enter Ground Name: \n");
			scanf("%s",temp.gName);
			printf("Enter City Name: \n");
			scanf("%s",temp.city);
			printf("Enter State Name: \n");
			scanf("%s",temp.state);
			printf("Enter No. of Sports: \n");
			scanf("%d",&temp.noOfSports);
			for(i=0;i<temp.noOfSports;i++)
			{
				printf("Enter details for %dth sport: \n",i+1);
				printf("Enter %d_Sport: \n",i+1);
				scanf("%s",temp.S[i].name);
				printf("Enter rate per hour: \n");
				scanf("%f",&temp.S[i].rate);
				printf("Enter No. of Available dates: \n");
				scanf("%d",&temp.S[i].noDates_aval);
				printf("Enter date, start time and end time (time in hour and min format): ");
				for(j=0;j<temp.S[i].noDates_aval;j++)
		scanf("%d%d%d%d%d%d%d",&temp.S[i].dt[j].d,&temp.S[i].dt[j].m,&temp.S[i].dt[j].y,&temp.S[i].dt[j].time[0].h,&temp.S[i].dt[j].time[0].m,&temp.S[i].dt[j].time[1].h,&temp.S[i].dt[j].time[1].m);
				printf("Enter scheduled date: \n");
				scanf("%d%d%d",&temp.S[i].s_d[0].d,&temp.S[i].s_d[0].m,&temp.S[i].s_d[0].y);
			}
			addGround();
			break;
			
		case 5: printf("Enter ground name, city: ");
			scanf("%s%s",&ground,&city);
			deleteGround(ground,city);
			break;
			//sort();			
			//deleteGround("sms","nag1pur");
			
		case 6:	printf("Enter Ground Name: \n");
			scanf("%s",temp.gName);
			printf("Enter City Name: \n");
			scanf("%s",temp.city);
			printf("Enter State Name: \n");
			scanf("%s",temp.state);
			printf("Enter No. of Sports: \n");
			scanf("%d",&temp.noOfSports);
			for(i=0;i<temp.noOfSports;i++)
			{
				printf("Enter details for %dth sport: \n",i+1);
				printf("Enter %d_Sport: \n",i+1);
				scanf("%s",temp.S[i].name);
				printf("Enter rate per hour: \n");
				scanf("%f",&temp.S[i].rate);
				printf("Enter No. of Available dates: \n");
				scanf("%d",&temp.S[i].noDates_aval);
				printf("Enter date, start time and end time (time in hour and min format): ");
				for(j=0;j<temp.S[i].noDates_aval;j++)
		scanf("%d%d%d%d%d%d%d",&temp.S[i].dt[j].d,&temp.S[i].dt[j].m,&temp.S[i].dt[j].y,&temp.S[i].dt[j].time[0].h,&temp.S[i].dt[j].time[0].m,&temp.S[i].dt[j].time[1].h,&temp.S[i].dt[j].time[1].m);
				printf("Enter scheduled date: \n");
				scanf("%d%d%d",&temp.S[i].s_d[0].d,&temp.S[i].s_d[0].m,&temp.S[i].s_d[0].y);
			}
			updateGround();
			break;
		
		case 7:	printf("Enter City, start date and end date\n");
			scanf("%s%d%d%d%d%d%d",city,&tDate[0].d,&tDate[0].m,&tDate[0].y,&tDate[1].d,&tDate[1].m,&tDate[1].y);
			getFixturesinCity(city);
			break;
			
		case 8:	printf("Enter state\n");
			scanf("%s",&state);
			getFixturesinState(state);
			break;

		case 9:	getFixturesSortedOnDate();
			break;
		
		case 10:getFixturesSortedonState(G,state);
			break;
			
		case 11:printf("Enter Sport, date and particular time\n");
			scanf("%s%d%d%d%d%d",sport,&tempD.d,&tempD.m,&tempD.y,&tempD.time[0].h,&tempD.time[0].m);
			isAvailable(sport);
			break;
			
		case 12:printf("Enter ground name and city\n");
			scanf("%s%s",&ground,&city);
			UniqueSport(ground,city);
			break;

		case 13:printf("Enter sport\n");
			scanf("%s",&sport);
			sportWithGround(sport);
			break;
		
		case 14:printf("Enter Sport, start date and end date\n");
			scanf("%s%d%d%d%d%d%d",sport,&tDate[0].d,&tDate[0].m,&tDate[0].y,&tDate[1].d,&tDate[1].m,&tDate[1].y);
			FindLocationForGameEvents(sport);
			break;
			
		case 15:printf("Enter Sport, date and particular time\n");
			scanf("%s%d%d%d%d%d",sport,&tempD.d,&tempD.m,&tempD.y,&tempD.time[0].h,&tempD.time[0].m);
			FindLocationForGame(sport);
			break;
			
			
		case 16:printf("Enter Sport, start date and end date\n");
			scanf("%s%d%d%d%d%d%d",sport,&tDate[0].d,&tDate[0].m,&tDate[0].y,&tDate[1].d,&tDate[1].m,&tDate[1].y);
			FindLocationForGameInTimeRange(sport);
			break;

		case 17:printf("enter no. of grounds to scan: ");
			scanf("%d",&n);
			printf("Enter the ground names: ");
			for(i=0;i<n;i++)
				scanf("%s",&Ground[i].name);
			printf("Enter Sport and date\n");
			scanf("%s%d%d%d",sport,&tempD.d,&tempD.m,&tempD.y);
			ClashOfMatches(Ground,tempD,sport,n);
			break;
			
		case 18:printf("enter no. of games to scan: ");
			scanf("%d",&n);
			printf("Enter the games names: ");
			for(i=0;i<n;i++)
				scanf("%s",&games[i].name);
			printf("Enter city and date\n");
			scanf("%s%d%d%d",city,&tempD.d,&tempD.m,&tempD.y);
			GiveListOfGroundsHavingMinOneMatch(games,tempD,city,n);
			break;
			
		case 19:printf("We have considered only one scheduled match as given in question hence it is similar to 18th(r) function i.e.,GiveListOfGroundsHavingMinOneMatch()\n ");
			//GiveListOfGroundsHavingAtLeastKMatches();
			break;
			
		case 20:printf("Enter sport, date and time\n");
			scanf("%s%d%d%d%d%d",sport,&tempD.d,&tempD.m,&tempD.y,&hour,&min);
			SortOnPriceForAGame(sport,hour,min);
			break;
		
		case 21:printf("We coundn't complete the code for this function\n");
			//FindGamesSchedule();
			break;
			
		default : printf("Enter a valid input\n");
			break;
			
	}
	
	printf("\n------------RECORDS-------------\n");
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);	
	}
}

initialSort(struct grounds G[],int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].gName, G[j + 1].gName) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].gName, G[j + 1].gName)==0)&&(strcmp(G[j].city,G[j+1].city)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
}


void getGroundInfo(char city[])
{
	int j;	
	sort();
	for(int i=0;i<total;i++)
	{
		if(strcmp(G[i].city,city)==0)
		{
			//printf("%s\n",G[i].gName);
			for(j=0;j<G[i].noOfSports;j++)
				printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);
		}
	}
}

void sort()
{
	int i,j,k;
	for (i = 1; i < total; i++)
	{
  		for (j = 0; j < total - i; j++)
		{
 			if (strcmp(G[j].gName, G[j + 1].gName) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
		}
	}
	
	for(k=0;k<total;k++)
	{
		for (i = 1; i < G[k].noOfSports; i++)
		{
	  		for (j = 0; j < G[k].noOfSports - i; j++)
			{
	 			if (strcmp(G[k].S[j].name, G[k].S[j+1].name) > 0)
				{
	 				tempS = G[k].S[j];
	 				G[k].S[j] = G[k].S[j+1];
	 				G[k].S[j+1] = tempS;
	 			}
			}
		}

	}

}



void addSport(char GroundName[],char city[],char sport[])
{
	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if((strcmp(G[i].gName,GroundName)==0)&&(strcmp(G[i].city,city)==0))
		{
			for(j=0;j<G[i].noOfSports;j++)
			{
				if(strcmp(G[i].S[j].name,sport)==0)
				{
					found=1;
				}
			}
		
		}
		else if(strcmp(G[i].gName,"null")==0)
		{
			found=2;
			pos=i;
		}
	}

	if(found==1)
	{

		printf("FAILURE\n");
	}
	else
	{
		strcpy(G[pos].S[G[pos].noOfSports].name,sport);
		strcpy(G[pos].gName,GroundName);
		strcpy(G[pos].city,city);
		printf("SUCCESS\n");
		if(found==2)
			total++;
		G[pos].noOfSports++;
	}
}


void deleteSport(char GroundName[],char city[],char sport[])
{
	int found=0,i,j,pos,pos_Ground,pos_Sport;
	for(i=0;i<total&&found==0;i++)
	{
		if((strcmp(G[i].gName,GroundName)==0)&&(strcmp(G[i].city,city)==0))
		{
			for(j=0;j<G[i].noOfSports;j++)
			{
				if(strcmp(G[i].S[j].name,sport)==0)
				{
					found=1;
					pos_Ground=i;
					pos_Sport=j;
				}
			}
		
		}
	}
	if(found==1)
	{
		for(i=pos_Sport;i<G[pos_Ground].noOfSports-1;i++)
		{
			swap_Sports(pos_Ground,i,i+1);	
		}
		G[pos_Ground].noOfSports--;
		printf("SUCCESS\n");
	}
	else
	{
		printf("FAILURE\n");
		
	}
}

void swap_Ground(int i,int j)
{
	temp=G[i];
	G[i]=G[j];
	G[j]=temp;
}

void swap_Sports(int pos_Ground,int i,int j)
{
	tempS=G[pos_Ground].S[i];
	G[pos_Ground].S[i]=G[pos_Ground].S[j];
	G[pos_Ground].S[j]=tempS;
}


void addGround() 
{

	int found=0,i,j,pos;
	for(i=0;i<size&&found==0;i++)
	{
		if((strcmp(G[i].gName,temp.gName)==0)&&(strcmp(G[i].city,temp.city)==0))
		{
			found=2;
		}
		else if(strcmp(G[i].gName,"null")==0)
		{
			found=1;
			pos=i;
		}
	}
	if(found==2)
	{
		printf("FAILURE\n");
	}
	else
	{
		G[pos]=temp;
		//details should be added
		printf("SUCCESS\n");
		total++;
	}
}

void deleteGround(char GroundName[],char city[])
{			
		int i,j,pos,found=0;
		for(i=0;i<total&&found==0;i++)
		{
			if(strcmp(G[i].gName,GroundName)==0)
			{
				if(strcmp(G[i].city,city)==0)
				{
					found=1;
					pos=i;
				}
			}
		}
		if(found==1)
		{
			for(j=pos;j<total-1;j++)
			{
				swap_Ground(j,j+1);	
			}
			strcpy(G[j].gName,"null");
			strcpy(G[j].city,"null");
			total--;
			printf("SUCCESS\n");
		}
		else
		{
			printf("FAILURE\n");
			
		}
	
}


void updateGround() 
{

	int found=0,i,j,pos;
	for(i=0;i<total&&found==0;i++)
	{
		if((strcmp(G[i].gName,temp.gName)==0)&&(strcmp(G[i].city,temp.city)==0))
		{
			found=1;
			pos=i;
		}
	}
	if(found==0)
	{
		printf("FAILURE\n");
	}
	else
	{
		G[pos]=temp;
		//details should be added
		printf("SUCCESS\n");
	}
}

void sportWithGround(char sport[])
{
	int i,j,k;
	c=0;
	for(k=0;k<total;k++)
	{
		for (j = 0; j < G[k].noOfSports; j++)
		{
 			if (strcmp(G[k].S[j].name, sport)==0)
			{
				//printf("%s\n",G[k].gName);
				req[c]=G[k];
				c++;
			}
		}		
	}	
	sort_gName();
	for(i=0;i<c;i++)
	{
		printf("%s\t",req[i].gName);
	}
}

void sort_gName()
{
	int i,j,k;
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (strcmp(req[j].gName, req[j + 1].gName) > 0)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
		}
	}
}

void getFixturesinState(char state[])
{
		
	int i,j,k;
	c=0;
	for(int i=0;i<total;i++)
	{
		if(strcmp(G[i].state,state)==0)
		{
			//printf("%s\n",G[i].sport);
			req[c]=G[i];
			c++;
		}
	}
	sortCGS();
	for(i=0;i<c;i++)
	{
		for(j=0;j<req[i].noOfSports;j++)
		{
			if(req[i].S[j].s_d[0].d!=0)
			{
				printf("%s,%s,%s,%s\n",req[i].gName,req[i].city,req[i].state,req[i].S[j].name);	
			}
		}
	}
}

void sortCGS()
{
	int i,j,k;
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (strcmp(req[j].city, req[j + 1].city) > 0)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
	else if((strcmp(req[j].city, req[j + 1].city)==0)&&(strcmp(req[j].gName,req[j+1].gName)>0))
			{	
				temp=req[j];
				req[j]=req[j+1];
				req[j+1]=temp;		
			}
		}
	}
	for(k=0;k<c;k++)
	{
		for (i = 1; i < req[k].noOfSports; i++)
		{
	  		for (j = 0; j < req[k].noOfSports - i; j++)
			{
	 			if (strcmp(req[k].S[j].name,req[k].S[j+1].name) > 0)
				{
	 				tempS = req[k].S[j];
	 				req[k].S[j] = req[k].S[j+1];
	 				req[k].S[j+1] = tempS;
	 			}
			}
		}

	}
}


void UniqueSport(char ground[],char city[])
{
	int i,j,k,pos_req,found=0,count=0;
	c=0;
	for(i=0;i<100;i++)	
		strcpy(req[i].gName,"null");
	for(i=0;i<total&&found==0;i++)
	{
		if(strcmp(G[i].gName,ground)==0&&(strcmp(G[i].city,city)==0))
		{
			pos_req=i;
			found=1;
		}
	}
	for(i=0;i<total;i++)
	{
		if((strcmp(G[i].gName,ground)!=0)&&(strcmp(G[i].city,city)==0))
		{
			req[c]=G[i];
			c++;
		}
	}
	count=0;
	while(count!=G[pos_req].noOfSports)
	{
		for(i=0;i<c;i++)
		{	
			found=0;
			for(j=0;j<req[i].noOfSports&&found==0;j++)
			{
				if(strcmp(req[i].S[j].name,G[pos_req].S[count].name)==0)
				{
					found=1;
				}
			}
			if(found==0)
			{
				printf("%s\t",G[pos_req].S[count].name);
			}
		}
		count++;
	}

}


void getFixturesinCity(char city[])
{
	int i,j,k,found=0,once=0;
	c=0;
	
	for(i=0;i<total;i++)
	{
		if((strcmp(G[i].city,city)==0))
		{
			req[c]=G[i];
			c++;
		}
	}
	sort_g();
	for(i=0;i<c;i++)
	{
		for(j=0;j<req[i].noOfSports;j++)
		{
			found=0;
if((req[i].S[j].s_d[0].d>=tDate[0].d)&&(req[i].S[j].s_d[0].m>=tDate[0].m)&&(req[i].S[j].s_d[0].y>=tDate[0].y)&&\
(req[i].S[j].s_d[0].d<=tDate[1].d)&&(req[i].S[j].s_d[0].m<=tDate[1].m)&&(req[i].S[j].s_d[0].y<=tDate[1].y))
				{
					
					
					printf("%s ",req[i].S[j].name);
					found=1;
					once=1;
				}
			
		}
	}
	if(once==0)
		printf("No Empty Slot\n");
}

sort_g()
{
	int i,j,k;
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (strcmp(req[j].gName, req[j + 1].gName) > 0)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
		}
	}
	for(k=0;k<c;k++)
	{
		for (i = 1; i < req[k].noOfSports; i++)
		{
	  		for (j = 0; j < req[k].noOfSports - i; j++)
			{
	 			if (strcmp(req[k].S[j].name,req[k].S[j+1].name) > 0)
				{
	 				tempS = req[k].S[j];
	 				req[k].S[j] = req[k].S[j+1];
	 				req[k].S[j+1] = tempS;
	 			}
			}
		}

	}

}

void getFixturesSortedOnDate()
{
	int i,j,k;
	for(k=0;k<total;k++)
	{
		for (i = 1; i <G[k].noOfSports ; i++)
		{
	  		for (j = 0; j < G[k].noOfSports - i; j++)
			{
	 			if (G[k].S[j].s_d[0].y>G[k].S[j+1].s_d[0].y)
				{
	 				tempS = G[k].S[j];
	 				G[k].S[j] = G[k].S[j+1];
	 				G[k].S[j+1] = tempS;
	 			}
	 			if(G[k].S[j].s_d[0].y==G[k].S[j+1].s_d[0].y)
	 			{
	 				if (G[k].S[j].s_d[0].m>G[k].S[j+1].s_d[0].m)
					{
		 				tempS = G[k].S[j];
		 				G[k].S[j] = G[k].S[j+1];
		 				G[k].S[j+1] = tempS;
		 			}
		 			if(G[k].S[j].s_d[0].m==G[k].S[j+1].s_d[0].m)
		 			{
		 				if (G[k].S[j].s_d[0].d>G[k].S[j+1].s_d[0].d)
						{
			 				tempS = G[k].S[j];
			 				G[k].S[j] = G[k].S[j+1];
			 				G[k].S[j+1] = tempS;
			 			}
		 			}
	 			}
	 		}
	 	}
	 }
	 for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);	
	}
	 
}

void isAvailable(char sport[])
{
	int i,j,k,found,once=0;
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				found=0;
				for(k=0;k<G[i].S[j].noDates_aval&&found==0;k++)
				{
					if((tempD.d!=G[i].S[j].s_d[0].d)||(tempD.m!=G[i].S[j].s_d[0].m)||(tempD.y!=G[i].S[j].s_d[0].y))
					{
						if((tempD.d==G[i].S[j].dt[k].d)&&(tempD.m==G[i].S[j].dt[k].m)&&(tempD.y==G[i].S[j].dt[k].y))
						{
					
							if((G[i].S[j].dt[k].time[0].h<=tempD.time[0].h)&&(G[i].S[j].dt[k].time[0].m<=tempD.time[0].m)&&\
							(G[i].S[j].dt[k].time[1].h>tempD.time[0].h)||((G[i].S[j].dt[k].time[1].h==tempD.time[0].h)&&(G[i].S[j].dt[k].time[1].m>tempD.time[0].m)))
							{
								printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);	
								found=1;
								once=1;		
							}
						}
					}
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}

void FindLocationForGameEvents(char sport[])
{
	int i,j,k,once=0;
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				if(((G[i].S[j].s_d[0].d>=tDate[0].d)&&(G[i].S[j].s_d[0].m>=tDate[0].m)&&(G[i].S[j].s_d[0].y>=tDate[0].y)&&(G[i].S[j].s_d[0].d<=tDate[1].d)\
				&&(G[i].S[j].s_d[0].m<=tDate[1].m)&&(G[i].S[j].s_d[0].y<=tDate[1].y)))	
				{
					printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
					once=1;
				}
				else if((G[i].S[j].s_d[0].y>=tDate[0].y)&&(G[i].S[j].s_d[0].y<tDate[1].y))
				{
					printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
					once=1;
				}
				else if((G[i].S[j].s_d[0].y==tDate[0].y)&&(G[i].S[j].s_d[0].y==tDate[1].y))
				{
					if((G[i].S[j].s_d[0].m>=tDate[0].m)&&(G[i].S[j].s_d[0].m<tDate[1].m)&&(G[i].S[j].s_d[0].d>=tDate[0].d))
					{
						printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
						once=1;
					}
					else if((G[i].S[j].s_d[0].m>tDate[0].m)&&(G[i].S[j].s_d[0].d<=tDate[1].d)&&(G[i].S[j].s_d[0].m<=tDate[1].m))
					{
						printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].s_d[0].d,G[i].S[j].s_d[0].m,G[i].S[j].s_d[0].y);
						once=1;
					}
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}


void FindLocationForGame(char sport[])
{
	int i,j,k,found,once=0;
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				found=0;
				for(k=0;k<G[i].S[j].noDates_aval&&found==0;k++)
				{
					if((tempD.d!=G[i].S[j].s_d[0].d)||(tempD.m!=G[i].S[j].s_d[0].m)||(tempD.y!=G[i].S[j].s_d[0].y))
					{
						//it will enter only if the game is not scheduled on given date
						if((tempD.d==G[i].S[j].dt[k].d)&&(tempD.m==G[i].S[j].dt[k].m)&&(tempD.y==G[i].S[j].dt[k].y))	
						{
							if((G[i].S[j].dt[k].time[0].h<=tempD.time[0].h)&&(G[i].S[j].dt[k].time[0].m<=tempD.time[0].m)&&\
							(G[i].S[j].dt[k].time[1].h>tempD.time[0].h)||(G[i].S[j].dt[k].time[1].h==tempD.time[0].h)&&(G[i].S[j].dt[k].time[1].m>tempD.time[0].m))
							{
								printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);	
								found=1;
								once=1;		
							}
						}
					}
					
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}

void FindLocationForGameInTimeRange(char sport[])
{
	int i,j,k,once=0,found;
	printf("Availability:\n");
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				found=0;
				for(k=0;k<G[i].S[j].noDates_aval&&found==0;k++)
				{	
					if((G[i].S[j].dt[k].d!=G[i].S[j].s_d[0].d)||(G[i].S[j].dt[k].m!=G[i].S[j].s_d[0].m)||(G[i].S[j].dt[k].y!=G[i].S[j].s_d[0].y))
					{
						if(((G[i].S[j].dt[k].d>=tDate[0].d)&&(G[i].S[j].dt[k].m>=tDate[0].m)&&(G[i].S[j].dt[k].y>=tDate[0].y)&&(G[i].S[j].dt[k].d<=tDate[1].d)\
						&&(G[i].S[j].dt[k].m<=tDate[1].m)&&(G[i].S[j].dt[k].y<=tDate[1].y)))	
						{
							printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].dt[k].d,G[i].S[j].dt[k].m,G[i].S[j].dt[k].y);
							//found=1;
							once=1;
						}
						else if((G[i].S[j].dt[k].y>=tDate[0].y)&&(G[i].S[j].dt[k].y<tDate[1].y))
						{
							printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].dt[k].d,G[i].S[j].dt[k].m,G[i].S[j].dt[k].y);
							//found=1;
							once=1;
						}
						else if((G[i].S[j].dt[k].y==tDate[0].y)&&(G[i].S[j].dt[k].y==tDate[1].y))
						{
							if((G[i].S[j].dt[k].m>=tDate[0].m)&&(G[i].S[j].dt[k].m<tDate[1].m)&&(G[i].S[j].dt[k].d>=tDate[0].d))
							{
								printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].dt[k].d,G[i].S[j].dt[k].m,G[i].S[j].dt[k].y);
								//found=1;
								once=1;
							}
							else if((G[i].S[j].dt[k].m>tDate[0].m)&&(G[i].S[j].dt[k].d<=tDate[1].d)&&(G[i].S[j].dt[k].m<=tDate[1].m))
							{
								printf("%s,%s,%s,%s %d-%d-%d\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name,G[i].S[j].dt[k].d,G[i].S[j].dt[k].m,G[i].S[j].dt[k].y);
								//found=1;
								once=1;
							}
						}
					}
				}
			}
		}
	}
	if(once==0)
		printf("Not Available\n");
}


ClashOfMatches(struct ground Ground[],struct date tempD,char sport[],int n)
{
	int i,j,k,p=0;
	printf("clash is happening among: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<total;j++)
		{
			if(strcmp(Ground[i].name,G[j].gName)==0)
			{
				for(k=0;k<G[j].noOfSports;k++)
				{
					if(strcmp(sport,G[j].S[k].name)==0)
					{
						if((tempD.d==G[j].S[k].s_d[0].d)&&(tempD.m==G[j].S[k].s_d[0].m)&&(tempD.y==G[j].S[k].s_d[0].y))
						{
							printf("%s  ",Ground[i].name);
							p++;
						}
					}
				}
			}
		}
	}
	if(p<2)
		printf("None");
	printf("\n");
}


GiveListOfGroundsHavingMinOneMatch(struct ground games[],struct date tempD,char city[],int n)
{
	int i,j,k,p=0;
	printf("Grounds having atleast one match: \n");
	for(j=0;j<total;j++)
	{
		if(strcmp(city,G[j].city)==0)
		{
			for(k=0;k<G[j].noOfSports;k++)
			{	
				for(i=0;i<n;i++)
				{
					if(strcmp(games[i].name,G[j].S[k].name)==0)
					{
						if((tempD.d==G[j].S[k].s_d[0].d)&&(tempD.m==G[j].S[k].s_d[0].m)&&(tempD.y==G[j].S[k].s_d[0].y))
						{
							printf("%s %s\n",G[j].gName,games[i].name);
						}
					}
				}
			}
		}
	}
}

void SortOnPriceForAGame(char sport[],int hour,int min)
{
	int i,j,k,found,once=0,c=0;
	for(i=0;i<total;i++)
	{
		found=0;
		for(j=0;j<G[i].noOfSports&&found==0;j++)
		{
			if(strcmp(G[i].S[j].name,sport)==0)
			{
				for(k=0;k<G[i].S[j].noDates_aval;k++)
				{
					if((tempD.d==G[i].S[j].dt[k].d)&&(tempD.m==G[i].S[j].dt[k].m)&&(tempD.y==G[i].S[j].dt[k].y))
					{
						strcpy(req[c].gName,G[i].gName);					
						req[c].S[0].rate=(((hour*60)+min)/60.0)*G[i].S[j].rate;
						c++;
					}
					
				}
			}
		}
	}
	for (i = 1; i < c; i++)
	{
  		for (j = 0; j < c - i; j++)
		{
 			if (req[j].S[0].rate>req[j+1].S[0].rate)
			{
 				temp = req[j];
 				req[j] = req[j + 1];
 				req[j + 1] = temp;
 			}
		}
	}
	for(i=0;i<c;i++)
	{
		printf("%s %f\n",req[i].gName,req[i].S[0].rate);
	}
	
}

getFixturesSortedonState(struct grounds G[])
{
		
	//sortSC(G,total);
	int i,j,n;

	n=total;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].state, G[j + 1].state) > 0)
			{
 				temp = G[j];
 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}
			else if((strcmp(G[j].state, G[j + 1].state)==0)&&(strcmp(G[j].city,G[j+1].city)>0))
			{	
				temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;		
			}
		}
	}
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);	
	}
	

}

sortSC(struct grounds G[],int n)
{
	int i,j;
	for (i = 1; i < n; i++)
	{
  		for (j = 0; j < n - i; j++)
		{
 			if (strcmp(G[j].state, G[j + 1].state) > 0)
			{
 				temp = G[j];

 				G[j] = G[j + 1];
 				G[j + 1] = temp;
 			}

			else if((strcmp(G[j].state, G[j + 1].state)==0)&&(strcmp(G[j].city,G[j+1].city)>0))
			{	
				temp=G[j];

				G[j]=G[j+1];
				G[j+1]=temp;		
			}

		}
	}
	for(i=0;i<total;i++)
	{
		for(j=0;j<G[i].noOfSports;j++)
		printf("%s,%s,%s,%s\n",G[i].gName,G[i].city,G[i].state,G[i].S[j].name);	
	}

}





