#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string questions[10] = {
	"What is the meaning of Pakistan?",
	" Who is the first Governor General of Pakistan?",
	" What was the major event of 1971?",
	" In which year did Pakistan win the Cricket World Cup?",
	"When did Pakistan win Olympic gold medal in Hockey for the first time?",
	"Which party was in power in North West Frontier Province at the time of independence?",
	"When Sindh was annexed by the British what message was sent by Charles Napier to headquaters?",
	"Capital of Pakistan is___________?",
	" Where was General Pervez Musharraf born?",
	" Which is the national flower of Pakistan?"
						};
	string options[10][4] = {
	{"Holy Land","land of five rivers","islamic county","desert"},
	{"Quaid-e-Azam","G.Zia-ul-Haq","Muhammad bin Qasim","None of these"},
	{"Bangladesh broke away from pakistan","Nehru-report","Explosion of nuclear bomb","massive earthquake"},
	{"1999","1987","1994","1992"},
	{"1999","1987","1960","1992"},
	{"Muslim league","Congress","Fedral parliament","None"},
	{"The die is cast","peccavi","Do or Die","none"},
	{"Islamabad","Lahore","Karachi","faisalabad"},
	{"LHR","KHI","Delhi","quetta"},
	{"Rose","Jasmine","Sunfllower","none"},
					    };
	string correctOptions[10] = {
		"Holy Land","Quaid-e-Azam","Bangladesh broke away from pakistan","1992",
		"1960","Congress","peccavi",
		"Islamabad","Delhi","Jasmine"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;
	int op;


	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;

		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}


	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;

		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}


	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;

	getch();
	return 0;
}
