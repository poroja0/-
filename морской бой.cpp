#include <iostream>
using namespace std;
int main()
{
    int a[10][10], x, y;
    int pol = 0, vis = 0; //проверка остались еще палубы
    
    cout 
    
    for(int i = 0; i<10; i++){ //спрашиваю поле
        for(int j = 0; j<10; j++){
            cin >> a[i][j];
        }
    }
    
    cout << "  "; //строки 10 на 10
    for(int i = 0; i<10; i++){
        cout << i << " ";
    }
    cout << endl;
    
    for(int i = 0; i<10; i++){
        cout << i << " ";
        
        for(int j = 0; j<10; j++){ //процесс присвоения состояния коробля или его отсутствия на поле
            if(a[i][j] == 0 or a[i][j] == 1)
                cout << "  ";
            else if(a[i][j] == 2)
                cout << "+ ";
            else if(a[i][j] == 3)
                cout << ". ";
        }
        cout << endl;
    }
    for (int i = 0; i< 10; i++){  //количество палуб на поле
        for(int j=0; j<10; j++){
            if (a[i][j] == 1){
                pol += 1;
            }
        }
    }
    
    while(pol != 0){  // пока есть палубы , то кол-во выстрелов +1. проверка, когда наступит победа
        vis += 1;
        cout << endl<< "Введите координаты выстрела";
        cin >> x >> y;
        if(a[x][y] == 1){
            a[x][y] = 2;
            pol = pol - 1;
        }
        else if(a[x][y] == 0){
            a[x][y] = 3;
        }
        
        cout << endl<< "Поле противника";
        cout << "  "; //строки 10 на 10 после выстелов пользователя
        for(int i = 0; i<10; i++){
            cout << i << " ";
        }
        cout << endl;
        
        for(int i = 0; i<10; i++){
            cout << i << " ";
        
            for(int j = 0; j<10; j++){ //процесс присвоения состояния палубы или его отсутствия на поле
                if(a[i][j] == 0 or a[i][j] == 1)
                    cout << "  ";
                else if(a[i][j] == 2)
                    cout << "+ ";
                else if(a[i][j] == 3)
                    cout << ". ";
            }
            cout << endl;
        }
        
        
        //проверка выстрела. если выстрел на координату, 
        
    }
    
    
    
   
    
    
    cout << "Количество выстрелов, за которое вы побили все корабли "<< vis;
    
    
    
   
                       
    return 0;
}