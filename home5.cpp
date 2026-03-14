 #include<iostream>
 using namespace std;
 int main()
 {
    int holidays;
    int norm=30000;
    cout<<"Enter number of holidays:" ;
    cin>>holidays;
    int workingdays,totalplayminutes;
    workingdays=365-holidays;
    totalplayminutes=(workingdays*63) + (holidays*127) ;
int difference =norm-totalplayminutes ;
        int hours= difference/60;
        int minutes= difference%60;

    if(totalplayminutes<norm) {
        cout<<"Tom sleeps well" <<endl;
        cout<<hours<<"hours and"<<minutes<<"minutes less for play"<<endl;
    }else{
        cout<<"Tom will run away" <<endl;
        cout<<hours<<"hours and"<<minutes<<"minutes more for play"<<endl;
    }
    return 0;
 }