#include <iostream>
#include <iostream>
#include <iostream>

using namespace std;

class fib
{
    private:
        int *tab_;
        int size;
    public:
        fib(int rozmiar)
        {
            size = rozmiar;            
            tab_ = new int[rozmiar];

            long long a = 0, b = 1;
    
            for(int i=0;i<rozmiar;i++)
            {
                    tab_[i] = b;
                    b += a;
                    a = b-a;
            }     
        }
        void wypisz()
        {
            for(int i=0; i<size; i++)
            {
                cout << tab_[i] << endl;
            }
        }
        void add()
        {
            tab_[size] = tab_[size-1] + tab_[size-2];
            size++;
        }

    ~fib()
    {
        delete [] tab_;
    }
};

int main()
{
    int a;
    cin >> a;
    fib COS(a);
    COS.wypisz();
    cout << endl;
    COS.add();
    COS.wypisz();
}