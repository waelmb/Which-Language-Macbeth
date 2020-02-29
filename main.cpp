// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: Wael Mobeirek
// Date: Oct 14, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
/*
 *   45 points Grading Rubric for Programming Style
    
        10 Meaningful identifier names
        10 Comments: Has header.  Comments on each block of code
        10 Functional Decomposition
        10 Appropriate data and control structures
         5 Code Layout: Appropriate indentation and blank lines

      Extra Credit (usually up to +10)
      Did not follow naming convention (usually -5)
      Late penalty (usually -30) 
      
    Results of running the final version of the program are shown below.

		Program 3: Which Language

		Letter Frequency Counts:
				 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
		A:   6018  9416  6544  5068  7541  8935  9939 10052
		B:   1464   448  1081  2060  1746  1221  1173  1387
		C:   2144   636  3028  3126  1014  3865  2855  3222
		D:   3331  1013  2698  4592  2265  2945  3687  3815
		E:   9270  7187 12782 14779  8280  9364 10551 10861
		F:   1701   297  1101  1464   932  1099  1039   653
		G:   1333   187   772  2503  2975  1423   983   936
		H:   5244  2384  1004  4775  1687  1485  1413  1263
		I:   4653  8022  5583  7062  2961  8128  4179  3964
		J:     38  1331   538   148  1049     5   216   429
		K:    691  3952    28  1080  3551    51    19    18
		L:   3294  4648  4240  3089  4658  4814  2082  3985
		M:   2481  3526  3269  2861  3812  2790  4415  3021
		N:   4987  7958  5958  9026  4725  5966  4455  5704
		O:   6054  4219  5315  2208  3529  8668  8898  7605
		P:   1000  1331  2297   466   448  2060  1862  1842
		Q:    121    78   907    84    77   548   954   883
		R:   4518  1784  5986  5955  2802  5357  5328  5706
		S:   4943  5425  6898  5852  4538  4863  6774  6468
		T:   7055  7620  6025  5477  5632  5373  3729  3932
		U:   2590  4226  5373  3327   963  3081  3840  3591
		V:    657  1784  1566   661  1297  1287  1351   893
		W:   1926   120    78  1797   138   141    68    61
		X:    112    45   328    89    49    42   260    91
		Y:   1637  1403   247   169  1998   216    65   891
		Z:     15     3   343   939  2742   490   314   301

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
					E     A     E     E     E     E     E     E
					T     I     S     N     A     A     A     A
					O     N     A     I     T     O     O     O
					A     T     T     R     N     I     S     S
					H     E     R     S     L     N     R     R
					N     S     N     T     S     T     N     N
					S     L     I     A     M     R     M     L
					I     U     U     H     K     S     I     I
					R     O     O     D     O     L     U     T
					D     K     L     U     G     C     T     D
					L     M     M     C     I     U     D     U
					U     H     C     L     R     D     C     C
					M     R     D     M     Z     M     L     M
					C     V     P     G     D     P     P     P
					W     Y     V     O     Y     H     H     B
					F     J     F     B     B     G     V     H
					Y     P     B     W     H     V     B     G
					B     D     H     F     V     B     F     V
					G     C     Q     K     J     F     G     Y
					P     B     G     Z     C     Q     Q     Q
					K     F     J     V     U     Z     Z     F
					V     G     Z     P     F     Y     X     J
					Q     W     X     Y     P     W     J     Z
					X     Q     Y     J     W     K     W     X
					J     X     W     X     Q     X     Y     W
					Z     Z     K     Q     X     J     K     K

		Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): 
		Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende 
		resistere sui numeri della manovra, è necessario offrire garanzie all’Europa e ai 
		mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l’altro più politico. 
		La riduzione strutturale del debito viene fissato come un «obiettivo strategico», 
		non a caso sottolineato da Di Maio dopo il vertice. La linea dell’esecutivo è che 
		per far ripartire l’Italia sia necessario «cambiare approccio» con una manovra 
		espansiva «dopo anni di cure rigoriste senza risultati», ma s

		A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3 

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
					E     A     E     E     E     E     E     E     E
					T     I     S     N     A     A     A     A     I
					O     N     A     I     T     O     O     O     A
					A     T     T     R     N     I     S     S     O
					H     E     R     S     L     N     R     R     R
					N     S     N     T     S     T     N     N     T
					S     L     I     A     M     R     M     L     N
					I     U     U     H     K     S     I     I     S
					R     O     O     D     O     L     U     T     L
					D     K     L     U     G     C     T     D     C
					L     M     M     C     I     U     D     U     D
					U     H     C     L     R     D     C     C     U
					M     R     D     M     Z     M     L     M     P
					C     V     P     G     D     P     P     P     M
					W     Y     V     O     Y     H     H     B     V
					F     J     F     B     B     G     V     H     G
					Y     P     B     W     H     V     B     G     B
					B     D     H     F     V     B     F     V     F
					G     C     Q     K     J     F     G     Y     Z
					P     B     G     Z     C     Q     Q     Q     H
					K     F     J     V     U     Z     Z     F     J
					V     G     Z     P     F     Y     X     J     K
					Q     W     X     Y     P     W     J     Z     Q
					X     Q     Y     J     W     K     W     X     W
					J     X     W     X     Q     X     Y     W     X
					Z     Z     K     Q     X     J     K     K     Y

				 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)

		Language is Italian
 
 */

