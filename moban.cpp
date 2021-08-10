#include <iostream>

using namespace std;



class Branch{
private:
    string Branchname;
    float Profit;
    int NumEmployee;
public:
    Branch(string name,float money,int num):Branchname(name),Profit(money),NumEmployee(num){}
    string get_branchname()const{return Branchname;}
    float get_profit()const{return Profit;}
    int get_numemployee()const{return NumEmployee;}
};
Branch compareName(Branch A,Branch B){
    string str1,str2;
    str1=A.get_branchname();
    str2=B.get_branchname();
    if(str1.compare(str2)==1)
    {
        cout << "Branch with name "<<A.get_branchname()<<" is bigger."<<"\n";
        //return A;
        return A;
    }
    else{
            cout << "Branch with name "<<B.get_branchname()<<" is bigger."<<"\n";
            //return B;
            return B;
    }

}
Branch compareprofit(Branch A,Branch B){
    float str1,str2;
    str1=A.get_profit();
    str2=B.get_profit();
    if(str1>str2)
    {
        cout << "Branch with name "<<A.get_branchname()<<" has higher profit."<<"\n";
        //return A;
        return A;
    }
    else{
            cout << "Branch with name "<<B.get_branchname()<<" has higher profit."<<"\n";
            //return B;
            return B;
    }

}
Branch compareNumEmp(Branch A,Branch B){
    int str1,str2;
    str1=A.get_numemployee();
    str2=B.get_numemployee();
    if(str1>str2)
    {
        cout << "Branch with name "<<A.get_branchname()<<" has more employee."<<"\n";

        //return A;
        return A;

    }
    else{
            cout << "Branch with name "<<B.get_branchname()<<" has more employee."<<"\n";
       //return B;
       return B;
    }
}
template<typename T,typename CMP>
T BranchMax(T A,T B,CMP (*C)(T,T))
{
    C(A,B);
}
int main()
{
    Branch H("ZOO",3456.70,120);
    Branch K("MEX",7654.30,50);
    compareName(H,K);
    compareprofit(H,K);
    compareNumEmp(H,K);

    BranchMax(H,K,compareName);
    BranchMax(H,K,compareprofit);
    BranchMax(H,K,compareNumEmp);

    return 0;
}
