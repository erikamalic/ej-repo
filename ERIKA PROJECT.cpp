#include <iostream>
#include<windows.h> 
#include <chrono> // library for time/duration
#include <thread>
using namespace std;

int main(){
	
	int yoursub, score;
	char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15;
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14); // yellow
	
	cout<<"\n _____________________________________________"; 
	cout<<"\n|                                             |";
	cout<<"\n|                  QUIZNOTE                   |";
	cout<<"\n|                                             |";
	cout<<"\n|       !   INTRODUCING THE SUBJECTS   !      |";
	cout<<"\n|                                             |";
	cout<<"\n|                CHOOSE HERE                  |";
	cout<<"\n|                                             |";
	SetConsoleTextAttribute(hConsole, 10); // bright green
	cout<<"\n|     (ENTER 1)  15 QUESTIONS FOR SCIENCE     |";
	SetConsoleTextAttribute(hConsole, 12); // bright red
	cout<<"\n|     (ENTER 2)  15 QUESTIONS FOR ART         |";
	SetConsoleTextAttribute(hConsole, 11); // bright cyan
	cout<<"\n|     (ENTER 3)  15 QUESTIONS FOR PHILOSOPHY  |";
	cout<<"\n|                                             |";
	SetConsoleTextAttribute(hConsole, 14); // yellow
	cout<<"\n|      PREPARED BY: ERIKA JANE P. MALIC       |";
	cout<<"\n|_____________________________________________|";
	
	
	cout<<"\n"; // FOR SPACE
	cout<<"\nCHOOSE THE SUBJECT YOU WANT TO TAKE: "; 
	cin>>yoursub; // entering 1, 2, or 3
	
	cout<<"\nPREPARING QUESTIONS";
	 for(int x=0; x < 7; x++){ //para ga loop do tuldok hasta 6 since ro condition hay x < 7
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500)); // kara ginamit ro chrono and thread nga library
	    	
		}
		system("cls"); // para mag clear ro screen
		
		switch(yoursub){ //para maguwa tag pinili mo
			case 1: // first choice which is science
				SetConsoleTextAttribute(hConsole, 10); // to add color (bright green)
				cout<<"\nWELCOME TO SCIENCE QUIZ BEE!";
	    		
	    		cout<<"\n_____________________________"; 
	    		cout<<"\n"; 
				cout<<"\n1. Where is the largest meteor crater located?";
	    		cout<<"\n\tA. Arizona";
	    		cout<<"\n\tB. London";
	    		cout<<"\n\tC. Brazil";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q1; 
	    		
	    			if(q1 == 'A' || q1 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n2. What was the name of the first American space station?";
	    		cout<<"\n\tA. Starward";
	    		cout<<"\n\tB. Skylab";
	    		cout<<"\n\tC. Skytrek";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q2;
	    		
	    			if(q2 == 'B' || q2 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n3. Which planet, if placed in water, would float?";
	    		cout<<"\n\tA. Saturn";
	    		cout<<"\n\tB. Venus";
	    		cout<<"\n\tC. Earth";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q3;
	    		
	    			if(q3 == 'A' || q3 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n4. Which lake is the largest man-made lake in the U.S.?";
	    		cout<<"\n\tA. Lake Michigan";
	    		cout<<"\n\tB. Lake Tahoe";
	    		cout<<"\n\tC. Lake Mead";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q4;
	    		
	    			if(q4 == 'C' || q4 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n5. Some dinosaurs had brains the size of a ______.";
	    		cout<<"\n\tA. ant";
	    		cout<<"\n\tB. walnut";
	    		cout<<"\n\tC. grain of salt";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q5;
	    		
	    			if(q5 == 'B' || q5 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n6. The Earth spins at a rate of how many miles per hour?";
	    		cout<<"\n\tA. 1,000";
	    		cout<<"\n\tB. 10";
	    		cout<<"\n\tC. 100";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q6;
	    		
	    			if(q6 == 'A' || q6 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n7. Who invented the telephone?";
	    		cout<<"\n\tA. Alexander Graham Bell";
	    		cout<<"\n\tB. Nicola Tesla";
	    		cout<<"\n\tC. Charles Darwin";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q7;
	    		
	    			if(q7 == 'A' || q7 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n8. What animal can produce the loudest sound?";
	    		cout<<"\n\tA. Lion";
	    		cout<<"\n\tB. Whale";
	    		cout<<"\n\tC. Turtle";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q8;
	    		
	    			if(q8 == 'B' || q8 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n9. What animal is the most poisonous in the world?";
	    		cout<<"\n\tA. Poison dart frog";
	    		cout<<"\n\tB. Cobra";
	    		cout<<"\n\tC. Black widow spider";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q9;
	    		
	    			if(q9 == 'A' || q9 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n10. How hot is a bolt of lightning?";
	    		cout<<"\n\tA. 540 degrees Fahrenheit";
	    		cout<<"\n\tB. 54,000 degrees Fahrenheit";
	    		cout<<"\n\tC. 540 degrees Fahrenheit";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q10;
	    		
	    			if(q10 == 'B' || q10 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n11. What creature has the biggest eye?";
	    		cout<<"\n\tA. Hippo";
	    		cout<<"\n\tB. Blue whale";
	    		cout<<"\n\tC. Atlantic giant squid";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q11;
	    		
	    			if(q11 == 'C' || q11 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n12. How much does the average human brain weigh?";
	    		cout<<"\n\tA. 3.3 pounds";
	    		cout<<"\n\tB. 15.1 pounds";
	    		cout<<"\n\tC. 5 pounds";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q12;
	    		
	    			if(q12 == 'A' || q12 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n13. Which of the following forces affect the Earth's tides?";
	    		cout<<"\n\tA. Rotation";
	    		cout<<"\n\tB. Moon";
	    		cout<<"\n\tC. A & B";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q13;
	    		
	    			if(q13 == 'C' || q13 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n14. What is the hardest substance known to man?";
	    		cout<<"\n\tA. Salt";
	    		cout<<"\n\tB. Diamonds";
	    		cout<<"\n\tC. Butter";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q14;
	    		
	    			if(q14 == 'B' || q14 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n15. How many times does the human eye blink per year?";
	    		cout<<"\n\tA. 200,000";
	    		cout<<"\n\tB. 4,200,000";
	    		cout<<"\n\tC. 4,200";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q15;
	    		
	    			if(q15 == 'B' || q15 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n YOUR SCORE IS: "<<score;
				
				cout<<"\n\n 1. Your answer is: "<< q1<<" ! The correct answer is: 'A'";
				cout<<"\n\n 2. Your answer is: "<< q2<<" ! The correct answer is: 'B'";
				cout<<"\n\n 3. Your answer is: "<< q3<<" ! The correct answer is: 'A'";
				cout<<"\n\n 4. Your answer is: "<< q4<<" ! The correct answer is: 'C'";
				cout<<"\n\n 5. Your answer is: "<< q5<<" ! The correct answer is: 'B'";
				cout<<"\n\n 6. Your answer is: "<< q6<<" ! The correct answer is: 'A'";
				cout<<"\n\n 7. Your answer is: "<< q7<<" ! The correct answer is: 'A'";
				cout<<"\n\n 8. Your answer is: "<< q8<<" ! The correct answer is: 'B'";
				cout<<"\n\n 9. Your answer is: "<< q9<<" ! The correct answer is: 'A'";
				cout<<"\n\n 10. Your answer is: "<< q10<<" ! The correct answer is: 'B'";
				cout<<"\n\n 11. Your answer is: "<< q11<<" ! The correct answer is: 'C'";
				cout<<"\n\n 12. Your answer is: "<< q12<<" ! The correct answer is: 'A'";
				cout<<"\n\n 13. Your answer is: "<< q13<<" ! The correct answer is: 'C'";
				cout<<"\n\n 14. Your answer is: "<< q14<<" ! The correct answer is: 'B'";
				cout<<"\n\n 15. Your answer is: "<< q15<<" ! The correct answer is: 'B'";
				
	     	break;
	     	
	     		case 2:
	     		SetConsoleTextAttribute(hConsole, 12); // to add color (bright red)
	    		cout<<"\nWELCOME TO ART QUIZ BEE!";
	    		
	    		cout<<"\n_____________________________";
	    		cout<<"\n";
				cout<<"\n1. Which famous painter was also a sculptor, an architect, and an engineer?";
	    		cout<<"\n\tA. Jackson Pollock";
	    		cout<<"\n\tB. Leonardo Da Vinci";
	    		cout<<"\n\tC. Claude Monet";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q1;
	    		
	    		if(q1 == 'B' || q1 == 'b' ){
	    			score++;
				}
	    		
	    		cout<<"\n2. Which Italian architect and sculptor was famous for creating the Baroque style?";
	    		cout<<"\n\tA. Gerhard Richter";
	    		cout<<"\n\tB. Michelangelo";
	    		cout<<"\n\tC. Gian Lorenzo Bernini";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q2;
	    		
	    			if(q2 == 'C' || q2 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n3. Which of Picasso's famous paintings was inspired by the bombings of civilians during the Spanish War?";
	    		cout<<"\n\tA. Guernica";
	    		cout<<"\n\tB. Dove";
	    		cout<<"\n\tC. La Vie";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q3;
	    		
	    			if(q3 == 'A' || q3 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n4. Claude Monet is most known for his paintings of what?";
	    		cout<<"\n\tA. Water lily paintings";
	    		cout<<"\n\tB. Poppies";
	    		cout<<"\n\tC. Impression, Sunrise";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q4;
	    		
	    			if(q4 == 'A' || q4 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n5. Where did Vincent Van Gogh paint the famous 'Starry Night'?";
	    		cout<<"\n\tA. Auvers-sur-Oise";
	    		cout<<"\n\tB. From the window of his asylum room at Saint-Remy-de-Provence";
	    		cout<<"\n\tC. The Hague";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q5;
	    		
	    			if(q5 == 'B' || q5 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n6. Who painted the 'Girl Before a Mirror' and 'The Weeping Woman'?";
	    		cout<<"\n\tA. Pablo Picasso";
	    		cout<<"\n\tB. Georgia O'Keeffe";
	    		cout<<"\n\tC. Pablo Picasso";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q6;
	    		
	    			if(q6 == 'C' || q6 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n7. Which is the only piece of artwork that Michelangelo had ever signed?";
	    		cout<<"\n\tA. The Creation of Adam";
	    		cout<<"\n\tB. The Pieta";
	    		cout<<"\n\tC. Madonna of Bruges";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q7;
	    		
	    			if(q7 == 'B' || q7 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n8. What object most commonly appears in Picasso's paintings?";
	    		cout<<"\n\tA. A guitar";
	    		cout<<"\n\tB. A violin";
	    		cout<<"\n\tC. A paint brush";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q8;
	    		
	    			if(q8 == 'A' || q8 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n9. How old is the first known human work of art?";
	    		cout<<"\n\tA. 200,000 years old";
	    		cout<<"\n\tB. 10,000 years old";
	    		cout<<"\n\tC. 100,000 years old";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q9;
	    		
	    			if(q9 == 'C' || q9 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n10. La Giaconda is better known as what?";
	    		cout<<"\n\tA. The Mona Lisa";
	    		cout<<"\n\tB. Ginevra Benci";
	    		cout<<"\n\tC. Cecilia Gallerani";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q10;
	    		
	    			if(q10 == 'A' || q10 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n11. How many words long is Pablo Picasso's full name?";
	    		cout<<"\n\tA. 27 words";
	    		cout<<"\n\tB. 13 words";
	    		cout<<"\n\tC. 23 words";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q11;
	    		
	    			if(q11 == 'C' || q11 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n12. What do you call a combination of magazine cut-outs, pictures, cloth, and other objects?";
	    		cout<<"\n\tA. A collage";
	    		cout<<"\n\tB. montage";
	    		cout<<"\n\tC. mosaic";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q12;
	    		
	    			if(q12 == 'A' || q12 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n13. Which famous painter cut off a part of his ear?";
	    		cout<<"\n\tA. Leonardo da Vinci";
	    		cout<<"\n\tB. Vincent Van Gogh";
	    		cout<<"\n\tC. Pablo Picasso";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q13;
	    		
	    			if(q13 == 'B' || q13 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n14. What is the true art term for color?";
	    		cout<<"\n\tA. Tint";
	    		cout<<"\n\tB. Shade";
	    		cout<<"\n\tC. Hue";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q14;
	    		
	    			if(q14 == 'C' || q14 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n15. This famous painting by Leonardo Da Vinci was used for target practice by Napoleon's soldiers";
	    		cout<<"\n\tA. Vitruvian Man";
	    		cout<<"\n\tB. The Last Supper";
	    		cout<<"\n\tC. Head of a Woman";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q15;
	    		
	    			if(q15 == 'B' || q15 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n YOUR SCORE IS: "<<score;
				
				cout<<"\n\n 1. Your answer is: "<< q1<<" ! The correct answer is: 'B'";
				cout<<"\n\n 2. Your answer is: "<< q2<<" ! The correct answer is: 'C'";
				cout<<"\n\n 3. Your answer is: "<< q3<<" ! The correct answer is: 'A'";
				cout<<"\n\n 4. Your answer is: "<< q4<<" ! The correct answer is: 'A'";
				cout<<"\n\n 5. Your answer is: "<< q5<<" ! The correct answer is: 'B'";
				cout<<"\n\n 6. Your answer is: "<< q6<<" ! The correct answer is: 'C'";
				cout<<"\n\n 7. Your answer is: "<< q7<<" ! The correct answer is: 'B'";
				cout<<"\n\n 8. Your answer is: "<< q8<<" ! The correct answer is: 'A'";
				cout<<"\n\n 9. Your answer is: "<< q9<<" ! The correct answer is: 'C'";
				cout<<"\n\n 10. Your answer is: "<< q10<<" ! The correct answer is: 'A'";
				cout<<"\n\n 11. Your answer is: "<< q11<<" ! The correct answer is: 'C'";
				cout<<"\n\n 12. Your answer is: "<< q12<<" ! The correct answer is: 'A'";
				cout<<"\n\n 13. Your answer is: "<< q13<<" ! The correct answer is: 'B'";
				cout<<"\n\n 14. Your answer is: "<< q14<<" ! The correct answer is: 'C'";
				cout<<"\n\n 15. Your answer is: "<< q15<<" ! The correct answer is: 'B'";
				
				break; 
				
					case 3:
				SetConsoleTextAttribute(hConsole, 11); // to add color (bright cyan)
	    		cout<<"\nWELCOME TO PHILOSOPHY QUIZ BEE!";
	    		
	    		cout<<"\n_____________________________";
	    		cout<<"\n";
				cout<<"\n1.  The word philosophy derives from:";
	    		cout<<"\n\tA. Greek, meaning love of wisdom ";
	    		cout<<"\n\tB. Latin, meaning love of life" ;
	    		cout<<"\n\tC. Latin, meaning love of knowledge ";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q1;
	    		
	    		if(q1 == 'A' || q1 == 'a' ){
	    			score++;
				}
	    		
	    		cout<<"\n2. Plato's Allegory of the Cave can be interpreted as:";
	    		cout<<"\n\tA. A way of educating young children";
	    		cout<<"\n\tB. A move from wisdom to ignorance";
	    		cout<<"\n\tC. The experience of the Forms";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q2;
	    		
	    			if(q2 == 'C' || q2 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n3. Thales and Anaximander would be considered:";
	    		cout<<"\n\tA. Pluralists";
	    		cout<<"\n\tB.  Monists";
	    		cout<<"\n\tC. Rationalists";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q3;
	    		
	    			if(q3 == 'B' || q3 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n4. Knowledge often is defined as (by Plato and other philosophers):";
	    		cout<<"\n\tA. An idea about God or the supernatural";
	    		cout<<"\n\tB. Any idea held to be true";
	    		cout<<"\n\tC. Justified true beliefs";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q4;
	    		
	    			if(q4 == 'C' || q4 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n5. The subdivisions of branches of philosophy (according to Lee Archie) are:";
	    		cout<<"\n\tA. Epistemology, ontology, ethics";
	    		cout<<"\n\tB. Epistemology, aesthetics, ethics, ontology";
	    		cout<<"\n\tC. Aesthetics, ontology, scientology, epistemology";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q5;
	    		
	    			if(q5 == 'B' || q5 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n6. The statement, 'I am and am not an animal' would be an example of:";
	    		cout<<"\n\tA. A paradox";
	    		cout<<"\n\tB. An assumption";
	    		cout<<"\n\tC. A proof";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q6;
	    		
	    			if(q6 == 'A' || q6 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n7. When we travel to faraway places because of their exotic allure or 'natural' escape, we call this:";
	    		cout<<"\n\tA. Xenophilia";
	    		cout<<"\n\tB. Stereotyping";
	    		cout<<"\n\tC. Love";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q7;
	    		
	    			if(q7 == 'A' || q7 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n8. Dualism:";
	    		cout<<"\n\tA. Rejects the idea that our minds or mental states are less fundamental than our bodies or physical states";
	    		cout<<"\n\tB. Explain how minds or mental states tend to construct the world in terms of opposites";
	    		cout<<"\n\tC. Rejects the idea that our minds or mental states are more fundamental than our bodies or physical states";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q8;
	    		
	    			if(q8 == 'A' || q8 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n9. Heraclitus:";
	    		cout<<"\n\tA. Believed that there was an ultimate force ruling the universe";
	    		cout<<"\n\tB. Believed that the world was made from water";
	    		cout<<"\n\tC. Believed that change has a form that underlies all reality";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q9;
	    		
	    			if(q9 == 'C' || q9 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n10. Steven Pinker argues that the 'mystery of consciousness' can be explained:";
	    		cout<<"\n\tA. As an immortal soul separate from the body";
	    		cout<<"\n\tB. As biological or neurological processes";
	    		cout<<"\n\tC. As a distinction between mind and body";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q10;
	    		
	    			if(q10 == 'B' || q10 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n11. W.E.B. DuBois used this term to describe an awareness of oneself and the awareness of how others perceive us.";
	    		cout<<"\n\tA. Double consciousness";
	    		cout<<"\n\tB. Split personality";
	    		cout<<"\n\tC. Identity";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q11;
	    		
	    			if(q11 == 'A' || q11 == 'a' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n12. Pythagoras believed that:";
	    		cout<<"\n\tA. Mathematics was the key to life";
	    		cout<<"\n\tB. Numbers were the real nature of things";
	    		cout<<"\n\tC. He would one day discover one of the most important theories of all time";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q12;
	    		
	    			if(q12 == 'B' || q12 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n13. Democritus, in his belief that the universe was made of tiny bits of stuff called 'atoms,' would be considered:";
	    		cout<<"\n\tA. A pluralist";
	    		cout<<"\n\tB. A materialist";
	    		cout<<"\n\tC. A and B";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q13;
	    		
	    			if(q13 == 'C' || q13 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n14. Air is the source of ultimate reality according to:";
	    		cout<<"\n\tA. Parmenides";
	    		cout<<"\n\tB. Heraclitus";
	    		cout<<"\n\tC. Anaximenes";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q14;
	    		
	    			if(q14 == 'C' || q14 == 'c' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n15. The process of distinguishing mere belief from knowledge is called:";
	    		cout<<"\n\tA. The mind-body problem";
	    		cout<<"\n\tB. The method of doubt";
	    		cout<<"\n\tC. Double consciousness";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q15;
	    		
	    			if(q15 == 'B' || q15 == 'b' ){ //condition if true
	    			score++; // for adding score if correct
				}
				
				cout<<"\n YOUR SCORE IS: "<<score;
				
				cout<<"\n\n 1. Your answer is: "<< q1<<" ! The correct answer is: 'A'";
				cout<<"\n\n 2. Your answer is: "<< q2<<" ! The correct answer is: 'C'";
				cout<<"\n\n 3. Your answer is: "<< q3<<" ! The correct answer is: 'B'";
				cout<<"\n\n 4. Your answer is: "<< q4<<" ! The correct answer is: 'C'";
				cout<<"\n\n 5. Your answer is: "<< q5<<" ! The correct answer is: 'B'";
				cout<<"\n\n 6. Your answer is: "<< q6<<" ! The correct answer is: 'A'";
				cout<<"\n\n 7. Your answer is: "<< q7<<" ! The correct answer is: 'A'";
				cout<<"\n\n 8. Your answer is: "<< q8<<" ! The correct answer is: 'A'";
				cout<<"\n\n 9. Your answer is: "<< q9<<" ! The correct answer is: 'C'";
				cout<<"\n\n 10. Your answer is: "<< q10<<" ! The correct answer is: 'B'";
				cout<<"\n\n 11. Your answer is: "<< q11<<" ! The correct answer is: 'A'";
				cout<<"\n\n 12. Your answer is: "<< q12<<" ! The correct answer is: 'B'";
				cout<<"\n\n 13. Your answer is: "<< q13<<" ! The correct answer is: 'C'";
				cout<<"\n\n 14. Your answer is: "<< q14<<" ! The correct answer is: 'C'";
				cout<<"\n\n 15. Your answer is: "<< q15<<" ! The correct answer is: 'B'";
				
					
	    	break;
	    	
	    	default:
	    		
	    		cout<<"\n Invalid Input!";
	    	
			
	
			
		}
	    
	
	
	return 0;
}