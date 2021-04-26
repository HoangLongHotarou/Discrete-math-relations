#include"NhapFile/menuNhapFile.h"
#include"TheoDeBai/menu.h"

void menu2()
{
    cout<<"0.thoat"<<endl;
    cout<<"1.Doc File"<<endl;
    cout<<"2.Cac Dieu Kien"<<endl;
}

void MenuProcess()
{
    int x=0;
    while (true)
    {
        system("CLS");
        menu2();
        cout<<"Chon chuc nang : ";
        while(true)
        {
            cin>>x;
            if(0<=x&&x<=2)
                break;
        }
        if(x==0)break;
        switch (x)  
        {
        case 1:
            HamChucNang1();
            break;
        
        case 2:
            HamChucNang();
            break;
        }
        system("pause");
    }
}