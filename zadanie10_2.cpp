#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

class fib
{
    private:
        int *tab_;
        int size;
    public:
        fib(int rozmiar, int a, int b)
        {
            size = rozmiar;            
            tab_ = new int[rozmiar];
            tab_[0]=a;
            tab_[1]=b;
            int c;
            for(int i=2;i<rozmiar;i++)
            {   
                    c=a+b;
                    tab_[i] = c;
                    a=b;
                    b=c;
            }     
        }
        void wypisz()
        {
            for(int i=0; i<size; i++)
            {
                cout << tab_[i] << endl;
            }
        }
        void remove()
        {
           // int *tab2_ = new int[size-1];
            
            vector <int> tablica;
            for(int i=0; i<size-1; i++)
            {
                tablica[i] = tab_[i+1];
            }

            delete [] tab_;
            tab_ = new int[size-1];

            for(int i=0; i<size-1; i++)
            {
                tab_[i] = tablica[i];
            }
        }

    ~fib()
    {
        delete [] tab_;
        // delete [] tab2_;
    }
};

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    fib COS(a, b, c);
    COS.wypisz();
    cout << endl;
    COS.remove();
    COS.wypisz();
}