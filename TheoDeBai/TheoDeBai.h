#include"../Matrix.h"

class TheoDeBai:public Matrix
{
    private:
    public:
    TheoDeBai(int n):Matrix(n){
    }
    
    void ALessThanOfEquadB()
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i<=j)vect[i][j]=1;
    }

    void AEqualBPlus1()
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i==j+1)vect[i][j]=1;
    }

    void AEqualBSub1()
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i==j-1)vect[i][j]=1;
    }

    void APlusBEqualN(int n)
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i+1+j+1==n)vect[i][j]=1;
    }

    void APlusBELessOrqualNPlus1(int n)
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i+1+j+1<=n+1)vect[i][j]=1;
    }

    void Adiffernece0()
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i+1!=0)vect[i][j]=1;
    }

    void ASubBEven()
    {
         for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if((i-j)%2==0)vect[i][j]=1;
    }

    void AEqualBPlusOrSub1()
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(i==j+1||i==j-1)vect[i][j]=1;
    }

    void TwoASubBEqual0()
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if((2*(i+1)-(j+1))==0)vect[i][j]=1;
    }

    void ADupBModn(int n)
    {
        for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if((i+1)%n==(j+1)%n)vect[i][j]=1;
    }
};