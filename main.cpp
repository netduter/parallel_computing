#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <array>

using namespace std;

const int COLUMNS=6;const int ROWS=4;


void print_matrix(array<array<int,COLUMNS>,ROWS> matrix_to_be_printed){


    cout<<'\n';
    for(int i=0;i<ROWS;i++){


        for(int j=0;j<COLUMNS;j++){


            cout<<matrix_to_be_printed.at(i).at(j)<<"\t";
        }

        cout<<endl;


    }

    cout<<endl;

}


void init_matrix(array<array<int,COLUMNS>,ROWS> & matrix_to_be_initialized ){



    for(int i=0;i<ROWS;i++){


        for(int j=0;j<COLUMNS;j++){


            matrix_to_be_initialized.at(i).at(j)=0;
        }




    }



}


int main(){


    array<array<int,COLUMNS>,ROWS> starting_matrix;



    init_matrix(starting_matrix);

    cout<<"Ο αρχικός πίνακας είναι:"<<endl;

    print_matrix(starting_matrix);


    //Εκτέλεση σειριακού προγράμματος

    array<array<int,COLUMNS>,ROWS> starting_matrix_copy=starting_matrix;

    for(int i=0;i<4;i++){

        for(int j=0;j<6;j++){


            starting_matrix_copy.at(i).at(j)=starting_matrix_copy.at(3-1).at(4-1)+(i+1)*(j+1);


        }


    }


    cout<<"Εκτελώντας το πρόγραμμα σειριακά λαμβάνουμε"<<endl;


    print_matrix(starting_matrix_copy);


    cout<<"Αφαιρώντας την εξάρτηση από το στοιχείο [3,4] με την if λαμβάνουμε:"<<endl;



    starting_matrix_copy=starting_matrix;

    for(int i=0;i<4;i++){

        for(int j=0;j<6;j++){


            if( !(i==3-1 && j==4-1)){

                starting_matrix_copy.at(i).at(j)=starting_matrix_copy.at(3-1).at(4-1)+(i+1)*(j+1);


            }



        }


    }

    print_matrix(starting_matrix_copy);











    return 0;
}
