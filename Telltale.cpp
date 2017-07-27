   #include <iostream>
   #include <string>
   
   using namespace std;
   
   bool confirmation(){
		string confirmation;
		cout << "Enter 'y' to battle or 'n' to run away." << endl;
		cin >> confirmation;
        
		if (confirmation == "y"){
		return true;
		}
		else{
			return false;  }   
	   }
   
    bool confirmation2(){
		string confirmation;
		cout << "Enter 'y' to eat or 'n' to look for more berries." << endl;
		cin >> confirmation;
        
		if (confirmation == "y"){
		return true;
		}
		else{
			return false;  }   
	   }
   
   bool confirmation3(){
		string confirmation;
		cout << "Enter 'y' to give the old woman food or 'n' to say no and try to keep it for yourself." << endl;
		cin >> confirmation;
        
		if (confirmation == "y"){
		return true;
		}
		else{
			return false;  }   
	   }
   
   int main()
   {
	string myName;
	int myStrong;       
	int myAgile; 
    int myInt;
   
          cout << "'WELCOME TO THE ENDANGERED FOREST, WARRIOR'" << endl;
	   
	   
   cout << "Enter your name" << endl;
   cin >> myName;
   cout << " 'Hello there', " << myName << endl;
    
    
   cout << "'What is your Power Level from 1-100'" << endl;
   cin >> myStrong;
       if (myStrong > 45)  {
   cout << " 'Okay, you may be pretty strong with a Power Level of' " << myStrong << endl;
  }
       else if (myStrong < 45) { 
   cout << " 'You are too Weak for this Adventure, go home, FOOL'" << endl;
    cout << " GAME OVER" << endl;
     return 0;
  }
	
   
     cout << " 'What is your Agility rating from 1-100', " << myName << endl;
     cin >> myAgile;
      if (myAgile > 60)    {
   cout << " 'Very commendable with an Agility rating of up to' " << myAgile << endl;
  }
    else if (myAgile < 60) {
      cout << "You will be too slow, and surely die at the hands of a Speedy Assasian, Leave here NOW!!!" << endl;
      cout << " GAME OVER" << endl;
       return 0;
  }
    
    
   cout << " 'What is the rating of your Intellect, from 1-100'" << endl;
   cin >> myInt;
     if (myInt > 70)       {
       cout << " 'With an Intellect of: " << myInt << " ,A Power Level of: " << myStrong << " ,And an Agility of: " << myAgile << " ,You are ready to enter the Forest', " << myName << endl;            
  }
     else if (myInt < 70)  {
		cout << "'Sorry, I know you've gotten this far, but your Intellect isn't high enough to face the BEAST in this Forest, please turn back'..." << endl;   
	    cout << " GAME OVER" << endl;
	   return 0;
  }

	   cout << "'Now, " << myName << " ,Since you have gotten past my warnings, i will personally lead you into the forest'" << endl;
	   cout << " AS THE MYSTERIOUS GATEKEEPER OF THE FOREST AND " << myName << " VENTURE THROUGH THE FOREST ,OUT OF NOWHERE, 3 STRONG GOBLINS INTERFERE AND GET IN YOUR PATH" << endl;
	   cout << " WHAT WILL YOU DO" << endl;
	  bool conf = confirmation();
	  if (conf == true){
	   cout << " 'I will fight these MONSTEROUS BEAST', you proclaim and..." << endl;
	      if (myStrong > 65){
	   cout << " YOU VALIANTLY FIGHT OF THE BEAST AND MAKE THEM RUN FOR THEIR LIVES, YET YOU FEEL DO FEEL WEAKEND BY THEIR BLOWS" << endl;
		     myStrong -=5;
		cout << " --YOUR POWER LEVEL HAS DROPPED 5 POINTS--" << endl;
		   }
	 else if(myStrong < 65){
	   cout << " YOU TRY TO FEND ALL 3 OF THEM OFF, BUT THEY OVERWHELM YOU, AND SLAY YOU IN THE COLD DARK ATMOSPHERE OF THE FOREST" << endl;
	   cout << " GAME OVER" << endl;
	   return 0;
	       }}
	   else{
		 cout << "'These guys look tough i'm not gonna fight them'" << endl;
		 cout << " 'We gotta run'" << endl;
	    if (myAgile > 70) { 
		 cout << " YOU START DARTING FOR YOUR LIFE AND SUCCESFULLY ESCAPE, BUT YOU ARE VERY TIRED" << endl; 
		    myAgile -=5;
	   cout << " --YOUR AGILITY HAS DROPPPED 5 POINTS--" << endl;
			}
	    else if(myAgile < 70){
		 cout << " YOU SPRINT YOUR FASTEST YOUVE EVER SPRINTED, BUT YOU ARENT FAST ENOUGH AND SUBSEQUENTLY GET CAUGHT AND SLAIN AT THE HANDS OF THE GOBLINS" << endl;
		 cout << " GAME OVER" << endl;
		    }}
	       
	       cout << " THE GOBLINS ARE NO LONGER A THREAT ONE WAY OR ANOTHER, BUT YOURE STILL IN THE FOREST AND YOUVE LOST THE GATEKEEPER, SO YOU MUST ROME THE DARK GLOOMY FOREST ALONE..." << endl;
           cout << " ALONG THE WAY, YOU GET VERY HUNGRY AND START LOOKING FOR SOMETHING TO EAT" << endl;
           cout << " YOU FIND A PATCH OF BERRIES NESTLED IN SOME BUSHES " << endl;
   
   if (myInt > 75){ 
	   cout << "YOUR COMMON KNOWLEDGE SUGGEST THE BERRIES MIGHT BE POISONOUS AND YOU MIGHT NOT WANNA EAT THEM" << endl;
	   cout << " BUT ITS YOUR CALL" << endl;
	   cout << " WHAT WILL YOU DO?" << endl;
          bool conf2 = confirmation2();
	      if (conf2 == false){
      cout << "YOU STRAY AWAY FROM THE BERRIES AND KEEP LOOKING TO FIND A SMALL PEAR ON THE GROUND TO EAT" << endl;
            }
          else { 
	  cout << "YOU IGNORE THE WARNING AND EAT THE BERRIES ONLY TO FIND OUT THEY WERE POISONOUS" << endl;
	  cout << "YOU TRY AND SPIT THEM OUT BUT ALL THE POISON HAS ALREADY GOT IN YOUR SYSTEM AND YOU DIE" << endl;
	  cout << " GAME OVER" << endl;
	  return 0;
		}}
   
   else if (myInt < 75){
	   cout << "YOURE NOT SMART ENOUGH TO THINK TWICE AND EVEN IF YOU WERE YOUR HUNGER OVERID ALL OTHER ALL FUNCTIONS IN YOUR BODY AND YOU EAT THE BERRIES" << endl;
       cout << "TURNS OUT THEY WERE DEADLY POISONOUS AND YOU DIE  OF POISON INDEGESTION" << endl;
       cout << " GAME OVER" << endl;
       return 0;
   }
   
   cout << " YOUR MOVING THROUGH THE FOREST AND YOURE LOOKING FOR THE GATEKEEPER AND YOU RUN INTO AN OLD, HAGGARDLY WOMAN AND SHE ASKES YOU FOR FOOD" << endl;
   cout << "YOU REMEMBER YOU PICKED UP SOME MORE PEARS FOR ON THE GO, BUT THOSE ARE YOUR PEARS" << endl;
   cout << " THOSE ARE YOUR ONLY SOURCES OF FOOD" << endl;
   cout << " WHAT WILL YOU DO" << endl;
              bool conf3 = confirmation3();
	      if (conf3 == false){
  
  
  
  
  
  
  
  
  
  
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   }

