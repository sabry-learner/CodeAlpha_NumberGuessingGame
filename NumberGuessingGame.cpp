#include<iostream>
#include<cstdlib>
#include<Windows.h>
#include<ctime>
using namespace std;
void menu_bar(){
    cout<<" _________________________________________________________________\n";
    cout<<"|                   Number Guessing Game \x02                        |\n";
    cout<<"|________________________________________________________________|\n\n";
    cout<<" _________________________________________________________________\n";
    cout<<"|                1- Easy Level .                                  |\n";
    cout<<"|                2- Meduim Level .                                |\n";
    cout<<"|                3- Hard Level .                                  |\n";
    cout<<"|                0- Exit .                                        |\n";


}
int score=0;
void waiting (){
    cout<<"\n\n";
    for(int i=3;i>=1;i--){
        cout<<"Waiting Second "<<i<<" ...\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(1000);
    }
    system("cls");
}

void level_one (){
    int trys=5;
    bool success=false;
    srand(time(0));
    int secret=rand()%10+1; // rang from 0 to 10

    do{
        int guess;
        cout << " ____________________________________________________________________\n";
        cout << "|       Level : " << 1 << "                                                    |\n";
        cout << "|       Score : " << score << "                                                    |\n";
        cout << "|       Trys  : " << trys <<"                                                    |\n";
        cout << "|____________________________________________________________________|\n";
        cout<<"\nEnter Guessing Number From 0 To 10: ";
        cin>>guess;
        if(guess>secret)
            cout<<"\n\n\t\tToo High !! , try again :) .\n";
        else if(guess<secret)
            cout<<"\n\n\t\tToo Low !! , try again :) .\n";
        else{
            cout<<"\n\n\t\tYou Winning :)\n";
            score++;
            Sleep(1000);
            return ;
        }
        trys--;
        cout<<"\n\n-----------------------------------------------------------------------\n";
        waiting();
        system("cls");
    }while(trys!=0);
    if(success==false){

        cout<<"\n\n\t\tGame Over !!!\n";
        if(score<=0){
            score=0;
        }else
            score--;
        Sleep(1000);
        return ;
    }
}
void level_two (){
    int trys=4;
    bool success=false;
    srand(time(0));
    int secret=rand()%50+1; // rang from 0 to 50

    do{
        int guess;
        cout << " ____________________________________________________________________\n";
        cout << "|       Level : " << 2 << "                                                    |\n";
        cout << "|       Score : " << score << "                                                    |\n";
        cout << "|       Trys  : " << trys <<"                                                    |\n";
        cout << "|____________________________________________________________________|\n";
        cout<<"\nEnter Guessing Number From 0 To 50: ";
        cin>>guess;
        if(guess>secret)
            cout<<"\n\n\t\tToo High ! , try again :) .\n";
        else if(guess<secret)
            cout<<"\n\n\t\tToo Low ! , try again :) .\n";
        else{
            cout<<"\n\n\t\tYou Winning :)\n";
            Sleep(1000);
            score++;
            return ;
        }
        trys--;
        cout<<"\n\n-----------------------------------------------------------------------\n";
        waiting();
        system("cls");
    }while(trys!=0);
    if(success==false){
        cout<<"\n\n\t\tGame Over !!!\n";
        if(score<=0){
            score=0;
        }else
            score--;
        Sleep(1000);
        return ;
    }
}
void level_three (){
    int trys=3;
    bool success=false;
    srand(time(0));
    int secret=rand()%100+1; // rang from 0 to 100

    do{
        int guess;
        cout << " ____________________________________________________________________\n";
        cout << "|       Level : " << 3 << "                                                    |\n";
        cout << "|       Score : " << score << "                                                    |\n";
        cout << "|       Trys  : " << trys <<"                                                    |\n";
        cout << "|____________________________________________________________________|\n";
        cout<<"\nEnter Guessing Number From 0 To 100 : ";
        cin>>guess;
        if(guess>secret)
            cout<<"\n\n\t\tToo High ! , try again :) .\n";
        else if(guess<secret)
            cout<<"\n\n\t\tToo Low ! , try again :) .\n";
        else{
            cout<<"\n\n\t\tYou Winning \x02 \x02\n";
            Sleep(10000);
            score++;
            return ;
        }
        trys--;

        cout<<"\n\n-----------------------------------------------------------------------\n";
        waiting();
        system("cls");
    }while(trys!=0);
    if(success==false){
        cout<<"\n\n\t\tGame Over !!!\n";
        if(score<=0){
            score=0;
        }else
            score--;
        Sleep(1000);
        return ;
    }
}

int main(){
    int num;
    while(true){
        menu_bar();
        cout<<"|   Enter The Level Number : ";
        cin>>num;

        switch(num)
        {
            case 1:
                system("cls");
                level_one();
                break;
            case 2:
                system("cls");
                level_two();
                break;
            case 3:
                system("cls");
                level_three();
                break;
            case 0:
                system("cls");
                cout<<"\t\t  Thanks For Playing My Game \x02\x02\n";
                exit(0);
            default:
                cout<<"\n\n\t\tInvalid Level Number , Try again !!\n";
                Sleep(1000);
                break;

        }
        system("cls");

    }
    return 0;
}
