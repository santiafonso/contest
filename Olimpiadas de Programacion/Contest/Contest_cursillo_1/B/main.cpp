#include <bits/stdc++.h> 
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define sz(x) (int)x.size() 
#define fst first
#define snd second 
#define all(x) x.begin(),x.end() 
#define REGALO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); //mas rapido las lecturas y escrituras SIEMPRE USAR "\n" ej: cout<<"\n"

using namespace std;
typedef long long ll;

int main(){

    ll t,n;cin >> t;

    fore(i,0,t){

        cin>>n;
        char a[n];
        char b[n];
        int rta,aux;rta=1;aux=0;
        fore(i,0,n){

            char x;
            cin >> x;
            if(x=='G'){a[i]=x;}
            if(x=='B'){a[i]='G';}
            if(x=='R'){a[i]='R';}

        }

        fore(i,0,n){

            char x;
            cin >> x;
            if(x=='G'){b[i]=x;}
            if(x=='B'){b[i]='G';}
            if(x=='R'){b[i]='R';}

        }

        fore(i,0,n){

            if(a[i]==b[i]){
                aux=1;
            }else{aux=0;}
            rta=rta*aux;
            
        }
        if(rta==1){cout<<"YES"<<"\n";}
        else{cout<<"NO"<<"\n";}

    }

}