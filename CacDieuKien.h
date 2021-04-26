#pragma once
#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>
#define matrix vector<vector<int>>

using namespace std;

class CacDieuKien
{
private:
    int n;
public:
    matrix vect;
    CacDieuKien(int n){
        this->n=n;
    }
    void setN(int n){ this->n=n;}
    int getN(){return n;}

    bool Diagonal()
    {
        for (int i = 0; i < vect.size(); i++)
        {
            if(vect[i][i]!=1)
                return false;
        }
        return true;
    }

    bool Symmetry()
    {
        //bool kq=false;
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect.size(); j++)
            {
                if(vect[i][j]!=vect[j][i])
                    return false;
            }
        }
        return true;
    }

    bool AntiSymetry()
    {
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect.size(); j++)
            {
                if(i!=j)
                {
                    if(vect[i][j]!=0 && vect[j][i]!=0)
                        return false;
                }
            }
        }
        return true;
    }

    bool Transitive()
    {
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect.size(); j++)
            {
                if (vect[i][j])
                {
                    for (int k = 0; k < vect.size(); k++)
                    {
                        if (vect[j][k] && !vect[i][k])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};