// Your code should go here
// ...
// 
// 
#include <iostream>
#include <cctype>       // For the letter checking functions
#include <fstream>	   // For file input
#include <iomanip>      // For setw
#include <cstdlib>      // For exit()
using namespace std;

#define LIMIT 26        // Max array size, which is number of alphabet	

// Checks if the file is valid, if not, the program will be terminated
void isValidOpenFile(string fileName) {
  ifstream inputFileStream;  // declare the input file stream
  inputFileStream.open( fileName.c_str());   // Convert C++ string to expected C-style string 
  if( !inputFileStream.is_open()) {
   	cout << "Could not find input file.  Exiting..." << endl;
   	exit( -1);
  }
}

// Initializes the array items of size LIMIT to 0
void initializeArray(int* lettersArray) {
  for (int i = 0; i < LIMIT; i++) {
      lettersArray[i] = 0;
   }
}

// Counts the number of occurences for each letter that a file has
void analayzeChars(int* lettersArray, string fileName) {
  char c = ' ';              // input character
  ifstream inputFileStream;  // declare the input file stream

  // Process input one character at at time, echoing input
  // Note that the input skips leading spaces, which is why we don't see
  // them as part of the output.
  
  // *** Yuwei: code within the same block should line up 
   inputFileStream.open( fileName.c_str());   // Convert C++ string to expected C-style string 
   while( inputFileStream >> c) {
      // convert alphabetic input characters to upper case
      if( isalpha( c)) {
          c = toupper( c);
          lettersArray[ c-'A']++; // update letter count, using the character as the index
      }
   }
   inputFileStream.close();
}

// Processes a language file by making calls of other functions
void processLanguageFile(int* lettersArray, string fileName) {
  // open input file and verify
    isValidOpenFile(fileName);
  // initialize lettersArray count values 
    initializeArray(lettersArray);
  // process input one character at at time, echoing input
    analayzeChars(lettersArray, fileName);  
}

// returns the number of digits in a number
int numOfDigits(int num) {
  int counter = 0;
  while(num >= 1) {
    num = num / 10;
    counter++;
  }
  return counter;
}

// prints the number of spaces required before the number
void numOfSpaces(int num) {
  int digits = numOfDigits(num);
  for(int i = digits; i < 6; i++) {
    cout << " ";
  }
}

// set a letter frequency array to the right initial values, which are the alphabet in order
void setLetterFrequencyArray(char* letterFrequency) {
  for(int i = 0; i < LIMIT; i++) {
    letterFrequency[i] = (char)(i+'A'); 
  }
}

// Swap two array elements of type int
void swap( int* theArray, int i, int j)
{
    int temp = theArray[i];     // store temporarily
    theArray[i] = theArray[j];
    theArray[j] = temp;
}

// Swap two array elements of type char
void swap( char* theArray, int i, int j)
{
    char temp = theArray[i];     // store temporarily
    theArray[i] = theArray[j];
    theArray[j] = temp;
}
  
  
// Sorts an array in a descending order, and update the corresponding letterFrequency array
void sort(int* letterArray, char* letterFrequency, int arraySize) 
{
    // Make n-1 passes through the data
    for( int pass = 0; pass < arraySize-1; pass++) {
         
        // Examine adjacent pairs, going from right to left
        for( int i = arraySize-2; i >= 0 + pass; i--) {
            // If pair is out of order, swap them
            if( letterArray[ i] < letterArray[i+1]) {
                swap( letterArray,i,i+1);
                swap( letterFrequency,i,i+1);
            }   
        }
             
    }           
}

