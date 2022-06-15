#include <iostream>

using namespace std;

   int nilai[5];
   int top;
   int menu;
   
void push ()
{
	int max = 4;
	
    if (top == max)
         {
            cout<<"Stack Penuh...!";
         }
    else
         {
            top++;
            cout<<"\nMasukan Data Ke Stack : ";
            cin>>nilai[top];
         }
}

void pop ()
{
        if (top==-1)
         {
            cout<<"Stack Kosong...! ";
        push();
         }
         else
         {
             cout<<"\nNilai Yang Di Pop : "<<nilai[top];
            top--;
         }
}
void print ()
{
        if (top==-1)
      {
             cout<<"Stack Kosong....!";
      }
      else
      {
            for (int i=0;i<=top;i++)
           {
                   cout<<nilai[i]<<" ";
           }
       }
}
void clear ()
{
        top=-1;
         cout<<"Proses Clear Berhasil";
}

int main(){

   top = -1;
   int max = 4;
   
   home:
   cout<< endl << "1. Push"<<endl;
   cout<<"2. Pop"<<endl;
   cout<<"3. Print"<<endl;
   cout<<"4, Clear"<<endl;
   cout<<"5, IsEmpty"<<endl;
   cout<<"6, IsFull"<<endl;
   cout<<"Pilihan Anda : ", cin >> menu;
           

   switch(menu)
   {
       case 1:
      push:
          push ();
         goto home;
         break;
        case 2:
          pop ();
         goto home;
         break;
        case 3:
         print();
         goto home;
            break;
        case 4:
          clear ();
         goto home;
             break;
      case 5:
          if (top==-1)
         {
         cout<<"Stack Is Empty";
         goto push;
         }
         else
         {
         cout<<"Terdapat Dalam Stack Yaitu : "; print();
         goto home;
         }
         break;
      case 6:
          if (top==max)
         {
         cout<<"Stack Is Full";
         pop ();
         }
         else
         {
         cout<<"Masih Dapat Di Isi";
         push();
         goto home;
         }
   }
return 0;
}
