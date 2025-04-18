#include<iostream>
using namespace std;

class CounterObj {
    private :
        static int objCount;
    public :
        CounterObj(){
            objCount++;
        }
        static int getNumOfObj(){
            return objCount;
        }
};
int CounterObj::objCount=0;

int main()
{
    CounterObj a,b,c,d,e,f;
    cout<<a.getNumOfObj();// or we can use CounterObj::getNumOfObj instead of a
    
    
}

//create by mahan Kazem