//Calculates the frequency of letter in a string
void letterFrequencyString(char c, int* lettersArray, char* letterFrequency) { 
    // convert alphabetic input characters to upper case
    if( isalpha( c)) {
        c = toupper( c);
        lettersArray[ c-'A']++; // update letter count, using the character as the index
    }
}

// Copy an array to another
void cpyArray(int source[], int* destination, int size) {
  for(int i = 0; i < size; i++) {
    destination[i] = source[i];
  }
}

// Returns the total number of occurences in an array
int totalArray(int array[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
      total = total + array[i];
    }
    return total;
}

// Returns the difference between two lettersArray of two languages
double cmpTwoLanguages(int languageA[], int languageB[], int size) {
  double difference = 0;
  double totalA = totalArray(languageA, size);
  double totalB = totalArray(languageB, size);
  double pctA;
  double pctB;
  
  for(int i = 0; i < size; i++) {
      pctA = languageA[i]/totalA * 100;
      pctB = languageB[i]/totalB * 100;
      if(pctA > pctB) {
        difference = difference + (pctA - pctB);
      }
      else if(pctB > pctA) {
        difference = difference + (pctB - pctA);
      }
  }
  return difference;
}

// Returns the index of the minimum value of the array
int indexOfMin(double array[], int size) {
  int minimum = 0;
  for(int i = 0; i < size; i++) {
    if(array[i] < array[minimum]) {
      minimum = i;
    }
  }
  return minimum;
}

// *** Yuwei: can use 2D-array as parameter for this function
// Prints letters frequency count
void printFrequencyCount(int lettersArrayEngl[],
                         int lettersArrayFinn[],
                         int lettersArrayFren[],
                         int lettersArrayGerm[],
                         int lettersArrayHung[],
                         int lettersArrayItal[],
                         int lettersArrayPort[],
                         int lettersArraySpan[]) {
    cout << "Letter Frequency Counts:" << endl;
    cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span" << endl;
    for(int i = 0; i < LIMIT; i++) {
      cout << (char)(i+'A') << ": ";
      // *** Yuwei: can be more efficient by using 2D-array
      numOfSpaces(lettersArrayEngl[i]);
      cout << lettersArrayEngl[i]; 
      numOfSpaces(lettersArrayFinn[i]);
      cout << lettersArrayFinn[i];
      numOfSpaces(lettersArrayFren[i]);
      cout << lettersArrayFren[i];
      numOfSpaces(lettersArrayGerm[i]);
      cout << lettersArrayGerm[i];
      numOfSpaces(lettersArrayHung[i]);
      cout << lettersArrayHung[i];
      numOfSpaces(lettersArrayItal[i]);
      cout << lettersArrayItal[i];
      numOfSpaces(lettersArrayPort[i]);
      cout << lettersArrayPort[i];
      numOfSpaces(lettersArraySpan[i]);
      cout << lettersArraySpan[i] << endl;
    }
    cout << endl; 
}

// Prints letters frequency order
// *** Yuwei: can use 2D-array as parameter for this function
void printFrequencyOrder(char letterFrequencyEngl[],
                         char letterFrequencyFinn[],
                         char letterFrequencyFren[],
                         char letterFrequencyGerm[],
                         char letterFrequencyHung[],
                         char letterFrequencyItal[],
                         char letterFrequencyPort[],
                         char letterFrequencySpan[]) {
  cout << "Letter frequency order:" << endl;
  cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span" << endl;
  for(int i = 0; i < LIMIT; i++) {
    cout << "        ";
    // *** Yuwei: can be more efficient by using 2D-array
    cout << letterFrequencyEngl[i] << "     "; 
    cout << letterFrequencyFinn[i] << "     ";
    cout << letterFrequencyFren[i] << "     ";
    cout << letterFrequencyGerm[i] << "     ";
    cout << letterFrequencyHung[i] << "     ";
    cout << letterFrequencyItal[i] << "     ";
    cout << letterFrequencyPort[i] << "     ";
    cout << letterFrequencySpan[i] << endl;
  }
}

