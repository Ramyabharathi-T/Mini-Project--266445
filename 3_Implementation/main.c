#include "prototype.h"


void show_record();
void reset_score();
void help();
void edit_score(float , char []);

int main()
{
     int countr,r,r1,count,i,n,j,k,countr2,countr3;
     float score,score_1,score_2;
     char choice;
     char playername[20];
     mainhome:
     system("@cls||clear");
     printf("\n\n\n");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t______");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t______");
     printf("\n\t\t______");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t______");
     printf("\n\t\t______");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t______\n\n");
	 char a;
	 scanf(" %c",&a);
     choice=toupper(a);
     if (choice=='V')
	{
	show_record();
    goto mainhome;
	}
     else if (choice=='H')
	{
	help();//getch();
	goto mainhome;
	}
	else if (choice=='R')
	{   reset_score();
	//getch();
	    goto mainhome;
    }
	else if (choice=='Q')
	    exit(1);
    else if(choice=='S')
    {
     system("@cls||clear");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
    scanf("%s",playername);

    system("@cls||clear");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
	scanf(" %c",&a);
    if (toupper(a)=='Y')
		{
		    goto home;
        }
	else
	{
        goto mainhome;
       system("@cls||clear");
    }

     home:
     system("@cls||clear");
     count=0;
     for(i=1;i<=6;i++)
     {
        system("@cls||clear");
        r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		scanf(" %c",&a);
		if (toupper(a)=='C')
		{
			printf("\n\nCorrect!!!");count++;
			//getch();
		    break;
        }
		else
	   {
		  printf("\n\nWrong!!! The correct answer is C.23232");
		   //getch();
		  break;
		}

        case 2:
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		scanf(" %c",&a);
		if (toupper(a)=='C')
		{   printf("\n\nCorrect!!!");count++;
			//getch();
			break;
        }
		else
		{   printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       //getch();
		    break;
        }

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		scanf(" %c",&a);
		if (toupper(a)=='B')
		{   printf("\n\nCorrect!!!");count++;
			//getch();
			break;
        }
		else
		{   printf("\n\nWrong!!! The correct answer is B.Hyena");
		       //getch();
		    break;
        }

        case 4:
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		scanf(" %c",&a);
		if (toupper(a)=='B')
		{   printf("\n\nCorrect!!!");count++;
			//getch();
			 break;
        }
		else
	   {    printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		       //getch();
		     break;
        }

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
		scanf(" %c",&a);
        if (toupper(a)=='B')
               {printf("\n\nCorrect!!!");count++;
               //getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       //getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		scanf(" %c",&a);
		if (toupper(a)=='D' )
			{printf("\n\nCorrect!!!");count++;
			//getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       //getch();
		       break;}}
		       }

	if(count>=3)
	{goto test;}
	else
	{
	system("@cls||clear");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	//getch();
	goto mainhome;
	}
     test:
     system("@cls||clear");
     printf("\n\n\t** CONGRATULATION %s you are eligible to play the Game **",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
	 scanf(" %c",&a);
	 srand(time(0));
     if(toupper(a)!='p')
		{
		    int x=rand()%4;
		    printf("%d",x);
		    if(x==0)
		        goto game1;
		    else if(x==1)
		        goto game2;
		    else
		        goto game3;
		}
     game1:
     countr=0;
     for(i=1;i<=10;i++)
     {system("@cls||clear");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;//getch();
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");//getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");//getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");//getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");//getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr++;break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       //getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		scanf(" %c",&a);
		if (toupper(a)=='B' )
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");goto score;
		       //getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");//getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");//getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");//getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");//getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			  {printf("\n\nCorrect!!!");countr++;//getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");//getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr++;//getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");//getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");//getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");//getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++;// getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");//getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of__ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");goto score;
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serena Williams");goto score;
		       break;}

		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");goto score;
		       break;}}}
	score:
    system("@cls||clear");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t*** CONGRATULATION ****");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t*** CONGRATULATION ***");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t** SORRY YOU DIDN'T WIN ANY CASH **");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	scanf(" %c",&a);
	if (toupper(a)=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}

    game2:
     countr2=0;
     for(k=1;k<=10;k++)
     {system("@cls||clear");
     int r2=k;

     switch(r2)
		{
		case 1:
		printf("\n\n Entomology is the science that studies");
		printf("\n\nA.Behavior of human beings\t\tB.Insects\n\nC.The origin and history of technical and scientific terms\t\tD.The formation of rocks");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;//getch();
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is B.Insects");//getch();
		       goto score1;
		       break;}

		case 2:
		printf("\n\n\nAfter the battle of Kurukshetra who gave Yudhisthira lessons on Raj Dharma?");
		printf("\n\nA.Krishna\t\tB.Bhishma\n\nC.Vidur\t\tD.Ved Vyas");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Bhishma");//getch();
		      goto score1;
		       break;
		       }

        case 3:
		printf("\n\n\nThe Indian to beat the computers in mathematical wizardry is ");
		printf("\n\nA.Ramanujam\t\tB.Rina Panigrahi\n\nC.Raja Ramanna\t\tD.Shakunthala Devi");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Shakunthala Devi");//getch();
		       goto score1;
		       break;}

        case 4:
		printf("\n\n\nThe Battle of Plassey was fought in?");
		printf("\n\nA.1757\t\tB.1782\n\nC.1748\t\tD.1764");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.1757");//getch();
		       goto score1;
		       break;
		       }

        case 5:
		printf("\n\n\nWhat is the escape velocity required for a rocket to leave Earth?");
		printf("\n\nA.1.6km/sec\t\tB.9.4km/sec\n\nC.11.2km/sec\t\tD.15.9km/sec");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr2++;break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.11.2km/sec");
		       //getch();
		       goto score1;
		       break;
		       }

		case 6:
		printf("\n\n\nThe Vijayanagara ruler, Krishnadev Raya's work Amuktamalyada, was in ");
		printf("\n\nA.Telugu\t\tB.Sanskrit\n\nC.Tamil\t\tD.Kannada");
		scanf(" %c",&a);
		if (toupper(a)=='A' )
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Telugu");goto score1;
		       //getch();
		       break;}

        case 7:
		printf("\n\n\nWhich of these is a chemical element present in the periodic table?");
		printf("\n\nA.Eurocium\t\tB.Americium\n\nC.Asiacium\t\tD.Africium");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Americium");//getch();
		       goto score1;
		       break;}

        case 8:
		printf("\n\n\nA computer communication technology that provides a way to interconnect multiple computers across short distance is");
		printf("\n\nA.LAN\t\tB.MAN\n\nC.WAN\t\tD.Wireless Network");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr2++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.LAN");//getch();
		       goto score1;
		       break;}

        case 9:
		printf("\n\n\nJude Felix is a famous Indian player in which of these fields?");
		printf("\n\nA.Hockey\t\tB.Volleyball\n\nC.Cricket\t\tD.Carroms");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr2++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Hockey");//getch();
		       goto score1;
		       break;}

        case 10:
		printf("\n\n\nSatellite launching station in India is located at:");
		printf("\n\nA.Salem-Tamil Nadu\t\tB.Sriharikota-Andhra Pradesh\n\nC.Warangal-Andhra Pradesh\t\tD.Feroz Shah Kotla-New Delhi");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr2++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Sriharikota-Andhra Pradesh");break;goto score1;}

        case 11:
		printf("\n\n\nThe chief purpose of crop rotation is to check the loss of top soil");
		printf("\n\nA.by water erosion\t\tB.by wind erosion\n\nC.by weathering'\t\tD.of its mineral content'");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is D.of its mineral content");//getch();
              break;goto score1;}

        case 12:
		printf("\n\n\nAfter Sachin Tendulkar which Indian Batsmen has scored the most number of runs in Test Cricket?");
		printf("\n\nA.Sunil Gavaskar\t\tB.Rahul Dravid\n\nC.Md Azharuddin\t\tD.VVS Laxman");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr2++;//getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Rahul Dravid");//getch();
		       break;goto score1;}}}


	score1:
    system("@cls||clear");
	score_1=(float)countr2*100000;
	if(score_1>0.00 && score_1<1000000)
	{
	   printf("\n\n\t\t*** CONGRATULATION ****");
	     printf("\n\t You won $%.2f",score_1);goto go1;}

	 else if(score_1==1000000.00)
	{
	    printf("\n\n\n \t\t*** CONGRATULATION ***");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score_1);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t** SORRY YOU DIDN'T WIN ANY CASH **");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go1;}

	go1:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	scanf(" %c",&a);
	if (toupper(a)=='Y')
		goto home;
	else
		{
		edit_score(score_1,playername);
		goto mainhome;}

     game3:
     countr3=0;
     for(j=1;j<=10;j++)
     {system("@cls||clear");
     int r3=j;

     switch(r3)
		{
		case 1:
		printf("\n\n The absorption of ink by blotting paper involve");
		printf("\n\nA.Viscosity of ink\t\tB.Capillary action phenomenon\n\nC.Diffusion of ink through the blotting\t\tD.Siphon action");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;//getch();
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is B.Capillary action phenomenon");//getch();
		       goto score2;
		       break;}

		case 2:
		printf("\n\n\nTwo of the great Mughals wrote their own memoirs. They were?");
		printf("\n\nA.Babar and Humayun\t\tB.Humayun and Jahangir\n\nC.Babar and Jahangir\t\tD.Jahangir and Shahjahan");
		scanf(" %c",&a);
		if (toupper(a)=='B')
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Humayun and Jahangir");//getch();
		      goto score2;
		       break;
		       }

        case 3:
		printf("\n\n\nIn medicine, which of these is usually denoted by 120/80 for an adult?");
		printf("\n\nA.Normal Pulse\t\tB.Normal Hearing\n\nC.Normal vision\t\tD.Normal Blood Pressure");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Normal Blood Pressure");//getch();
		       goto score2;
		       break;}

        case 4:
		printf("\n\n\nWhich of these words occurs more than once in our national anthem?");
		printf("\n\nA.Uchchala\t\tB.Jaladhi\n\nC.Bhagya\t\tD.Mangala");
		scanf(" %c",&a);
		if (toupper(a)=='C')
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.Bhagya");//getch();
		       goto score2;
		       break;
		       }

        case 5:
		printf("\n\n\nWho was the first musician ever to be awarded the Bharat Ratna");
		printf("\n\nA. M.S.Subbulakshmi\t\tB.TM Krishna\n\nC..Ghulam Ali\t\tD.DK Pattammal");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr3++;break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A. M.S.Subbulakshmi");
		       //getch();
		       goto score2;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich of these words literally means 'surrender' in Arabic?");
		printf("\n\nA.Khalifah\t\tB.Islam\n\nC.Ramdan\t\tD.Muhammad");
		scanf(" %c",&a);
		if (toupper(a)=='B' )
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Islam");goto score2;
		       //getch();
		       break;}

        case 7:
		printf("\n\n\nRam travels 7 km towards North. Then he turns right and walks 3 km. Now,he turns to the right and walks 7 km. How many kilometers is he away from the starting point?");
		printf("\n\nA.13km\t\tB.10km\n\nC.14km\t\tD.3km");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.3km");//getch();
		       goto score2;
		       break;}

        case 8:
		printf("\n\n\nWhich of these kinds of leave men cannot take?");
		printf("\n\nA.Sick leave\t\tB.Paternity leave\n\nC.Casual leave\t\tD.Maternity leave");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr3++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Maternity leave");//getch();
		       goto score2;
		       break;}

        case 9:
		printf("\n\n\nWhich of these festivals is celebratedin honor of an avatar of Lord Vishnu?");
		printf("\n\nA.Janmashtami\t\tB.Ganesha Chaturthi\n\nC.Vishwakarma\t\tD.Maha Shivratri ");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			{printf("\n\nCorrect!!!");countr3++; //getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Janmashtami");//getch();
		       goto score2;
		       break;}

        case 10:
		printf("\n\n\nWhich of these spices that are given here cost most among them?");
		printf("\n\nA.Vanilla\t\tB.Cardamom\n\nC.Black Pepper\t\tD.Saffron");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr3++; break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Saffron");break;goto score2;}

        case 11:
		printf("\n\n\nIn July 2013, Indian highest judicial court issued a rule that anybody who wants to buy which of these these has to show his identity card?");
		printf("\n\nA.Alcohol\t\tB.Sandalwood\n\nC.Gold\t\tD.Acid");
		scanf(" %c",&a);
		if (toupper(a)=='D')
			{printf("\n\nCorrect!!!");countr3++;//getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is D.Acid");//getch();
              break;goto score2;}

        case 12:
		printf("\n\n\nWhat color is traditionally worn to celebrate St. Patrick's Day?");
		printf("\n\nA.Red\t\tB.Green\n\nC.Blue\t\tD.Hot pink");
		scanf(" %c",&a);
		if (toupper(a)=='A')
			  {printf("\n\nCorrect!!!");countr3++;//getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");//getch();
              break;goto score2;}}}


    score2:
    system("@cls||clear");
	score_2=(float)countr3*100000;
	if(score_2>0.00 && score_2<1000000)
	{
	    printf("\n\n\t\t*** CONGRATULATION ****");
	    printf("\n\t You won $%.2f",score_2);goto go2;
    }

	 else if(score_2==1000000.00)
	{
	    printf("\n\n\n \t\t*** CONGRATULATION ***");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score_2);
	    printf("\t\t Thank You!!");
	}
	 else
    {
	 printf("\n\n\t** SORRY YOU DIDN'T WIN ANY CASH **");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go2;
    }

	go2:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	scanf(" %c",&a);
	if (toupper(a)=='Y')
		goto home;
	else
	{
		edit_score(score_2,playername);
		goto mainhome;
    }

    }
 }



void help()
{   //system("@cls||clear");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t***BEST OF LUCK*****");
	printf("\n\n\t*C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM**");

	char q;
	scanf("%c",&q);
	printf("\n\n\n\nPress any key to continue");
    char t;
    scanf("%c",&t);
}

void edit_score(float score, char plnm[20])
{   //system("@cls||clear");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",nm,&sc);
	if (score>=sc)
	{   sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
    }
    char q;
	scanf("%c",&q);
	printf("\n\n\n\nPress any key to continue");
    char t;
    scanf("%c",&t);
}

void show_record()
{   system("@cls||clear");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",name,&scr);
	printf("\n\n\t\t*********");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*********");
	fclose(f);
    char q;
	scanf("%c",&q);
	printf("\n\n\n\nPress any key to continue");
    char t;
    scanf("%c",&t);
}
	//getch();

void reset_score()
{   //system("@cls||clear");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",nm);
	fclose(f);
	f=fopen("score.txt","w");
	sc=0;
	fprintf(f,"%s\n%f",nm,sc);
    fclose(f);
    char q;
	scanf("%c",&q);
	printf("\n\n\n\nPress any key to continue");
    char t;
    scanf("%c",&t);
}
