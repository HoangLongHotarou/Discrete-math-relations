#pragma once
#include"CacDieuKien.h"

class Matrix:public CacDieuKien{
public:
    //matrix vect={{1,1,0,1},{1,1,1,0},{0,1,1,1},{1,0,1,1}};
    //matrix vect={{1,1,0,1},{1,0,1,0},{0,0,1,1},{1,0,0,1}};
    //matrix vect={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    //matrix vect={{1,1,1},{0,0,0},{0,0,0}};
    Matrix(int n):CacDieuKien(n){}

    void TaoMaTran()
    {
        for(int i=0;i<getN();i++)
        {
            vector<int> v1;
            for(int j=0;j<getN();j++)
            {
                v1.push_back(0);                
            }
            vect.push_back(v1);
        } 
    }

    void Xuat()
    {
        int i=0;
        cout<<setiosflags(ios::left);
        cout<<"   |";
        for (int z = 0; z < vect.size(); z++)
        {
            cout<<setw(3)<<z+1;
        }
        cout<<endl;
        cout<<"----";
        for (int z = 0; z < vect.size(); z++)
        {
            cout<<"---";
        }
        cout<<endl;
        for(int i=0;i<vect.size();i++)
        {
            cout<<setw(3)<<i+1<<"|";
            for(int j=0;j<vect.size();j++)
            {
                cout<<setw(3)<<vect[i][j];
            }
            cout<<endl;
        } 
    }
    
    void xuatCacPhanTu()
    {
        cout<<"R = {";
         for (int i = 0; i < vect.size(); i++)
            for(int j=0; j < vect.size();j++)
                if(vect[i][j]==1)
                    printf("(%d , %d) ",i+1,j+1);
        cout<<"}\n";
    }
   
    // void Xuat()
    // {
    //     for(int i=0;i<vect.size();i++)
    //     {
    //         for(int j=0;j<vect.size();j++)
    //         {
    //             cout<<vect[i][j]<<"  ";
    //         }
    //         cout<<endl;
    //     } 
    // }
};