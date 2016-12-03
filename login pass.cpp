#include <iostream.h>
#include <conio.h>
#include <cstring.h>
main(){
 string user;
 char pass[10];

 login:
 cout<<"\nlog in Administrator";
 cout<<"\n---------------------";
 cout<<"\nUser           : ";cin>>user;
 cout<<"\nPassword       : ";cin>>pass;
  if(user=="001"&&strcmp(pass,"admin")==0)
  {
  cout<<"/nSelamat Datang"<<user;
  }

  else
  {
  cout<<"/nLOGIN GAGAL";
  goto login;
  }
getch();
}
