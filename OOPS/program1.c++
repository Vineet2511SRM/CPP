#include <iostream>
using namespace std;

class calc1
{
    int var1,var2,res;
    public:
    int oper(int n1=15,int n2=20){
        var1=n1;var2 = n2;
        cout<< (res = var1+var2);
        return 0;
    }
};

int main()
{
    calc1 obj;
    obj.oper();
    return 0;

}