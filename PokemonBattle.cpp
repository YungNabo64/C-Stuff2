   #include <string>
   #include <iostream>
  
   using namespace std;

   bool battle();
   
   bool battle()
   {
	   string confirmation;
    cout << "Enter 'y' to battle or 'n' to run away." << endl;
    cin >> confirmation;
        
    if (confirmation == "y"){
		return true;
	}
    else{
        return false;  }   
        
   }     
   int main() {
       
   cout << "A WILD JIGGLYPUFF HAS APPEARED, WOULD YOU LIKE TO BATTLE" << endl;
       
     bool start = battle();
	  cout << start;
      cout << " COME ON OUT, STARYU" << endl;  
    if (start){
		int myHealth = 100;
		int enemiHealth = 100; 
		
		while(myHealth > 0 && enemiHealth > 0) {  
			cout << "1. WaterGun 2. RapidSpin 3. Recovery 4. BubbleBeam";
			string response;
			cin >> response;
			if(response == "1"){
				//Here, do all the things that should happen if they choose watergun
				cout << "JIGGLYPUFF HAS BEEN HIT WITH WATERGUN" << endl;
				enemiHealth -=15;
				cout << "JIGGLYPUFF HAS USED POUND" << endl;
				myHealth -=20;
			}
	
			if(response == "2"){
			cout <<	"JIGGLYPUFF HAS BEEN HIT WITH RAPIDSPIN" << endl;
				enemiHealth -=30;
			cout << "JIGGLYPUFF HAS USED ROLLOUT" << endl;
			    myHealth -=35;
			}
	  
			if(response == "3"){
			cout << "YOU HAVE HEALED FOR 10 HEALTH" << endl;
				myHealth +=10;
			cout << "JIGGLYPUFF HAS USED POUND" << endl;
			}
		
			if(response == "4"){
			  cout << "JIGGLYPUFF HAS BEEN HIT WITH BUBBLEBEAM" << endl;
				enemiHealth -=15;
			  cout << "JIGGLYPUFF HAS USED Sleep" << endl;
			    enemiHealth +=20;
			    myHealth -=20;
			}
			
			cout << "Enemy has " << enemiHealth << " health left.";
		    cout << "You have " << myHealth << " health left.";
		  
       
      
   
  

 






}
 if (myHealth < 0){
    cout << "YOU LOSE" << endl;}
    
  else if (enemiHealth < 0){
	 cout << " YOU WIN" << endl;}
    
	 
}
}



