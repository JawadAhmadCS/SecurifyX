#include <iostream>
#include <conio.h>
#include <cstring>
#include<windows.h>
using namespace std;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
void color(int y){
SetConsoleTextAttribute(h,y);}
struct STNode {
    char statement[300];
    STNode* prev2;
    STNode* next2;
};
void mash(int zzz){
	  // zzz=0;
	Sleep(zzz);
}
STNode* head2 = NULL;
string f="...";
void SetStatement(char newtitle[30]) {
    STNode* newnode = new STNode;
    for (int i = 0; i < strlen(newtitle) + 1; i++) {
    newnode->statement[i] = newtitle[i];
    }
    newnode->prev2 = NULL;
    newnode->next2 = head2;
    if (head2 != NULL)
        head2->prev2 = newnode;
    head2 = newnode;
    cout << "\nSaving Note ";
    
    color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful\n";
    
    getch();
}

void EncodeStatement(char newtitle[30]) {
    STNode* newnode = new STNode;
    for (int i = 0; i < strlen(newtitle) + 1; i++) {
        if (newtitle[i] == 'A' || newtitle[i] == 'a') newnode->statement[i] = '%';
        else if (newtitle[i] == 'B' || newtitle[i] == 'b') newnode->statement[i] = '$';
        else if (newtitle[i] == 'C' || newtitle[i] == 'c') newnode->statement[i] = '(';
        else if (newtitle[i] == 'D' || newtitle[i] == 'd') newnode->statement[i] = ')';
        else if (newtitle[i] == 'E' || newtitle[i] == 'e') newnode->statement[i] = '@';
        else if (newtitle[i] == 'F' || newtitle[i] == 'f') newnode->statement[i] = '#';
        else if (newtitle[i] == 'G' || newtitle[i] == 'g') newnode->statement[i] = '&';
        else if (newtitle[i] == 'H' || newtitle[i] == 'h') newnode->statement[i] = '^';
        else if (newtitle[i] == 'I' || newtitle[i] == 'i') newnode->statement[i] = '!';
        else if (newtitle[i] == 'J' || newtitle[i] == 'j') newnode->statement[i] = '*';
        else if (newtitle[i] == 'K' || newtitle[i] == 'k') newnode->statement[i] = '+';
        else if (newtitle[i] == 'L' || newtitle[i] == 'l') newnode->statement[i] = '=';
        else if (newtitle[i] == 'M' || newtitle[i] == 'm') newnode->statement[i] = '~';
        else if (newtitle[i] == 'N' || newtitle[i] == 'n') newnode->statement[i] = '{';
        else if (newtitle[i] == 'O' || newtitle[i] == 'o') newnode->statement[i] = '}';
        else if (newtitle[i] == 'P' || newtitle[i] == 'p') newnode->statement[i] = '[';
        else if (newtitle[i] == 'Q' || newtitle[i] == 'q') newnode->statement[i] = ']';
        else if (newtitle[i] == 'R' || newtitle[i] == 'r') newnode->statement[i] = '|';
        else if (newtitle[i] == 'S' || newtitle[i] == 's') newnode->statement[i] = ';';
        else if (newtitle[i] == 'T' || newtitle[i] == 't') newnode->statement[i] = ':';
        else if (newtitle[i] == 'U' || newtitle[i] == 'u') newnode->statement[i] = '"';
        else if (newtitle[i] == 'V' || newtitle[i] == 'v') newnode->statement[i] = '<';
        else if (newtitle[i] == 'W' || newtitle[i] == 'w') newnode->statement[i] = '>';
        else if (newtitle[i] == 'X' || newtitle[i] == 'x') newnode->statement[i] = ',';
        else if (newtitle[i] == 'Y' || newtitle[i] == 'y') newnode->statement[i] = '.';
        else if (newtitle[i] == 'Z' || newtitle[i] == 'z') newnode->statement[i] = '?';
        else if (newtitle[i] == '0') newnode->statement[i] = '-';
        else if (newtitle[i] == '1') newnode->statement[i] = '/';
        else if (newtitle[i] == '2') newnode->statement[i] = '2';
        else if (newtitle[i] == '3') newnode->statement[i] = '3';
        else if (newtitle[i] == '4') newnode->statement[i] = '4';
        else if (newtitle[i] == '5') newnode->statement[i] = '_';
        else if (newtitle[i] == '6') newnode->statement[i] = '6';
        else if (newtitle[i] == '7') newnode->statement[i] = '`';
        else if (newtitle[i] == '8') newnode->statement[i] = '8';
        else if (newtitle[i] == '9') newnode->statement[i] = '9';
        else newnode->statement[i] = newtitle[i];
    }
    newnode->prev2 = NULL;
    newnode->next2 = head2;
    if (head2 != NULL)
        head2->prev2 = newnode;
    head2 = newnode;
    cout << "\nEncoding Note " ;
    color(12);
	for(int i=0;i<f.length();i++){
	mash(400);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful\n";
    getch();
}

void STDisplay() {
    if (head2 == NULL) {
    	color(11);
        cout << "\n\nNo data is entered yet";
        color(15);
    } else {
        //system("cls");
        STNode* current = new STNode;
        current = head2;
        while (current->next2 != NULL) {
            current = current->next2;
        }
        while (current != NULL) {
            cout << "\n" << current->statement << "\n";
            current = current->prev2;
        }
    }
}
struct Node {
    char title[30];
    Node* prev;
    Node* next;
};

struct Node1 {
    char data[30];
    Node1* prev1;
    Node1* next1;
};

class Title {
protected:
    Node* head = NULL;

public:
    void SetTitle(char newtitle[30]) {
        Node* newnode = new Node;
        for (int i = 0; i < strlen(newtitle) + 1; i++) {
            newnode->title[i] = newtitle[i];
        }
        newnode->prev = NULL;
        newnode->next = head;
        if (head != NULL)
            head->prev = newnode;
        head = newnode;
    }

    void TitleDisplay() {
        if (head == NULL) {
        	color(11);
            cout << "\nNo data is entered yet";
            color(15);
        } else {
            system("cls");
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            while (current != NULL) {
                cout << "\n" << current->title << ":\n";
                current = current->prev;
            }
        }
    }

    void DisplayTitlesWithIndex() {
        if (head == NULL) {
        	color(11);
            cout << "\nNo titles available!";
            color(15);
        } else {
            Node* current = head;
            int index = 0;

            while (current != NULL) {
                cout << "\n" << index << ": " << current->title;
                current = current->next;
                index++;
            }
        }
    }

    void UpdateTitle(int index, char updatedTitle[30]) {
        Node* current = head;
        for (int i = 0; i < index && current != NULL; i++) {
            current = current->next;
        }

        if (current != NULL) {
            strcpy(current->title, updatedTitle);
            cout << "\nUpdation Of Title \n";
            color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful!\n";
        } else {
        	color(12);
            cout << "\nInvalid index for title update!\n";
            color(15);
        }
    }

    void DeleteTitle(int index) {
        Node* current = head;
        for (int i = 0; i < index && current != NULL; i++) {
            current = current->next;
        }

        if (current != NULL) {
            if (current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }

            if (current->next != NULL) {
                current->next->prev = current->prev;
            }

            delete current;
            cout << "\nDeletion Of Title \n";
            color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful!\n";
        } else {
        	color(12);
            cout << "\nInvalid index for title deletion!\n";
            color(15);
        }
    }
    void DeleteTitleAndSetEmpty(int index) {
        Node* current = head;
        for (int i = 0; i < index && current != NULL; i++) {
            current = current->next;
        }

        if (current != NULL) {
            strcpy(current->title, " "); // Set title to empty space
            cout << "\nDeletion Of Title \n";
            color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful!\n";
        } else {
        	color(12);
            cout << "\nInvalid index for title deletion!\n";
            color(15);
        }
    }
};

class Data : public Title {
private:
    Node1* head1;
    int aa;

public:
    Data() {
        head1 = NULL;
    }
    char newdata[30];

    void SetData() {
        system("cls");
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        while (current != NULL) {
            cout << "\n" << current->title << ": ";
//            cin.ignore();
            cin.getline(newdata, sizeof(newdata));
            if (strcmp(newdata, "") == 0) {
            	color(4);
                cout << "\nFirst enter data\n";
                color(15);
            } else {
                Node1* newnode = new Node1;
                for (int i = 0; i < 30; i++) {
                    newnode->data[i] = newdata[i];
                }
                newnode->prev1 = NULL;
                newnode->next1 = head1;
                if (head1 != NULL)
                    head1->prev1 = newnode;
                head1 = newnode;
                current = current->prev;
            }
            
        }
    }

    void DataDisplay() {
        if (head1 == NULL) {
        	color(11);
            cout << "\n\nNo data is entered yet";
            color(15);
        } else {
            aa = 0;
            system("cls");
            Node* current = head;
            Node1* current1 = head1;
            while (current->next != NULL) {
                current = current->next;
            }
            while (current != NULL) {
                cout << "\n" << current->title << ": ";

                while (current1->next1 != NULL && aa == 0) {
                    current1 = current1->next1;
                }
                aa++;
                cout << current1->data << "\n";
                current1 = current1->prev1;
                current = current->prev;
            }
        }
    }

    void DisplayDataWithIndex() {
        if (head1 == NULL) {
        	color(11);
            cout << "\nNo data available!";
            color(15);
        } else {
            Node1* current1 = head1;
            int index = 0;

            while (current1 != NULL) {
                cout << "\n" << index << ": " << current1->data;
                current1 = current1->next1;
                index++;
            }
        }
    }

    void UpdateData(int index, char updatedData[30]) {
        Node1* current1 = head1;
        for (int i = 0; i < index && current1 != NULL; i++) {
            current1 = current1->next1;
        }

        if (current1 != NULL) {
            strcpy(current1->data, updatedData);
            cout << "\nUpdation Of Data \n";
            color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful!\n";
        } else {
        	color(12);
            cout << "\nInvalid index for data update!\n";
            color(15);
        }
    }

    void DeleteData(int index) {
        Node1* current1 = head1;
        for (int i = 0; i < index && current1 != NULL; i++) {
            current1 = current1->next1;
        }

        if (current1 != NULL) {
            if (current1->prev1 != NULL) {
                current1->prev1->next1 = current1->next1;
            } else {
                head1 = current1->next1;
            }

            if (current1->next1 != NULL) {
                current1->next1->prev1 = current1->prev1;
            }

            delete current1;
            cout << "\nDeletion Of Data \n";
            color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful!\n";
        } else {
        	color(12);
            cout << "\nInvalid index for data deletion!\n";
            color(15);
        }
    }
    void DeleteDataAndSetEmpty(int index) {
        Node1* current1 = head1;
        for (int i = 0; i < index && current1 != NULL; i++) {
            current1 = current1->next1;
        }

        if (current1 != NULL) {
            strcpy(current1->data, " "); // Set data to empty space
            cout << "\nDeletion Of Data \n";
            color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<" Successful!\n";
        } else {
        	color(12);
            cout << "\nInvalid index for data deletion!\n";
            color(15);
        }
    }
    void SetStatment(){
    	system("cls");
	 char A[300];
	 int choooice;
	 color(12);cout << "\n\n        1)";color(15);cout<<" Write Note ";
    color(12);cout << "\n        2)";color(15);cout<<" Display Notes\n";
    color(800);cout<<"\n\tEnter your choice";color(7); 
	 choooice = getch() - '0';

            switch (choooice) {
            case 1:
            	system("cls");
            	color(11);
               cout << "\nWrite Note : ";
               color(15);
    cin.getline(A, sizeof(A));
    if (strcmp(A, "") == 0) {
    	color(4);
        cout << "First enter Data";
        color(15);
    } else {
    	color(11);
    	cout << "\n      Do You Want To Encode Your Note";
    	color(12);cout << "\n\n        1)";color(15);cout<<" Yes";
color(12);cout << "\n        2)";color(15);cout<<" No\n";
color(800);cout<<"\n\tEnter your choice";color(7);
	 choooice = getch() - '0';

            switch (choooice) {
            case 1:
            	EncodeStatement(A);
				break;
            	case 2:
            	SetStatement(A);//e after t ... ye oopr wala function nhi ha ye ak alag function hai jo linklist ma store kr rha
            	break;
				}
    }

                break;
            case 2:
            	system("cls");
                STDisplay();
                getch();
                break;
               default:
               	color(12);
                cout << "\n\nInvalid Choice"; 
                color(15);
}
}
};

int main() {
    Data d;
    int titno;
    string username,passward;
    int choice, choice2, check = 1;
    char tit[30];

    do {
        system("cls");
         color(13); cout << " /\\_/\\  ";color(12);cout<<"                                   /\\_/\\     ";color(9);cout<<"                      /\\_/\\" << std::endl;
   color(13); cout << "( o.o )   ";color(12);cout<<"                                ( o.o )       ";color(9);cout<<"                  ( o.o )" << std::endl;
   color(13); cout << " > ^ <    ";color(12);cout<<"                                 > ^ <        ";color(9);cout<<"                   > ^ <" << std::endl;
    color(10);
    color(9);cout << "  88888  ";color(2);cout<<"  8888    888o    88   88    88 o88    oo      8888    88   88";color(13);cout<<"  88     88  \n";color(10);
    color(9);cout << " 888     ";color(2);cout<<" 88  88  88       88   88    88o       88      88      88   88";color(13);cout<<"   88   88\n";color(10);
    color(9);cout << " 888     ";color(2);cout<<" 88888   88       88   88    88        88    888888     88888 ";color(13);cout<<"    88 88  \n";color(10);
    color(9);cout << "    8888 ";color(2);cout<<" 88      88       88   88    88        88      88          88 ";color(13);cout<<"     888  \n";color(10);
    color(9);cout << "      888";color(2);cout<<"  8888o   888o    88ooo88o   88        88      88       8888  ";color(13);cout<<"    88 88 \n";color(10);
    color(9);cout << "     888 ";color(2);cout<<"                                                              ";color(13);cout<<"   88   88\n";color(10);
    color(9);cout << "  8888   ";color(2);cout<<"                                                              ";color(13);cout<<"  88     88\n";color(10);
     
        color(12);cout << "\n\n        1)";color(15);cout<<" Create Text Note";
        color(12);cout << "\n        2)";color(15);cout<<" Create Titles For Data";
        color(12);cout << "\n        3)";color(15);cout<<" Exit\n";
        color(800);cout<<"\n\tEnter your choice";color(7);
	
        choice2 = getch() - '0';

        switch (choice2) {
        	case 3:
                cout << "\n\n\tExited";
                check = 0;
                break;
        case 1:
            d.SetStatment();
            break;
        case 2:
        	
			
            system("cls");
            color(12);cout << "\n1)";color(15);cout<<" To Set Titles";
            color(12);cout << "\n2)";color(15);cout<<" To Set Data In Titles";
            color(12);cout << "\n3)";color(15);cout<<" To Title Display";
            color(12);cout << "\n4)";color(15);cout<<" To Data Display";
            color(12);cout << "\n5)";color(15);cout<<" To Update Title";
            color(12);cout << "\n6)";color(15);cout<<" To Update Data";
            color(12);cout << "\n7)";color(15);cout<<" To Delete Title";
            color(12);cout << "\n8)";color(15);cout<<" To Delete Data";
            color(12);cout << "\n9)";color(15);cout<<" To Main Menue";
            color(800);cout<<"\n\tEnter your choice";color(7);
            choice = getch() - '0';

            switch (choice) {
            case 1:
                system("cls");
                color(13);
                cout << "Title Numbers: ";
                color(15);
                cin >> titno;
                cin.ignore();
                for (int q = 0; q < titno; q++) {
                	color(13);
                    cout << "\nWrite Title " << q + 1 << ": ";
                    color(15);
                    cin.getline(tit, sizeof(tit));
                    if (strcmp(tit, "") == 0) {
                    	color(4);
                        cout << "\nFirst enter title\n";
                        color(15);
                        q--;
                    } else
                        d.SetTitle(tit);
             }
                break;
            case 2:
                d.SetData();
                break;
            case 3:
                d.TitleDisplay();
                break;
            case 4:
            	color(10);
			cout<<"\n\t\t Enter Username :";color(15);cin>>username;
			color(10);
			cout<<"\n\t\t Enter Passward :";color(15);cin>>passward;
			if(username=="jawad"&&passward=="1234"){
                d.DataDisplay();
				getch();}
                else{
				color(4);
	cout<<"\n\t\t  Invalid Passward\n";
	 color(15);
	 getch();
			}
                break;
            case 5: {
            	color(10);
			cout<<"\n\t\t Enter Username :";color(15);cin>>username;
			color(10);
			cout<<"\n\t\t Enter Passward :";color(15);cin>>passward;
			if(username=="jawad"&&passward=="1234"){
                int index;
                char updatedTitle[30];

                d.DisplayTitlesWithIndex();
                color(11);
                cout << "\nEnter the index of title to update: ";
                color(15);
                cin >> index;
                cin.ignore();
                color(11);
                cout << "\nEnter the updated title: ";
                color(15);
                cin.getline(updatedTitle, sizeof(updatedTitle));
                d.UpdateTitle(index, updatedTitle);
                getch();
                }
                else{
				color(4);
	cout<<"\n\t\t  Invalid Passward\n";
	 color(15);
	 getch();
			}
                break;
            }
            case 6: {
            		color(10);
			cout<<"\n\t\t Enter Username :";color(15);cin>>username;
			color(10);
			cout<<"\n\t\t Enter Passward :";color(15);cin>>passward;
			if(username=="jawad"&&passward=="1234"){
                int index;
                char updatedData[30];
                d.DisplayDataWithIndex();
                color(11);
                cout << "\nEnter the index of data to update: ";
                color(15);
                cin >> index;
                cin.ignore();
                color(11);
                cout << "\nEnter the updated data: ";
                color(15);
                cin.getline(updatedData, sizeof(updatedData));
                d.UpdateData(index, updatedData);
                getch();
                }
                
                else{
				color(4);
	cout<<"\n\t\t  Invalid Passward\n";
	 color(15);
	 getch();
			}
                break;
            }
            case 7: {
            	color(10);
			cout<<"\n\t\t Enter Username :";color(15);cin>>username;
			color(10);
			cout<<"\n\t\t Enter Passward :";color(15);cin>>passward;
			if(username=="jawad"&&passward=="1234"){
                int index;

                d.DisplayTitlesWithIndex();
                color(11);
                cout << "\nEnter the index of title to delete: ";
                color(15);
                cin >> index;
                d.DeleteTitleAndSetEmpty(index);
                getch();
                }
                else{
				color(4);
	cout<<"\n\t\t  Invalid Passward\n";
	 color(15);
	 getch();
			}
                break;
            }
            case 8: {
            	color(10);
			cout<<"\n\t\t Enter Username :";color(15);cin>>username;
			color(10);
			cout<<"\n\t\t Enter Passward :";color(15);cin>>passward;
			if(username=="jawad"&&passward=="1234"){
                int index;

                d.DisplayDataWithIndex();
                color(11);
                cout << "\nEnter the index of data to delete: ";
                color(15);
                cin >> index;
                d.DeleteDataAndSetEmpty(index);
                getch();
                }
                else{
				color(4);
	cout<<"\n\t\t  Invalid Passward\n";
	 color(15);
	 getch();
			}
                break;
            }
            case 9:
                main();
                break;
            default:
            	color(12);
                cout << "\n\nInvalid Choice";
                color(15);
            }
            cin.ignore();
            break;
        }
    } while (check);
    return 0;
}

