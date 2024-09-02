#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    
    //Quantity
    int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qpizza=0,qfries=0;
    //food items sold
    int srooms=0,spasta=0,sburger=0,snoodles=0,shake=0,spizza=0,sfries=0;
    //total prices of items
    int trooms=0,tpasta=0,tburger=0,tnoodles=0,tshake=0,tpizza=0,tfries=0;
    
    cout<<"\n\t\t\t\t\t\t\t Welcome To MS world of munching";
    cout<<"\n Quantity of items we have:";
    cout<<"\n Rooms available :";
    cin>>qrooms;
    cout<<"\n Pasta available :";
    cin>>qpasta;
    cout<<"\n Burger available :";
    cin>>qburger;
    cout<<"\n Noodles available :";
    cin>>qnoodles;
    cout<<"\n Shakes available :";
    cin>>qshake;
    cout<<"\n Pizza available :";
    cin>>qpizza;
    cout<<"\n Fries available :";
    cin>>qfries;
    
    m:
    cout<<"\n\t\t\t please select from the menu options:";
    cout<<"\n\n1) rooms:";
    cout<<"\n\n2) pasta:";
    cout<<"\n\n3) burger:";
    cout<<"\n\n4) noodles:";
    cout<<"\n\n5) shakes:";
    cout<<"\n\n6) pizza:";
    cout<<"\n\n7) fries:";
    cout<<"\n\n8) information regarding sales and collection:";
    cout<<"\n\n9)Exit";
    
    cout<<"\n\n please enter ur choice:";
    cin>>choice;
    switch(choice)
    {
                  case 1:
                       cout<<"\n\n enter the number of rooms you want:";
                       cin>>quant;
                       if(qrooms-srooms>=quant)
                       {
                         srooms=srooms+quant;
                         trooms=trooms+quant*1000;
                         cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
                       }
                       else
                            cout<<"\n\t "<<qrooms-srooms<<"rooms remaining in hotel";
                            break;
                   case 2:
                        cout<<"\n\n enter pasta quantity you want:";
                        cin>>quant;
                        if(qpasta-spasta>=quant)
                        {
                          spasta=spasta+quant;
                          tpasta=tpasta+quant*100;
                          cout<<"\n\n\t\t"<<quant<<"pasta delievered to you";
                        }
                        else
                             cout<<"\n\t "<<qpasta-spasta<<"pasta quantity remaining";
                             break;
                   case 3:
                         cout<<"\n\n enter the burger you want:";
                         cin>>quant;
                         if(qburger-sburger>=quant)
                         {
                          sburger=sburger+quant;
                          tburger=tburger+quant*100;
                          cout<<"\n\n\t\t"<<quant<<"burger delievered to you";
                         }
                         else
                              cout<<"\n\t "<<qburger-sburger<<"rooms remaining in hotel";
                              break;
                   case 4:
                        cout<<"\n\n enter noodles quantity you want:";
                        cin>>quant;
                        if(qnoodles-snoodles>=quant)
                        {
                          snoodles=snoodles+quant;
                          tnoodles=tnoodles+quant*100;
                          cout<<"\n\n\t\t"<<quant<<" noodles delievered to you";
                        }
                        else
                             cout<<"\n\t "<<qrooms-srooms<<"noodles remaining in hotel";
                             break;
                    case 5:
                         cout<<"\n\n enter the quantity of shakes:";
                         cin>>quant;
                         if(qshake-shake>=quant)
                         {
                          shake=shake+quant;
                          tshake=tshake+quant*20;
                          cout<<"\n\n\t\t"<<quant<<"shake delievered  to you";
                        }
                        else
                            cout<<"\n\t "<<qshake-shake<<"shake remaining in hotel";
                            break;
                    case 6:
                       cout<<"\n\n enter the pizza u want:";
                       cin>>quant;
                       if(qpizza-spizza>=quant)
                       {
                         spizza=spizza+quant;
                         tpizza=tpizza+quant*200;
                         cout<<"\n\n\t\t"<<quant<<"pizzza sent  to you";
                       }
                       else
                            cout<<"\n\t "<<qpizza-spizza<<"pizza remaining in hotel";
                            break;
                    
                    case 7:
                       cout<<"\n\n enter the fries you want:";
                       cin>>quant;
                       if(qfries-sfries>=quant)
                       {
                         sfries=sfries+quant;
                         tfries=tfries+quant*1000;
                         cout<<"\n\n\t\t"<<quant<<"fries sent  to you";
                       }
                       else
                            cout<<"\n\t "<<qfries-sfries<<"remaining fries  in hotel";
                            break;
                     
                    case 8:
                          cout<<"\n\n total rooms collection for the day:"<<trooms;
                          
                          cout<<"\n\n number of  rooms we had:"<<qrooms;
                          cout<<"\n\n number of  rooms sold:"<<srooms;
                          cout<<"\n\n number of rooms remaining:"<<qrooms-srooms;
                          cout<<"\n\n total sales on rooms :"<<trooms;
                          
                          cout<<"\n\n number of  pasta we had:"<<qpasta;
                          cout<<"\n\n number of  pasta sold:"<<spasta;
                          cout<<"\n\n number of pasta remaining:"<<qpasta-spasta;
                          cout<<"\n\n total sales on pasta :"<<tpasta;
                          
                          cout<<"\n\n number of  burger we had:"<<qburger;
                          cout<<"\n\n number of  burger sold:"<<sburger;
                          cout<<"\n\n number of burger remaining:"<<qburger-sburger;
                          cout<<"\n\n total sales on rooms :"<<tburger;
                          
                          cout<<"\n\n number of noodles we had:"<<qnoodles;
                          cout<<"\n\n number of noodles sold:"<<snoodles;
                          cout<<"\n\n number of noodles remaining:"<<qnoodles-snoodles;
                          cout<<"\n\n total sales on noodles :"<<tnoodles;
                          
                          cout<<"\n\n number of  shake we had:"<<qshake;
                          cout<<"\n\n number of  shake sold:"<<shake;
                          cout<<"\n\n number of shake remaining:"<<qshake-shake;
                          cout<<"\n\n total sales on shake :"<<tshake;
                          
                          cout<<"\n\n number of  pizza we had:"<<qpizza;
                          cout<<"\n\n number of  pizza sold:"<<spizza;
                          cout<<"\n\n number of pizza remaining:"<<qpizza-spizza;
                          cout<<"\n\n total sales on pizza :"<<tpizza;
                          
                          cout<<"\n\n number of  fries we had:"<<qfries;
                          cout<<"\n\n number of  fries sold:"<<sfries;
                          cout<<"\n\n number of rooms remaining:"<<qfries-sfries;
                          cout<<"\n\n total sales on fries :"<<tfries;
                          
                          
                          cout<<"\n\n Toatal sales of the day:"<<trooms+tpasta+tburger+tnoodles+tshake+tpizza+tfries;
                          
                    case 9:
                         exit(0);
                         default:
                                 cout<<"Please select from above choices";
                                 
    }
    goto m;
    
                

}
                                 
                          
                       
                       
                       
                                               
    
    

