//Muhammad Zidane Zaki Rafish [15-2021-154]
//UAS

#include <limits.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int x [3];
    int y [3];
    int i;
    double xiyi;
    double sigxi,sigyi,sigxy, sigxiyi,powsigxi,powsigyi,atas,bawah1,bawah2,powtosigx,powtosigy,bawtot,bawx,bawy;
    double r,r2,pkt, koed;
    


cout<<"Korelasi pearson"<<endl;

for (i = 1; i < 4; i++){

    cout<<"input x" << i <<" : ";cin >> x[i];

    cout<<"input y" << i <<" : ";cin >> y[i];

}

sigxy = ((x[1] * y[1]) + (x[2] * y[2]) + (x[3] * y[3]));
sigxi = x[1] + x[2] + x[3];
sigyi = y[1] + y[2] + y[3];
sigxiyi = sigxi * sigyi;
powsigxi = pow(x[1],pkt) + pow(x[2],pkt) + pow(x[3],pkt);
atas = sigxy-sigxiyi;
powtosigx = pow(sigxi,pkt);
powtosigy = pow(sigyi,pkt);
bawx = ((3*powsigxi)-powtosigx);
bawah1 = sqrt(bawx);
bawy =((3*powsigyi)-powtosigy);
bawah2 = sqrt(bawy);
bawtot = bawah1*bawah2;


r = 3* atas / bawtot;

cout << "sigX : " << sigxi << endl;
cout << "sigY : " << sigyi  << endl;
cout << "XY : " << sigxy << endl;
cout << "R = " << r << setprecision(3) <<endl;//error
koed = (r2 * 1);
cout << "Koefisien determinasi : " << koed << endl;

if (r >= 0 && r < 0,1 ){
    cout<<"korelasi diabaikan";
}

else if (r >= 0,1 && r < 0,3 ){
    cout<<"korelasi rendah";
}

else if (r >= 0,30 && r < 0,5 ){
    cout<<"korelasi moderat";
}

else if (r >= 0,70){
    cout<<"korelasi diabaikan"<<endl;
}
cout<<""<<endl;
r2 = (pow(r,pkt));



}
