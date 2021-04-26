#include"../MaTrix.h"

class NhapFile:public Matrix{
    private:
        int m;
        int n;
    public:
    NhapFile(int n):Matrix(n){}

    void File()
    {
        ifstream f("matrix.txt");
        f.open("./Filetxt/matrix.txt");
        f >> n;
        setN(n);
        TaoMaTran();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                f >> vect[i][j];
            }
        }
        f.close();
    }
};