// Prints letters frequency order with userInput
// // *** Yuwei: can use 2D-array as parameter for this function
void printFrequencyOrder(char letterFrequencyEngl[],
                         char letterFrequencyFinn[],
                         char letterFrequencyFren[],
                         char letterFrequencyGerm[],
                         char letterFrequencyHung[],
                         char letterFrequencyItal[],
                         char letterFrequencyPort[],
                         char letterFrequencySpan[],
                         char letterFrequencyUser[]) {
  cout << "Letter frequency order:" << endl;
  cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User" << endl;
  for(int i = 0; i < LIMIT; i++) {
    cout << "        ";
    // *** Yuwei: can be more efficient by using 2D-array
    cout << letterFrequencyEngl[i] << "     "; 
    cout << letterFrequencyFinn[i] << "     ";
    cout << letterFrequencyFren[i] << "     ";
    cout << letterFrequencyGerm[i] << "     ";
    cout << letterFrequencyHung[i] << "     ";
    cout << letterFrequencyItal[i] << "     ";
    cout << letterFrequencyPort[i] << "     ";
    cout << letterFrequencySpan[i] << "     ";
    cout << letterFrequencyUser[i] << endl;
  }
}

int main()
{
    //Initialize the file names of all 8 languages
    string fileNameEngl = "MacbethEnglish.txt";
    string fileNameFinn = "MacbethFinnish.txt";
    string fileNameFren = "MacbethFrench.txt";
    string fileNameGerm = "MacbethGerman.txt";
    string fileNameHung = "MacbethHungarian.txt";
    string fileNameItal = "MacbethItalian.txt";
    string fileNamePort = "MacbethPortuguese.txt";
    string fileNameSpan = "MacbethSpanish.txt";
  
    // initialize the letter count arrays for all 8 languages 
    // *** Yuwei: can be more efficient by using 2D-array 
    int lettersArrayEngl[LIMIT];
    int lettersArrayFinn[LIMIT];
    int lettersArrayFren[LIMIT];
    int lettersArrayGerm[LIMIT];
    int lettersArrayHung[LIMIT];
    int lettersArrayItal[LIMIT];
    int lettersArrayPort[LIMIT];
    int lettersArraySpan[LIMIT];
  
    // process the files for all 8 languages
    // *** Yuwei: can be more efficient by using 2D-array and for loop
    processLanguageFile(lettersArrayEngl, fileNameEngl);
    processLanguageFile(lettersArrayFinn, fileNameFinn);
    processLanguageFile(lettersArrayFren, fileNameFren);
    processLanguageFile(lettersArrayGerm, fileNameGerm);
    processLanguageFile(lettersArrayHung, fileNameHung);
    processLanguageFile(lettersArrayItal, fileNameItal);
    processLanguageFile(lettersArrayPort, fileNamePort);
    processLanguageFile(lettersArraySpan, fileNameSpan);
  
    // initialize the letter frequency arrays for all 8 languages 
    // *** Yuwei: can be more efficient by using 2D-array
    char letterFrequencyEngl[LIMIT];
    char letterFrequencyFinn[LIMIT];
    char letterFrequencyFren[LIMIT];
    char letterFrequencyGerm[LIMIT];
    char letterFrequencyHung[LIMIT];
    char letterFrequencyItal[LIMIT];
    char letterFrequencyPort[LIMIT];
    char letterFrequencySpan[LIMIT];
  
    // set the letter frequency arrays to the right values, which are the alphabet in order
    // *** Yuwei: can be more efficient by using 2D-array and for loop
    setLetterFrequencyArray(letterFrequencyEngl);
    setLetterFrequencyArray(letterFrequencyFinn);
    setLetterFrequencyArray(letterFrequencyFren);
    setLetterFrequencyArray(letterFrequencyGerm);
    setLetterFrequencyArray(letterFrequencyHung);
    setLetterFrequencyArray(letterFrequencyItal);
    setLetterFrequencyArray(letterFrequencyPort);
    setLetterFrequencyArray(letterFrequencySpan);
    
    // initialize a copy of the lettersArray for each language to compare later
    // *** Yuwei: can be more efficient by using 2D-array and for loop
    int lettersArrayCpyEngl[LIMIT];
    int lettersArrayCpyFinn[LIMIT];
    int lettersArrayCpyFren[LIMIT];
    int lettersArrayCpyGerm[LIMIT];
    int lettersArrayCpyHung[LIMIT];
    int lettersArrayCpyItal[LIMIT];
    int lettersArrayCpyPort[LIMIT];
    int lettersArrayCpySpan[LIMIT];
    cpyArray(lettersArrayEngl, lettersArrayCpyEngl, LIMIT);
    cpyArray(lettersArrayFinn, lettersArrayCpyFinn, LIMIT);
    cpyArray(lettersArrayFren, lettersArrayCpyFren, LIMIT);
    cpyArray(lettersArrayGerm, lettersArrayCpyGerm, LIMIT);
    cpyArray(lettersArrayHung, lettersArrayCpyHung, LIMIT);
    cpyArray(lettersArrayItal, lettersArrayCpyItal, LIMIT);
    cpyArray(lettersArrayPort, lettersArrayCpyPort, LIMIT);
    cpyArray(lettersArraySpan, lettersArrayCpySpan, LIMIT);
  
    // sort lettersArray and update letterFrequency
    // *** Yuwei: can be more efficient by using 2D-array and for loop
    sort(lettersArrayEngl, letterFrequencyEngl, LIMIT);
    sort(lettersArrayFinn, letterFrequencyFinn, LIMIT);
    sort(lettersArrayFren, letterFrequencyFren, LIMIT);
    sort(lettersArrayGerm, letterFrequencyGerm, LIMIT);
    sort(lettersArrayHung, letterFrequencyHung, LIMIT);
    sort(lettersArrayItal, letterFrequencyItal, LIMIT);
    sort(lettersArrayPort, letterFrequencyPort, LIMIT);
    sort(lettersArraySpan, letterFrequencySpan, LIMIT);
    
    // Initialize userInput needed arrays
    char userInput;
    int lettersArrayUser[LIMIT];
    initializeArray(lettersArrayUser);
    char letterFrequencyUser[LIMIT];
    setLetterFrequencyArray(letterFrequencyUser);
    int lettersArrayCpyUser[LIMIT];
  
    // print user menu
    int menuChoice;
    cout << "Program 3: Which Language." << endl << endl;
    cout << "Select from the following stages of output to display:  " << endl;
    cout << "   1. Letter frequency counts" << endl;
    cout << "   2. Letter frequency order" << endl;
    cout << "   3. Get user input and display frequency counts    " << endl;
    cout << "   4. Get user input, display frequency counts, and display language" << endl;
    cout << "   0. Exit the program " << endl;
    cout << "Your choice -->" << endl;
    do {
      cin >> menuChoice;
    } while (menuChoice < 0 || menuChoice > 4);
  
    // Perform the desired actions from the user
    if(menuChoice == 0) {
      exit( -1);
    }
    else if (menuChoice == 1) {
      // print letter frequency count table
      printFrequencyCount(lettersArrayCpyEngl,
                          lettersArrayCpyFinn,
                          lettersArrayCpyFren,
                          lettersArrayCpyGerm,
                          lettersArrayCpyHung,
                          lettersArrayCpyItal,
                          lettersArrayCpyPort,
                          lettersArrayCpySpan);
    } 
    else if (menuChoice == 2) {
      // print letter frequency count table
      printFrequencyCount(lettersArrayCpyEngl,
                          lettersArrayCpyFinn,
                          lettersArrayCpyFren,
                          lettersArrayCpyGerm,
                          lettersArrayCpyHung,
                          lettersArrayCpyItal,
                          lettersArrayCpyPort,
                          lettersArrayCpySpan);
      // print the letter frequency order in a table
      printFrequencyOrder(letterFrequencyEngl,
                          letterFrequencyFinn,
                          letterFrequencyFren,
                          letterFrequencyGerm,
                          letterFrequencyHung,
                          letterFrequencyItal,
                          letterFrequencyPort,
                          letterFrequencySpan);
    }
    else if( menuChoice == 3) {
      // print letter frequency count table
      printFrequencyCount(lettersArrayCpyEngl,
                          lettersArrayCpyFinn,
                          lettersArrayCpyFren,
                          lettersArrayCpyGerm,
                          lettersArrayCpyHung,
                          lettersArrayCpyItal,
                          lettersArrayCpyPort,
                          lettersArrayCpySpan);
      // print the letter frequency order in a table
      printFrequencyOrder(letterFrequencyEngl,
                          letterFrequencyFinn,
                          letterFrequencyFren,
                          letterFrequencyGerm,
                          letterFrequencyHung,
                          letterFrequencyItal,
                          letterFrequencyPort,
                          letterFrequencySpan);
      //Get userInput and calculate the letter frequency of the userInput
      cout << endl << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): " << endl;
      while (cin >> userInput) {
        letterFrequencyString(userInput, lettersArrayUser, letterFrequencyUser);
      }
      //Print the letter frequency of the userInput
      cout << endl << endl;
      for(int i = 0; i < LIMIT; i++) {
        cout << (char)(i+'A') << ":" << lettersArrayUser[i] << " ";
      }
      cout << endl << endl;
      //Sort the userInput in a descending order
      sort(lettersArrayUser, letterFrequencyUser, LIMIT);
      // print the letter frequency order in a table
      printFrequencyOrder(letterFrequencyEngl,
                          letterFrequencyFinn,
                          letterFrequencyFren,
                          letterFrequencyGerm,
                          letterFrequencyHung,
                          letterFrequencyItal,
                          letterFrequencyPort,
                          letterFrequencySpan,
                          letterFrequencyUser);
    } 
    else if( menuChoice == 4) {
      // print letter frequency count table
      printFrequencyCount(lettersArrayCpyEngl,
                          lettersArrayCpyFinn,
                          lettersArrayCpyFren,
                          lettersArrayCpyGerm,
                          lettersArrayCpyHung,
                          lettersArrayCpyItal,
                          lettersArrayCpyPort,
                          lettersArrayCpySpan);
      // print the letter frequency order in a table
      printFrequencyOrder(letterFrequencyEngl,
                          letterFrequencyFinn,
                          letterFrequencyFren,
                          letterFrequencyGerm,
                          letterFrequencyHung,
                          letterFrequencyItal,
                          letterFrequencyPort,
                          letterFrequencySpan);
      //Get userInput and calculate the letter frequency of the userInput
      cout << endl << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): " << endl;
      while (cin >> userInput) {
        letterFrequencyString(userInput, lettersArrayUser, letterFrequencyUser);
      }
      //Print the letter frequency of the userInput
      cout << endl << endl;
      for(int i = 0; i < LIMIT; i++) {
        cout << (char)(i+'A') << ":" << lettersArrayUser[i] << " ";
      }
      cout << endl << endl;
      // Copy the array to compare it later
      cpyArray(lettersArrayUser, lettersArrayCpyUser, LIMIT);  
      //Sort the userInput in a descending order
      sort(lettersArrayUser, letterFrequencyUser, LIMIT);
      // print the letter frequency order in a table
      printFrequencyOrder(letterFrequencyEngl,
                          letterFrequencyFinn,
                          letterFrequencyFren,
                          letterFrequencyGerm,
                          letterFrequencyHung,
                          letterFrequencyItal,
                          letterFrequencyPort,
                          letterFrequencySpan,
                          letterFrequencyUser);
      //Store the cmpTwoLanguages results in an array
      double difference[8] = {
        // *** Yuwei: can be more efficient by using 2D-array and for loop
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyEngl, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyFinn, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyFren, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyGerm, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyHung, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyItal, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpyPort, LIMIT),
        cmpTwoLanguages(lettersArrayCpyUser, lettersArrayCpySpan, LIMIT),
      };
      //Choose the language that has the minimum difference, and pick it.
      int minIndex = indexOfMin(difference, 8);

      switch(minIndex) {
        case 0: cout << "Language is English" << endl;
                break;
        case 1: cout << "Language is Finnish" << endl;
                break;
        case 2: cout << "Language is French" << endl;
                break;
        case 3: cout << "Language is German" << endl;
                break;
        case 4: cout << "Language is Hungarian" << endl;
                break;
        case 5: cout << "Language is Italian" << endl;
                break;
        case 6: cout << "Language is Portuguese" << endl;
                break;
        case 7: cout << "Language is Spanish" << endl;
                break;
      }
    }
  return 0;
}//end main()