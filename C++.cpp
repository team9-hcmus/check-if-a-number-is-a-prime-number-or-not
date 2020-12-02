using namespace std;

int main()
{
    int n,dem=0;
    cout <<"Nhap so n ";
    cin>>n;

    for (int i=1;i<=n;i++)
{
        if (n%i==0)
        {
            dem++;
        }
        }
        if(dem==2)
            {
                cout<<"La so nguyen to";
            }
        else
            {
                cout<<"Ko la so nguyen to";
            }

    return 0;
}

