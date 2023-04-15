#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<stddef.h>

using namespace std;

void draw_line(int n , char ch); // ekrani cizmek icin
void board(); // oyun tahtasini cizmek icin
void gamescore(char name1[], char name2[], int p1, int p2); // oyun skorunu gosterir
void play_dice(int & score); // zar atmak icin

int main ()

{

    int player1 = 0;   // oyuncularin skorlarini tutar
    int player2 = 0;  // oyuncularin skorlarini tutar
    int lastposition; // son pozisyonu belirler
    char player1name[80];
    char player2name[80];

    system("cls");
    srand(time(NULL)); // zar atmak icin random!!
     
    draw_line(50, '=');
    cout << "\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n"; // oyun basligi
    draw_line(50, '=');

    cout << "\n\n\nEnter Name of player 1 :"; // oyuncu birin adini girer
    gets(player1name);

    cout << "\n\n\nEnter Name of player 2 :";  // oyuncu ikinin adini girer
    gets(player2name);

    while (player1 <= 100 && player2 <= 100) // oyunun hangi koşullarda bitecegini gösterir

    {

        board();
        gamescore(player1name, player2name, player1, player2);

        cout << "\n\n" << player1name << " it's your turn. Press any key to play"; // oyunun oynanacagi sirayi belirler
        getch();

        lastposition = player1; // oyunun oynanacagi sirayi belirler

        play_dice(player1);

        if (player1 < lastposition) // yilanlarin yemek yemeleri durumunda

        {

            cout << "Oops!! You got bitten by snake. You are now at position " << player1 << "\n"; // yilanlarin yemek yemeleri durumunda
            
        }
        

        else if (player1 > lastposition + 6) // oyncunun 6 den fazla atmasi durumunda
          
          {

          
            cout << "Great!! You got a ladder. You are now at position " << player1; // merdivenlerin yukari cikmalar durumunda

            cout << "\n\n--->" << player2name << " Now your Turn >> Press any key to play ";

          }

            getch();

        


    lastposition = player2; // oyunun oynanacagi sirayi belirler

    play_dice(player2);

    if (player2 < lastposition)

    {
            
            cout << "Oops!! You got bitten by snake. You are now at position " << player2;
           
    
    }
    
        else if (player2 > lastposition + 6)
    
        {
    
            cout << "Great!! You got a ladder. You are now at position " << player2;

        }

            getch();
    
        
       

}

    system("cls");
    cout<<"\n\n\n";
    draw_line(50, '+');
    cout << "\n\n\t\tRESULT\n\n";
    draw_line(50, '+');
    cout << endl;
    gamescore(player1name, player2name, player1, player2);
    cout << "\n\n\n";

    if (player1 >= player2)

    {

      cout << player1name << " !! You are the winner of the game\n\n";

    }


    else

    {


    cout << player2name << " !! You are the winner of the game\n\n";

    }


    draw_line(50, '+');
    getch();

}

void draw_line(int n, char ch) 

{
    int i;

    for ( i = 0; i < n; i++)
     
     {
        cout<<ch;

     }
       

}

void board() 

{

    system("cls");
    cout << "\n\n";
    draw_line(50, '-');
    cout << "\n\t\tSNAKE AT POSITION\n";
    draw_line(50, '-');
    cout << "\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n"; // yilanlarin yemek yemeleri durumunda
    draw_line(50, '-');
    cout << "\n\t\t LADDER AT POSITION\n";
    draw_line(50, '-');
    cout << "\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n"; // merdivenlerin yukari cikmalar durumunda
    draw_line(50, '-');
    cout << endl;

}

void gamescore(char name1[], char name2[], int p1, int p2) 

{

    cout << "\n";
    draw_line(50, '~');
    cout << "\n\t\tGAME STATUS\n";
    draw_line(50, '~');
    cout << "\n\t--->" << name1 << " is at position " << p1 << endl;
    cout << "\t--->" << name2 << " is at position " << p2 << endl;
    draw_line(50, '_');
    cout << endl;

}

void play_dice(int & score) 

{
    
    system("color B");
    int dice;
    dice = rand() %6 +1; // zar atma islemi
    cout << "\nYou got " << dice << " Point !! "; // zar atma isleminden sonra elde edilen puan
    score = score + dice;  // puanin toplanmasi
    cout << "Now you are at position " << score; // puanin toplanmasi sonrasi elde edilen puan
    switch (score) 

	{

    case 98:
        score = 28;
        break;

    case 95:
        score = 24;
        break;

    case 92:
        score = 51;
        break;

    case 83:
        score = 19;
        break;

    case 73:
        score = 1;
        break;

    case 69:
        score = 33;
        break;

    case 64:
        score = 36;
        break;

    case 59:
        score = 17;
        break;

    case 55:
        score = 7;
        break;

    case 52:
        score = 11;
        break;

    case 48:
        score = 9;
        break;

    case 46:
        score = 5;
        break;

    case 44:
        score = 22;
        break;

    case 8:
        score = 26;
        break;

    case 21:
        score = 82;
        break;

    case 43:
        score = 77;
        break;

    case 50:
        score = 91;
        break;

    case 54:
        score = 93;
        break;

    case 62:
        score = 96;
        break;

    case 66:
        score = 87;
        break;

    case 80:
        score = 100;

    }


}






