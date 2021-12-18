#include<iostream>

using namespace std;

main(){
    char cSquare1('1');
    char cSquare2('2');
    char cSquare3('3');
    char cSquare4('4');
    char cSquare5('5');
    char cSquare6('6');
    char cSquare7('7');
    char cSquare8('8');
    char cSquare9('9');
    int iPlayerTurn(1);
    bool bGameOver(true);

    // Main game loop
    do{
        // print board
        cout<<cSquare1<<"|"<<cSquare2<<"|"<<cSquare3<<endl;
        cout<<"-+-+-"<<endl;
        cout<<cSquare4<<"|"<<cSquare5<<"|"<<cSquare6<<endl;
        cout<<"-+-+-"<<endl;
        cout<<cSquare7<<"|"<<cSquare8<<"|"<<cSquare9<<endl;
    }while(1);
    // set player marker: Player 1 uses X and player 2 uses O
    char cPlayerMark;
    if(iPlayerTurn==1){
        cPlayerMark=='X';
    }else{
        cPlayerMark=='O';
    }

    // prompt the player for a move
    cout<<"Player "<<iPlayerTurn<<"'s move: "<<endl;
    bool bValidMove;

    do{
        char cNextMove;
        cin>>cNextMove;
        bValidMove=true;

        // Check for a valid move
        if(cNextMove=='1' && cSquare1=='1'){
            cSquare1=cPlayerMark;
        }else if(cNextMove=='2' && cSquare1=='2'){
            cSquare2=cPlayerMark;
        }else if(cNextMove=='3' && cSquare1=='3'){
            cSquare3=cPlayerMark;
        }else if(cNextMove=='4' && cSquare1=='4'){
            cSquare4=cPlayerMark;
        }else if(cNextMove=='5' && cSquare1=='5'){
            cSquare5=cPlayerMark;
        }else if(cNextMove=='6' && cSquare1=='6'){
            cSquare6=cPlayerMark;
        }else if(cNextMove=='7' && cSquare1=='7'){
            cSquare7=cPlayerMark;
        }else if(cNextMove=='8' && cSquare1=='8'){
            cSquare8=cPlayerMark;
        }else if(cNextMove=='9' && cSquare1=='9'){
            cSquare9=cPlayerMark;
        }
        else{
            cout<<"Invalid Move, Try again."<<endl;
            bValidMove=false;
        }
    }while(!bValidMove);

    // check for end of game conditions
    if(cSquare1!='1'){
        if(cSquare2==cSquare1 && cSquare3==cSquare1){
            bGameOver=true;
        }
        if(cSquare4==cSquare1 && cSquare7 ==cSquare1){
            bGameOver=true;
        }
    }
    if(cSquare5!='5'){
        if(cSquare1==cSquare5 && cSquare9==cSquare5){
            bGameOver=true;
        }
        if(cSquare2==cSquare5 && cSquare8==cSquare5){
            bGameOver=true;
        }
        if(cSquare4==cSquare5 && cSquare6==cSquare5){
            bGameOver=true;
        }
        if(cSquare3==cSquare5 && cSquare7==cSquare5){
            bGameOver=true;
        }
    }
    if(cSquare9 !='9'){
        if(cSquare3==cSquare9 && cSquare6==cSquare9){
            bGameOver=true;
        }
        if(cSquare7==cSquare9 && cSquare8==cSquare9){
            bGameOver=true;
        }
    }
    // Need to check the board full(no win condition)
    if(cSquare1!='1' && cSquare2!='2' && cSquare3!='3' && cSquare4!='4' &&  cSquare5!='5' && cSquare6!='6' && cSquare7!='7'  && cSquare8!='8' && cSquare9!='9' && !bGameOver){
        bGameOver=true;
        bWimGame=false;
    }
}