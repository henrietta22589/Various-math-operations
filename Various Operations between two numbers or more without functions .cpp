/*Πρόσθεση 2 αριθμών χωρίς την Χρήση Συναρτήσεων*/
#include <iostream>
using namespace std;
int main()
{
    int athroisma,num_1,num_2;
    cout<<"Δώσε μου δύο ακέραιους αριθμούς"<<endl;
    cin>>num_1>>num_2;
    cout<<"Ο πρώτος αριθμός που μου έδωσες είναι"<<num_1<<endl<<"Ο Δευτέρος αριθμός που μου έδωσες είναι ";
    cout<<num_2<<endl;
    athroisma=num_1+num_2;
    cout<<"Το αθροίσμα αυτών των δύο αριθμών είναι "<<athroisma;
    
    
    return 0;
}
/*Πρόσθεση πολλών αριθμών χωρίς την Χρήση Συναρτήσεων*/
#include <iostream>
using namespace std;
int main()
{
    int athroisma=0,added_num,i;
    cout<<"Give me the number of the numbers you want to add ";
    cin>>added_num;
    int sum[added_num];
    for(i=0;i<added_num;i++)
    {
      cout<<"Give me the number you want to be added " ;
      cin>>sum[i];
    }
    cout<<"The numbers you have requested to be added are :";
    for(i=0;i<added_num;i++)
    {
      cout<<endl<<sum[i];
      /*Ευρέση αθροίσματος στοιχείων πίνακα*/
      athroisma=sum[i]+athroisma;
    }
      cout<<endl<<"The sum of the numbers you gave us are: "<<athroisma;
    
    return 0;
}
/*Επεξήγηση αυτού του μέρους του κώδικα 
for(i=0;i<added_num;i++)
    {
      cout<<endl<<sum[i];
      /*Ευρέση αθροίσματος στοιχείων πίνακα*/
 //     athroisma=sum[i]+athroisma;
//  }
//     cout<<endl<<"The sum of the numbers you gave us are: "<<athroisma; */
//Τι κάνει; 
/*Για 1η μπαίνει για i=0, αφού 0<3 και βλέπει ότι το πρώτο στοιχείο του πίνακα, έστω ότι είναι 4 πηγαίνει
κατεβαίνει λίγο πιο κάτω στο αθροίσμα, το οποίο είναι αρχικοποίημενο με την τιμή 0 και λέει athroisma=4+0=> όποτε πλέον το αθροίσμα έχει τιμή
4 μόλις συναντάει την αγκύλη } πηγαίνει ξάνα πάνω και το i=1 εφόσον 1<3 */
/*Για 2η μπαίνει για i=1, αφού 0<3 και βλέπει ότι το δευτέρο στοιχείο του πίνακα, έστω ότι είναι 5 πηγαίνει
κατεβαίνει λίγο πιο κάτω στο αθροίσμα, το οποίο εχεί πλέον την τιμή 4 και λέει athroisma=5+4=> όποτε πλέον το αθροίσμα έχει τιμή
9 μόλις συναντάει την αγκύλη } πηγαίνει ξάνα πάνω και το i=2 εφόσον 2<3 */
/*Για 3η μπαίνει για i=2, αφού 2<3 και βλέπει ότι το τρίτο στοιχείο του πίνακα, έστω ότι είναι 6 πηγαίνει
κατεβαίνει λίγο πιο κάτω στο αθροίσμα, το οποίο εχεί πλέον την τιμή 9 και λέει athroisma=6+9=> όποτε πλέον το αθροίσμα έχει τιμή
15 μόλις συναντάει την αγκύλη } πηγαίνει ξάνα πάνω και το i=3 εφόσον 3<3 δεν ίσχυει δεν μπορεί να μπεί ξανά μέσα στην λούπα
Οπότε πηγαίνει στην επόμενη "οδηγία"όπου λέει να εμφανίστει το αθροίσμα->cout<<endl<<"The sum of the numbers you gave us are: "<<athroisma;
το αθροίσμα την τελευταία φορά ήτανε 15 όποτε θα εμφανίστει ο αριθμός 15 */  

