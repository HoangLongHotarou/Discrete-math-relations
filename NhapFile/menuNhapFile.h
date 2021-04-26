#include"NhapFile.h"

void menu1()
{
    cout<<"0.thoat"<<endl;
    cout<<"1.Xem Ma Tran"<<endl;
    cout<<"2.Xem quan he cua ma tran"<<endl;
}

void TuongDuongOrThuTuOrNot1(bool a,bool b,bool c,bool d)
{
    if(a&&b&&d){cout<<"QH tuong duong\n";}
    else if(a&&c&&d){cout<<"QH thu tu\n";}
    else if(a&&b&&c&&d){cout<<"QH tuong duong va QH thu tu\n";}
    else{cout<<"Khong tuong duong cung ko thu tu\n";}
}

void XuatKetQua1(NhapFile u)
{
    u.Xuat();
    u.xuatCacPhanTu();
    bool phanXa=u.Diagonal(),doiXung=u.Symmetry(),phanDoiXung=u.AntiSymetry(),batCau=u.Transitive();
    cout<<"La phan xa: "<<phanXa<<endl;
    cout<<"La Doi xung: "<<doiXung<<endl;
    cout<<"La phan doi xung: "<<phanDoiXung<<endl;
    cout<<"La bat cau: "<<batCau<<endl;
    TuongDuongOrThuTuOrNot1(phanXa,doiXung,phanDoiXung,batCau);
}

void HamChucNang1()
{
    int x=0;
    int n=0;
    NhapFile u(n);
    u.File();
    while (true)
    {
        system("CLS");
        menu1();
        cout<<"Chon chuc nang : ";
        while(true)
        {
            cin>>x;
            if(0<=x&&x<=10)
                break;
        }
        if(x==0)break;
        switch (x)
        {
        case 1:
            cout<<"Xem ma tran: \n";
            u.Xuat();
            break;
        
        case 2:
            cout<<"Xem Ma Tran\n";
            XuatKetQua1(u);
            break;
        }
        system("pause");
    }
}

