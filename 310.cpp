#include<iostream>
#include<string>
using namespace std;

class engine{
public:
        virtual void specs(){
         cout<<"objective is to overwrite"<<"\n";
        }

        void nonVF() {
         string engine = "312 cc,liquid cooled,DOHC";
         cout<<engine<<"\n";
        }

        virtual void price(){
         long mrp = 0;
         cout<<mrp<<"\n";
        }
    
};

class A_310_RR :public engine{
public:
    void specs(){
        string wheelbase = "1365 mm";
        cout<<wheelbase<<"\n";

    }
    void nonVF() {
         string engine = "312 cc";
         cout<<engine<<"\n";
        }
    virtual void price(){
        long mrp = 291564;
        cout<<mrp<<"\n";
        cout<<"----------------------------------"<<endl;
    }
};

class G_310_R : public engine{
    public:
    void specs(){
        string wheelbase = "1380 mm";
        cout<<wheelbase<<"\n";
    }
    void nonVF() {
         string engine = "Air cooled";
         cout<<engine<<"\n";
        }
    virtual void price(){
        long mrp = 288144;
        cout<<mrp<<"\n";
        cout<<"----------------------------------"<<endl;
    }
};

class G_310_GS : public engine{
    public:
    void specs(){
        string wheelbase = "1420 mm";
        cout<<wheelbase<<"\n";
    }
    virtual void price(int x){
        long mrp = 333748;
        cout<<mrp<<"\n";
        cout<<"----------------------------------"<<endl;
    }
};

int main(){
    engine *e[3];
    A_310_RR a;
    G_310_R b;
    G_310_GS c;
    e[0]=&a;
    e[1]=&b;
    e[2]=&c;

    e[0]->specs();
    e[0]->nonVF();
    e[0]->price();
    
    e[1]->specs();
    e[1]->nonVF();
    e[1]->price();
    
    e[2]->specs();
    e[2]->nonVF();
    e[2]->price();   
}