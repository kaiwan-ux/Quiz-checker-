#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Math {
	
	protected : 
	int score1=0;
public:
    int num, num1;

    void select() {
        cout << "1) Maths " << endl;
        cout << "2) English " << endl;
        cout << "3) Science " << endl;
        cout << "4) General Knowledge" << endl;
        cout << "5) History " << endl;
        
        cout << "Enter the choice please: ";
        cin >> num;
        cout << endl;
        cout << "Enter the number of questions you want to answer (less than 20): ";
        cin >> num1;
        cout << endl << endl;
    }

    void finalR() {
        string tempQuestions[20] = {
            "What is the integral of x^2 dx?",
            "What is the derivative of 3x^2?",
            "What is the value of sin(pi/6)?",
            "What is 7 * 8?",
            "What is the solution to the equation 2x + 3 = 7?",
            "What is the value of cos(pi/4)?",
            "What is the derivative of e^x?",
            "What is the value of log(100)?",
            "What is 15 / 3?",
            "What is the integral of 1/x dx?",
            "What is the solution to the equation x^2 - 4 = 0?",
            "What is 9 * 9?",
            "What is the value of tan(pi/4)?",
            "What is the derivative of 7x?",
            "What is the value of e^0?",
            "What is the integral of 3 dx?",
            "What is 8 + 12?",
            "What is the value of sec(0)?",
            "What is the solution to the equation 5x - 10 = 0?",
            "What is the value of sqrt(64)?"
        };

        string tempOptions[20][4] = {
            {"A. x^3/3 + C", "B. x^2/2 + C", "C. x^4/4 + C", "D. x^3 + C"},
            {"A. 6x", "B. 3x", "C. 9x^2", "D. 3"},
            {"A. 1/2", "B. sqrt(3)/2", "C. 1", "D. 0"},
            {"A. 54", "B. 56", "C. 48", "D. 58"},
            {"A. 1", "B. 2", "C. 3", "D. 4"},
            {"A. 1/sqrt(2)", "B. 1/2", "C. sqrt(3)/2", "D. 1"},
            {"A. e^x + C", "B. e^x", "C. x e^x", "D. e^(x^2)"},
            {"A. 1", "B. 10", "C. 2", "D. 100"},
            {"A. 5", "B. 3", "C. 6", "D. 4"},
            {"A. ln|x| + C", "B. x ln|x|", "C. 1/x + C", "D. x + C"},
            {"A. 2", "B. 4", "C. ±2", "D. ±4"},
            {"A. 81", "B. 72", "C. 63", "D. 54"},
            {"A. 0", "B. 1", "C. sqrt(3)", "D. 1/sqrt(3)"},
            {"A. 7", "B. 1", "C. 0", "D. 3"},
            {"A. 0", "B. e", "C. 1", "D. 8"},
            {"A. 3x + C", "B. 3 + C", "C. x^3 + C", "D. 3x^2 + C"},
            {"A. 20", "B. 18", "C. 16", "D. 22"},
            {"A. 1", "B. 0", "C. 8", "D. undefined"},
            {"A. 0", "B. 2", "C. 4", "D. -2"},
            {"A. 7", "B. 8", "C. 9", "D. 6"}
        };

        char tempAnswers[20] = {
            'A', 'A', 'A', 'B', 'B', 'A', 'B', 'C', 'A', 'A',
            'C', 'A', 'B', 'A', 'C', 'A', 'A', 'A', 'B', 'B'
        };

     //   int score = 0;
        srand(time(0));
        bool visit[20] = {false}; // Array to keep track of visited questions

        for (int i = 0; i < num1; i++) {
            int a;
            do {
                a = rand() % 20; // Generate a random index
            } while (visit[a]); // Check if the question at index 'a' has been visited

            visit[a] = true; // Mark this question as visited

            cout << "Question " << i + 1 << ": " << tempQuestions[a] << endl;
            for (int j = 0; j < 4; ++j) {
                cout << tempOptions[a][j] << "  ";
            }
            cout << endl;

            char anss;
    cout << "Enter your answer: ";
    cin >> anss;

    while(true){
    	
        if(anss != 'A' && anss != 'B' && anss != 'C' && anss != 'D'){
        	
            cout << "Invalid input, please enter a valid option : ";
            
            cin >> anss;
        } else {
        	
            break; 
        }
    }
            cout << endl;

            if (anss == tempAnswers[a]) {
                cout << "\t\t\t\t Right ";
                score1++; 
            } else {
                cout << "\t\t\t\t Wrong ";
            }
            cout << endl;
        }

        cout << "Your final score is: " << score1 << "/" << num1 << endl; 
    }
};
		
		
	class English : public Math{
		protected : 
		int score2=0;
		public : 
	
	void finalR1(){
		
		string questions[20] = {
    "Identify the subject in the following sentence: \"The cat chased the mouse.\"",
    "Choose the correct form of the verb: \"She ------ to the gym every morning.\"",
    "Correct the error in this sentence: \"He don't like to eat vegetables.\"",
    "Identify the adjective in the following sentence: \"The beautiful flowers bloomed in the garden.\"",
    "Choose the correct preposition: \"She is good ------ mathematics.\"",
    "Correct the sentence: \"The book that is on the table are mine.\"",
    "Identify the adverb in the following sentence: \"She sings beautifully.\"",
    "Choose the correct pronoun: \"Everyone should do ------- best.\"",
    "Correct the error: \"He is more taller than his brother.\"",
    "Choose the correct conjunction: \"She wanted to go to the party, ------ she was too tired.\"",
    "Identify the tense: \"I have been studying for three hours.\"",
    "Correct the sentence: \"She don't have any friends.\"",
    "Choose the correct article: \"She is ----- honest person.\"",
    "Identify the verb tense: \"They were playing soccer when it started to rain.\"",
    "Choose the correct form: \"Each of the students ------- completed their assignment.\"",
    "Correct the error: \"The informations are not correct.\"",
    "Identify the correct form of the adjective: \"This is the ------ cake I have ever tasted.\"",
    "Choose the correct relative pronoun: \"The book ------ is on the table is mine.\"",
    "Correct the sentence: \"She enjoys to play the piano.\"",
    "Identify the main clause in the following sentence: \"Although it was raining, we went for a walk.\""
};
	
	string options[20][4] = {
    {"A. The cat", "B. chased", "C. the mouse", "D. none of these"},
    {"A. go", "B. goes", "C. gone", "D. going"},
    {"A. He don't like", "B. He doesn't like", "C. He don't likes", "D. He does like"},
    {"A. beautiful", "B. flowers", "C. bloomed", "D. garden"},
    {"A. at", "B. in", "C. on", "D. over"},
    {"A. The book that is on the table are mine.", "B. The books that is on the table are mine.", "C. The book that is on the table is mine.", "D. The books that are on the table is mine."},
    {"A. sings", "B. beautifully", "C. she", "D. none of these"},
    {"A. his", "B. their", "C. her", "D. its"},
    {"A. more taller", "B. tall", "C. taller", "D. most tall"},
    {"A. but", "B. and", "C. or", "D. so"},
    {"A. present continuous", "B. past continuous", "C. present perfect continuous", "D. past perfect continuous"},
    {"A. don't have", "B. doesn't have", "C. didn't have", "D. haven't"},
    {"A. a", "B. an", "C. the", "D. no article"},
    {"A. present simple", "B. past simple", "C. present continuous", "D. past continuous"},
    {"A. has", "B. have", "C. had", "D. having"},
    {"A. informations", "B. information", "C. informational", "D. inform"},
    {"A. better", "B. best", "C. good", "D. well"},
    {"A. who", "B. which", "C. that", "D. whom"},
    {"A. enjoys to play", "B. enjoys playing", "C. enjoys play", "D. enjoys to playing"},
    {"A. Although it was raining", "B. we went for a walk", "C. Although it was raining, we went for a walk.", "D. raining, we went for a walk"}
};
	
	char answers[20] = {
    'A', 'B', 'B', 'A', 'A', 'C', 'B', 'B', 'C', 'A', 
    'C', 'B', 'B', 'B', 'A', 'B', 'B', 'B', 'B', 'B'
};
	
		
	//	int score = 0;
        srand(time(0));
        bool visit[20] = {false}; // Array to keep track of visited questions

        for (int i = 0; i < num1; i++) {
            int a;
            do {
                a = rand() % 20; // Generate a random index
            } while (visit[a]); // Check if the question at index 'a' has been visited

            visit[a] = true; // Mark this question as visited

            cout << "Question " << i + 1 << ": " << questions[a] << endl;
            for (int j = 0; j < 4; ++j) {
                cout << options[a][j] << "  ";
            }
            cout << endl;

            char anss1;
    cout << "Enter your answer: ";
    cin >> anss1;

    while(true){
    	
        if(anss1 != 'A' && anss1 != 'B' && anss1 != 'C' && anss1 != 'D'){
        	
            cout << "Invalid input, please enter a valid option : ";
            
            cin >> anss1;
        } else {
        	
            break; 
        }
    }
            cout << endl;

            if (anss1 == answers[a]) {
                cout << "\t\t\t\t Right ";
                score2++; 
            } else {
                cout << "\t\t\t\t Wrong ";
            }
            cout << endl;
        }

        cout << "Your final score is: " << score2 << "/" << num1 << endl; 
    }
		
	};
		
	class Science : public English {
		protected : 
	int	score3=0;
		public : 
		void finalR2(){
			
		
		string questions1[20] = {
        "What is the chemical symbol for water?",
        "What planet is known as the Red Planet?",
        "Who developed the theory of relativity?",
        "What is the hardest natural substance on Earth?",
        "What is the boiling point of water at sea level?",
        "What gas do plants absorb from the atmosphere?",
        "Which of these is not a primary color of light?",
        "What is the largest organ in the human body?",
        "What does DNA stand for?",
        "What is the process by which plants make their own food called?",
        "What is the smallest bone in the human body?",
        "Which planet is known as the 'Morning Star' or 'Evening Star'?",
        "What causes tides in the oceans?",
        "What is the hardest type of rock?",
        "What is the fastest animal on land?",
        "Which element has the chemical symbol 'Fe'?",
        "Which of these animals is a mammal?",
        "What is the study of fossils called?",
        "What force keeps planets in orbit around the sun?",
        "What is the closest star to Earth, apart from the Sun?"
    };

    // Options array
    string options1[20][4] = {
        {"A) H2O", "B) CO2", "C) O2", "D) HCl"},
        {"A) Earth", "B) Mars", "C) Venus", "D) Jupiter"},
        {"A) Isaac Newton", "B) Albert Einstein", "C) Galileo Galilei", "D) Nikola Tesla"},
        {"A) Diamond", "B) Gold", "C) Quartz", "D) Graphene"},
        {"A) 100°C", "B) 0°C", "C) 50°C", "D) 212°F"},
        {"A) Oxygen", "B) Nitrogen", "C) Carbon Dioxide", "D) Carbon Monoxide"},
        {"A) Red", "B) Green", "C) Blue", "D) Yellow"},
        {"A) Liver", "B) Brain", "C) Skin", "D) Heart"},
        {"A) Deoxyribonucleic Acid", "B) Dense Neural Architecture", "C) Double Nuclear Antigen", "D) Digital Nucleic Alloy"},
        {"A) Photosynthesis", "B) Reproduction", "C) Respiration", "D) Decomposition"},
        {"A) Femur", "B) Stapes", "C) Humerus", "D) Fibula"},
        {"A) Mars", "B) Venus", "C) Mercury", "D) Jupiter"},
        {"A) Gravitational pull of the Moon", "B) Gravitational pull of the Sun", "C) Gravitational pull of Jupiter", "D) Gravitational pull of Mars"},
        {"A) Granite", "B) Basalt", "C) Diamond", "D) Obsidian"},
        {"A) Cheetah", "B) Lion", "C) Elephant", "D) Peregrine Falcon"},
        {"A) Iron", "B) Gold", "C) Silver", "D) Copper"},
        {"A) Frog", "B) Crocodile", "C) Turtle", "D) Shark"},
        {"A) Paleontology", "B) Archaeology", "C) Geology", "D) Biology"},
        {"A) Magnetism", "B) Gravity", "C) Centrifugal Force", "D) Electrostatic Force"},
        {"A) Alpha Centauri", "B) Proxima Centauri", "C) Sirius", "D) Betelgeuse"}
    };

    // Answers array
    char answers1[20] = {'A', 'B', 'B', 'A', 'D', 'A', 'B', 'C', 'A', 'A',
	       
		              'B', 'C', 'B', 'A', 'D', 'A', 'D', 'A', 'B', 'B'};
		              
		              
		              
		//  int score = 0;
        srand(time(0));
        bool visit[20] = {false}; // Array to keep track of visited questions

        for (int i = 0; i < num1; i++) {
            int a;
            do {
                a = rand() % 20; // Generate a random index
            } while (visit[a]); // Check if the question at index 'a' has been visited

            visit[a] = true; // Mark this question as visited

            cout << "Question " << i + 1 << ": " << questions1[a] << endl;
            for (int j = 0; j < 4; ++j) {
                cout << options1[a][j] << "  ";
            }
            cout << endl;

            char anss1;
    cout << "Enter your answer: ";
    cin >> anss1;

    while(true){
    	
        if(anss1 != 'A' && anss1 != 'B' && anss1 != 'C' && anss1 != 'D'){
        	
            cout << "Invalid input, please enter a valid option : ";
            
            cin >> anss1;
        } else {
        	
            break; 
        }
    }
            cout << endl;

            if (anss1 == answers1[a]) {
                cout << "\t\t\t\t Right ";
                score3++; 
            } else {
                cout << "\t\t\t\t Wrong ";
            }
            cout << endl;
        }

        cout << "Your final score is: " << score3 << "/" << num1 << endl; 
    }            
		              
		              
		              
		              
		};
		
		
		
	
	
	
	class Generalknowldege : public Science {
		
		protected : 
		int score4=0;
		public : 
		void finalR3(){
		
		string questions2[20] = {
        "1. What is the capital of France?",
        "2. Which planet is known as the Red Planet?",
        "3. Who wrote the play 'Romeo and Juliet'?",
        "4. What is the largest ocean on Earth?",
        "5. Who painted the Mona Lisa?",
        "6. What is the smallest country in the world?",
        "7. Which element has the chemical symbol 'O'?",
        "8. In which year did the Titanic sink?",
        "9. Who was the first man to walk on the moon?",
        "10. What is the longest river in the world?",
        "11. Who is known as the father of computers?",
        "12. What is the hardest natural substance on Earth?",
        "13. Which country is known as the Land of the Rising Sun?",
        "14. Who discovered penicillin?",
        "15. What is the largest desert in the world?",
        "16. What is the tallest mountain in the world?",
        "17. Who was the first President of the United States?",
        "18. What is the currency of Japan?",
        "19. Who wrote the novel '1984'?",
        "20. What is the boiling point of water in Celsius?"
    };

    string options2[20][4] = {
        {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"},
        {"A. Earth", "B. Mars", "C. Jupiter", "D. Venus"},
        {"A. William Wordsworth", "B. William Shakespeare", "C. Jane Austen", "D. Mark Twain"},
        {"A. Indian Ocean", "B. Pacific Ocean", "C. Atlantic Ocean", "D. Arctic Ocean"},
        {"A. Vincent van Gogh", "B. Pablo Picasso", "C. Leonardo da Vinci", "D. Michelangelo"},
        {"A. Vatican City", "B. Monaco", "C. San Marino", "D. Liechtenstein"},
        {"A. Gold", "B. Hydrogen", "C. Oxygen", "D. Nitrogen"},
        {"A. 1912", "B. 1915", "C. 1920", "D. 1925"},
        {"A. Yuri Gagarin", "B. Buzz Aldrin", "C. Neil Armstrong", "D. Alan Shepard"},
        {"A. Amazon", "B. Nile", "C. Yangtze", "D. Mississippi"},
        {"A. Alan Turing", "B. Charles Babbage", "C. John von Neumann", "D. Ada Lovelace"},
        {"A. Gold", "B. Iron", "C. Diamond", "D. Platinum"},
        {"A. China", "B. South Korea", "C. Japan", "D. Thailand"},
        {"A. Marie Curie", "B. Alexander Fleming", "C. Louis Pasteur", "D. Edward Jenner"},
        {"A. Sahara Desert", "B. Arabian Desert", "C. Gobi Desert", "D. Kalahari Desert"},
        {"A. K2", "B. Mount Everest", "C. Kangchenjunga", "D. Lhotse"},
        {"A. George Washington", "B. Thomas Jefferson", "C. Abraham Lincoln", "D. John Adams"},
        {"A. Yen", "B. Yuan", "C. Won", "D. Baht"},
        {"A. George Orwell", "B. Aldous Huxley", "C. J.K. Rowling", "D. F. Scott Fitzgerald"},
        {"A. 90°C", "B. 100°C", "C. 110°C", "D. 120°C"}
    };

    char answers2[20] = {'C', 'B', 'B', 'B', 'C', 'A', 'C', 'A', 'C', 'B', 'B', 'C', 'C', 'B', 'A', 'B', 'A', 'A', 'A', 'B'};
		
		
		
	//	int score = 0;
        srand(time(0));
        bool visit[20] = {false}; // Array to keep track of visited questions

        for (int i = 0; i < num1; i++) {
            int a;
            do {
                a = rand() % 20; // Generate a random index
            } while (visit[a]); // Check if the question at index 'a' has been visited

            visit[a] = true; // Mark this question as visited

            cout << "Question " << i + 1 << ": " << questions2[a] << endl;
            for (int j = 0; j < 4; ++j) {
                cout << options2[a][j] << "  ";
            }
            cout << endl;

            char anss1;
    cout << "Enter your answer: ";
    cin >> anss1;

    while(true){
    	
        if(anss1 != 'A' && anss1 != 'B' && anss1 != 'C' && anss1 != 'D'){
        	
            cout << "Invalid input, please enter a valid option : ";
            
            cin >> anss1;
        } else {
        	
            break; 
        }
    }
            cout << endl;

            if (anss1 == answers2[a]) {
                cout << "\t\t\t\t Right ";
                score4++; 
            } else {
                cout << "\t\t\t\t Wrong ";
            }
            cout << endl;
        }

        cout << "Your final score is: " << score4 << "/" << num1 << endl; 
    }            
		
		

		
	};
		
		
		
		class History : public Generalknowldege{
		
		protected : 
		int score5=0;
		public : 
		
		void finalR4(){
			
		string questions3[20] = {
        "1. Who was the first President of the United States?",
        "2. In which year did World War II end?",
        "3. Who discovered America?",
        "4. What was the name of the ship that brought the Pilgrims to America in 1620?",
        "5. Who was the first emperor of China?",
        "6. Who wrote the Declaration of Independence?",
        "7. In which year did the Berlin Wall fall?",
        "8. Who was the first female Prime Minister of the United Kingdom?",
        "9. Who led the Soviet Union during World War II?",
        "10. What was the main cause of the Cold War?",
        "11. Who was the first person to circumnavigate the globe?",
        "12. Who was the famous queen of ancient Egypt?",
        "13. Which empire was ruled by Genghis Khan?",
        "14. What was the main purpose of the Great Wall of China?",
        "15. Who was known as the 'Mad Monk' in Russian history?",
        "16. In which battle was Napoleon Bonaparte defeated?",
        "17. Who was the main leader of the Indian independence movement?",
        "18. What was the first successful English colony in America?",
        "19. Who was the famous nurse during the Crimean War?",
        "20. In which year was the United Nations founded?"
    };

    string options3[20][4] = {
        {"A. George Washington", "B. Thomas Jefferson", "C. Abraham Lincoln", "D. John Adams"},
        {"A. 1943", "B. 1944", "C. 1945", "D. 1946"},
        {"A. Christopher Columbus", "B. Ferdinand Magellan", "C. Marco Polo", "D. Leif Erikson"},
        {"A. Santa Maria", "B. Mayflower", "C. Pinta", "D. Nina"},
        {"A. Qin Shi Huang", "B. Liu Bang", "C. Kublai Khan", "D. Sun Tzu"},
        {"A. Benjamin Franklin", "B. John Adams", "C. Thomas Jefferson", "D. George Washington"},
        {"A. 1987", "B. 1988", "C. 1989", "D. 1990"},
        {"A. Margaret Thatcher", "B. Theresa May", "C. Elizabeth I", "D. Mary I"},
        {"A. Vladimir Lenin", "B. Joseph Stalin", "C. Leon Trotsky", "D. Nikita Khrushchev"},
        {"A. Religious conflict", "B. Economic rivalry", "C. Political tension", "D. Territorial disputes"},
        {"A. Ferdinand Magellan", "B. Vasco da Gama", "C. Christopher Columbus", "D. James Cook"},
        {"A. Nefertiti", "B. Cleopatra", "C. Hatshepsut", "D. Nefertari"},
        {"A. Ottoman Empire", "B. Roman Empire", "C. Mongol Empire", "D. Byzantine Empire"},
        {"A. Trade", "B. Defense", "C. Transportation", "D. Agriculture"},
        {"A. Rasputin", "B. Ivan the Terrible", "C. Peter the Great", "D. Lenin"},
        {"A. Battle of Trafalgar", "B. Battle of Waterloo", "C. Battle of Hastings", "D. Battle of the Somme"},
        {"A. Jawaharlal Nehru", "B. Subhas Chandra Bose", "C. Bhagat Singh", "D. Mahatma Gandhi"},
        {"A. Jamestown", "B. Plymouth", "C. Roanoke", "D. Williamsburg"},
        {"A. Florence Nightingale", "B. Clara Barton", "C. Edith Cavell", "D. Mary Seacole"},
        {"A. 1943", "B. 1944", "C. 1945", "D. 1946"}
    };

    char answers3[20] = {'A', 'C', 'A', 'B', 'A', 'C', 'C', 'A', 'B', 'C', 'A',
	                  'B', 'C', 'B', 'A', 'B', 'D', 'A', 'A', 'C'};	
	                  
	      
		 // 	int score = 0;
        srand(time(0));
        bool visit[20] = {false}; // Array to keep track of visited questions

        for (int i = 0; i < num1; i++) {
            int a;
            do {
                a = rand() % 20; // Generate a random index
            } while (visit[a]); // Check if the question at index 'a' has been visited

            visit[a] = true; // Mark this question as visited

            cout << "Question " << i + 1 << ": " << questions3[a] << endl;
            for (int j = 0; j < 4; ++j) {
                cout << options3[a][j] << "  ";
            }
            cout << endl;

            char anss1;
    cout << "Enter your answer: ";
    cin >> anss1;

    while(true){
    	
        if(anss1 != 'A' && anss1 != 'B' && anss1 != 'C' && anss1 != 'D'){
        	
            cout << "Invalid input, please enter a valid option : ";
            
            cin >> anss1;
        } else {
        	
            break; 
        }
    }
            cout << endl;

            if (anss1 == answers3[a]) {
                cout << "\t\t\t\t Right ";
                score5++; 
            } else {
                cout << "\t\t\t\t Wrong ";
            }
            cout << endl;
        }

        cout << "Your final score is: " << score5 << "/" << num1 << endl; 
    }                        
	  };
	  class Result : public History {
	  
		
    public:
    int mathNum=0, englishNum=0, scienceNum=0, gkNum=0, historyNum=0;
    void final() {
    	system("cls");
        cout << "\t\t\t\t\t REPORT  " << endl << endl;
        cout << "The Math score is : " << score1 << "/" << mathNum << endl;
        cout << "The English score is : " << score2 << "/" << englishNum << endl;
        cout << "The Science score is : " << score3 << "/" << scienceNum << endl;
        cout << "The General knowledge score is : " << score4 << "/" << gkNum << endl;
        cout << "The History score is : " << score5 << "/" << historyNum << endl;
    }

};      
	                  
	                              
		
	

int main() {
    cout << "\t\t-------------------------- QUIZ CHECKER -----------------------------" << endl << endl;

    Result k;

    k.select();

    while (true) {
        if (k.num == 1) {
            k.finalR();
            k.mathNum = k.num1;
        } else if (k.num == 2) {
            k.finalR1();
            k.englishNum = k.num1;
        } else if (k.num == 3) {
            k.finalR2();
            k.scienceNum = k.num1;
        } else if (k.num == 4) {
            k.finalR3();
            k.gkNum = k.num1;
        } else if (k.num == 5) {
            k.finalR4();
            k.historyNum = k.num1;
        }

        char choice;
        cout << "Do you want to give another test (y/n) : ";
        cin >> choice;
		cout<<endl;
        if (choice != 'y') {
            k.final();
            break;
        } else {
        	
            k.select(); // Select new subject for the next test
        }
    }

    return 0;
}