/*πολλαπλασιασμός πολλών αριθμών χωρίς την Χρήση Συναρτήσεων*/
#include <iostream>
using namespace std;
int main()
{
  // Αρχικοποιείται η μεταβλητή multiply με 1
  float multiply = 1;
  int multiply_num;

  // Ζητείται από τον χρήστη να εισάγει τον αριθμό των αριθμών που θέλουν να πολλαπλασιάσουν
  cout << "Give me the ammount of the numbers you want to be multiplied ";
  cin >> multiply_num;

  // Δημιουργείται ένας πίνακας float με μέγεθος multiply_num
  float mult[multiply_num];

  // Ζητείται από τον χρήστη να εισάγει τους αριθμούς που θέλουν να πολλαπλασιάσουν
  for (int i = 0; i < multiply_num; i++) {
    cout << "Give me the number you would like to be multiplied: ";
    cin >> mult[i];
  }

  // Εκτυπώνονται οι αριθμοί που εισήγαγε ο χρήστης
  cout << endl << "The numbers you have gave me are: ";
  for (int i = 0; i < multiply_num; i++) {
    cout << endl << mult[i];
  }

  // Πολλαπλασιάζονται οι αριθμοί του πίνακα
  for (int i = 0; i < multiply_num; i++) {
    multiply = mult[i] * multiply;
  }

  // Εκτυπώνεται το γινόμενο των αριθμών του πίνακα
  cout << endl << "Το γινόμενο των στοιχείων του πίνακα είναι: " << multiply;

  return 0;
} 
#include <iostream>
using namespace std;

int main()
{
  // Αρχικοποιείται η μεταβλητή divide με 1
  float divide=1;
  int divide_num,number,i;
  bool option=0;
  cout<<"Give me the amount of numbers you would like to be divided ";
  cin>>divide_num;
  float div_0[divide_num],div_1[divide_num];
  for (i=0; i<divide_num;i++)
  {
      cout<<"Give me the number you would like to be divided: ";
      cin>>div_0[i];
  }
  /*Στην Αλγέβρα μπορεί ένας πίνακας να διαιρέθει μέ έναν μεμονωμένο αριθμό, η μέ έναν αλλόν πίνακα
  ίδιου μεγέθους, όποτε παρακάτω δίνεται η δυνατότητα να επιλέξετε αν θέλετε να διαιρεθει ο πίνακας 
  μέ έναν αριθμό η μέ πολλούς αριθμούς. Ο αριθμός των αριθμών, θα είναι ίδιος με τον αριθμό των αριθμών
  που ορίσαμε στην ερώτηση: Πόσους αριθμούς θέλετε να διαιρέσετε;΄*/
  cout<<"Would you like your array to be divided by a single number?"<<endl<<"or by  multiple numbers ?";
  cout<<endl<<"If you would like to divide your numbers with a single number press 1";
  cin>>option;
  if (option==1)
  {
      cout<<endl<<"Give me the number you would like to divide your given numbers";
      cin>>number;
      while(number!=0)
      {
          for(i=0;i<divide_num;i++)
      {
          divide=div_0[i]/number;
          cout<<"the result is "<<endl<<divide;
      }/*Ουσιαστίκα τι λέει η δομή της while όσο ο αριθμός που είσαγει ο χρήστης είναι διαφορετικός 
      απο 0 μπαίνει μέσα στην for, αλλά επαναλαμβάνεται επ΄’απειρον...για να μην επαναλαμβάνεται επ΄’
      απειρον βάζουμε στο τέλος της δομής while ένα Break για να μην γίνεται αυτό. Αν βάλει ο Χρήστης 
      για αριθμό, τον αριθμό 0 τότε τερματίζει το πρόγραμμα*/
      break;
      } 
  }
  else
  {cout<<"Give me the numbers you would like to be the divisors";
  for(i=0;i<divide_num;i++)
  {
      /*Πάρε τους αριθμούς του χρήστη, που θέλει να χρησιμοπιήθουν ως διαιρέτες*/
      do
     {
         cin>>div_1[i];
         cout<<"Geia";
     }while(div_1[i]!=0);
  }
  /*Τα αποτελεσμάτα της διαιρέσης είναι τα παρακάτω*/
  }
  return 0;
}