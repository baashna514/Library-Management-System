#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int c1,c2,i=0,j=0,k=0,l=0,idSearch;
char d1;
struct Books{
    string bookId;
    string bookName;
    string bookAuthor;
}b[100];

struct Registered_Student{
    int studentId;
    string studentName;
}s[100];

//***************************************************************
//      ADMINISTRATOR MENU FUNCTION
//****************************************************************
void administrator(){


    admMain:

    cout<<"\n\n\n\tADMINISTRATOR MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORD";
	cout<<"\n\n\t3.DELETE STUDENT RECORD";
	cout<<"\n\n\t4.CREATE BOOK ";
	cout<<"\n\n\t5.DISPLAY ALL BOOKS ";
	cout<<"\n\n\t6.DELETE BOOK ";
	cout<<"\n\n\t7.BACK TO MAIN MENU\n\n";

	cout<<"Enter Your Number : ";
	cin>>c2;
	switch(c2){
	    case 1:
        {
                s_top:
                do{
                    system("cls");
                    cout<<"\t\t\tEnter Record Of Student "<<i+1<<endl;
                    cout<<"Enter Student Id : ";
                    cin>>s[i].studentId;
                    cout<<"Enter Student Name : ";
                    cin>>s[i].studentName;
                    cout<<"Record Created"<<endl<<endl;
                    cout<<"Do you want to add more (y/n)?";
                    cin>>d1;
                    system("cls");
                    if(d1=='y')
                    {
                        i++;
                        system("cls");
                        goto s_top;

                    }else{
                        j=i;
                        i++;
                        system("cls");
                        goto admMain;

                    }
            }while(d1!='n');
        }break;
        case 2:
        {
            do{
                for(int i=0;i<=j;i++){
                    cout<<"\t\t\tRecord Of Student "<<i+1<<endl;
                    cout<<"student Id : "<<s[i].studentId<<endl;
                    cout<<"student Name : "<<s[i].studentName<<endl;
                    cout<<"\n\n";
                }
                cout<<"Press y for goto admMain and n for exit : ";
                cin>>d1;
                if(d1=='y'){
                    system("cls");
                    goto admMain;
                }else{
                    exit(0);
                }
            }while(d1!='n');
        }break;
        case 3:
        {
            do{
                cout<<"Enter Id To Delete : ";
                cin>>idSearch;
                for(int i=0;i<=j;i++){
                    if(s[i].studentId == idSearch){
                        //s[i].studentId = NULL;
                        //s[i].studentName = NULL;
                        cout<<"Record Deleted\n\n\n";
                    }
                }
                cout<<"Press y for goto admMain and n for exit : ";
                cin>>d1;
                if(d1=='y'){
                    system("cls");
                    goto admMain;
                }else{
                    exit(0);
                }
            }while(d1!='n');
        }break;
        case 4:
        {
            b_top:
                do{
                    system("cls");
                    cout<<"\t\t\tEnter Record Of Book "<<i+1<<endl;
                    cout<<"Enter Book Id : ";
                    cin>>b[k].bookId;
                    cout<<"Enter Book Name : ";
                    cin>>b[k].bookName;
                    cout<<"Enter Book Author : ";
                    cin>>b[k].bookAuthor;
                    cout<<"Record Created"<<endl<<endl;
                    cout<<"Do you want to add more (y/n)?";
                    cin>>d1;
                    system("cls");
                    if(d1=='y')
                    {
                        k++;
                        system("cls");
                        goto b_top;

                    }else{
                        l=k;
                        k++;
                        system("cls");
                        goto admMain;

                    }
            }while(d1!='n');
        }break;
        case 5:
        {
            do{
                for(int k=0;k<=l;k++){
                    cout<<"\t\t\tRecord Of Student "<<k+1<<endl;
                    cout<<"Book Id : "<<b[k].bookId<<endl;
                    cout<<"Book Name : "<<b[k].bookName<<endl;
                    cout<<"Book Author : "<<b[k].bookAuthor<<endl;
                    cout<<"\n\n";
                }
                cout<<"Press y for goto admMain and n for exit : ";
                cin>>d1;
                if(d1=='y'){
                    system("cls");
                    goto admMain;
                }else{
                    exit(0);
                }
            }while(d1!='n');
        }break;

	}

}

//***************************************************************
//      SEARCH FUNCTION  FUNCTION
//****************************************************************

void searchFunction(){

}

void bookIssue(){

}
void bookDeposit(){

}

int main()
{

    cout<<"\n\n\n\tMAIN MENU";
    cout<<"\n\n\t(1) ADMINISTRATOR MENU";
    cout<<"\n\n\t(2) SEARCH BOOK";
    cout<<"\n\n\t(3) BOOK ISSUE";
    cout<<"\n\n\t(4) BOOK RETURN";
    cout<<"\n\n\t(5) EXIT\n\n";

    cout<<"Enter Your Choice : ";
    cin>>c1;
    switch(c1){
        case 1:
            system("cls");
            administrator();
            break;
        case 2:
            //searchBook();
        case 3:
            bookIssue();
            break;
        case 4:
            bookDeposit();
            break;

    }
    return 0;
}
