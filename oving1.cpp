/* * =====================================================================================
 *
 *       Filename:  oving1.cpp
 *
 *    Description:  Øving1
 *
 *        Version:  1.0
 *        Created:  11. aug. 2014 kl. 23.35 +0200
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
using namespace std;

void part1(){
  int a = 0;
  int b = 0;
  cout << "Skriv et tall :" ;
  cin >> a;
  cout << "Skriv in nytt tall :";
  cin >> b;

  cout << "summen er: " <<(a+b) <<endl;
}

void part2() {
  int input = 0;
  int sek = 0;
  int min = 0;
  int tim = 0;
  int dager = 0;
  int aar = 0;
  int temp = 0;
  cout << "Skriv inn antall sekunder :";
  cin >> input;
  sek = input % 60;
  min = ((input-sek) % 3600)/60;
  temp = (input -60*min - sek)/3600;
  tim = temp % 24;
  temp = (temp -tim)/24;
  dager = temp % 365;
  aar = (temp-dager)/365;

  cout << input << "sekunder er :" <<aar <<" aar " << dager <<" dager " << tim <<" timer " << min << " minutter " << " og " << sek <<" sekunder " <<endl ;
  
}

void part3(){
int t = 0;	

  while (t < 5) {
    cout << (t+1) << "\t" << (t+1)*10 << "\t" << (t+1)*100 << "\t" << (t+1)*1000 << endl;
    t++;
  }

}



  int main(){
    int velger =0;
    cout <<" vel en case: ";
    cin >> velger;
    
    switch(velger) {
      case 1:
	part1();
	break;

      case 2:
	part2();
	break;

      case 3:
	part3();
	break;

      default:
	cout << "velger finnes ikke" << endl;
    }
return 0;
  }
