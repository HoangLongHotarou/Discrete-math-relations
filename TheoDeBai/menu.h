#include"TheoDeBai.h"

void menu()
{
    cout<<"0.thoat"<<endl;
    cout<<"1.tao ma tran theo n (Mac dinh n=4)"<<endl;
    cout<<"2.a<=b"<<endl;
    cout<<"3.a==b+1: \n";
    cout<<"4.a==b-1: \n";
    cout<<"5.a+b==n: \n";
    cout<<"6.a+b<=n+1: \n";
    cout<<"7.a!=0: \n";
    cout<<"8.(a-b)%2==0: \n";
    cout<<"9.a==b-1 Or a==b+1: \n";
    cout<<"10.2a-b==0:\n";
    cout<<"11.a==b(mod n):\n";
}

void ResetMaTrix(TheoDeBai& c)
{
    c.vect.clear();
    c.TaoMaTran();
}

void TuongDuongOrThuTuOrNot(bool a,bool b,bool c,bool d)
{
    if(a&&b&&d){cout<<"QH tuong duong\n";}
    else if(a&&c&&d){cout<<"QH thu tu\n";}
    else{cout<<"Khong tuong duong cung ko thu tu\n";}
}

void XuatKetQua(TheoDeBai c)
{
    c.Xuat();
    c.xuatCacPhanTu();
    bool phanXa=c.Diagonal(),doiXung=c.Symmetry(),phanDoiXung=c.AntiSymetry(),baCau=c.Transitive();
    cout<<"La phan xa: "<<phanXa<<endl;
    cout<<"La Doi xung: "<<doiXung<<endl;
    cout<<"La phan doi xung: "<<phanDoiXung<<endl;
    cout<<"La bat cau: "<<baCau<<endl;
    TuongDuongOrThuTuOrNot(phanXa,doiXung,phanDoiXung,baCau);
}

void HamChucNang()
{
    int x;
    int n=4;
    TheoDeBai c(n);
    while (true)
    {
        ResetMaTrix(c);
        system("CLS");
        menu();
        cout<<"Chon chuc nang : ";
        while(true)
        {
            cin>>x;
            if(0<=x&&x<=20)
                break;
        }
        if(x==0)break;
        switch (x)
        {
        case 1:
            cout<<"Tao ma tran theo n: \n";
            cout<<"Nhap n: ";
            cin>>n;
            c.setN(n);
            ResetMaTrix(c);
            c.Xuat();
            break;
        
        case 2:
            cout<<"a<=b: \n";
            c.ALessThanOfEquadB();
            XuatKetQua(c);
            break;

        case 3:
            cout<<"a==b+1: \n";
            c.AEqualBPlus1();   
            XuatKetQua(c);
            break;

        case 4:
            cout<<"a=b-1: \n";
            c.AEqualBSub1();    
            XuatKetQua(c);
            break;

        case 5:
            printf("a+b=%d\n",n);
            c.APlusBEqualN(n);  
            XuatKetQua(c);
            break;

        case 6:
            printf("a+b<=%d\n",n+1);
            c.APlusBELessOrqualNPlus1(n);   
            XuatKetQua(c);
            break;

        case 7:
            cout<<"7.a!=0: \n";
            c.Adiffernece0();   
            XuatKetQua(c);
            break;

        case 8:
            cout<<"8.(a-b)%2==0: \n";
            c.ASubBEven();   
            XuatKetQua(c);
            break;

        case 9:
            cout<<"9.a==b-1 Or a==b+1: \n";
            c.AEqualBPlusOrSub1();   
            XuatKetQua(c);
            break;

        case 10:
            cout<<"10.2a-b==0:\n";
            c.TwoASubBEqual0();   
            XuatKetQua(c);
            break;
        
        case 11:
            cout<<"11.a==b(mod n):\n";
            cout<<"Nhap n: ";
            int s;
            cin>>s;
            c.ADupBModn(s);   
            XuatKetQua(c);
            break;
        }
        system("pause");
    }
}

