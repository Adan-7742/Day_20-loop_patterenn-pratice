//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend  Day 7.......................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
using namespace std;
int loop() {

	int i, j;
	int x = 1;
	for (i = 1;i <= 5;i++) {
		for (j = 1;j <= 5;j++) {

			cout << x++<< " ";
			

		}
		cout << endl;
	}

	//.........................Output.........................


	/*
						1 2 3 4 5
						6 7 8 9 10
						11 12 13 14 15
						16 17 18 19 20
						21 22 23 24 25
	*/

	//........how it work...................

	//in this logic we will use only x here every single value is controlled by x 
	//as x is outsie of both loops it start from 1 and it will incremented by 1 and so
	//after that it will incremented constently............

	cout << "==========================================================================" << endl;
	return 0;
}

int ptr() {

	int i, j;
	int x = 1;
	for (i = 1;i <= 5;i++) {
		for (j = 1;j <= 5;j++) {

			cout << i + j - 1 << " ";
	

		}
		cout << endl;
	}

	//....................output...................

	/*
	
				1 2 3 4 5
				2 3 4 5 6
				3 4 5 6 7
				4 5 6 7 8
				5 6 7 8 9
	
	
	*/

	//.................How it workk....................

	//it work with the formula of i+j-1 all the logic is hre
	//by using this formula we wil print this loop or patteren

	cout << "==========================================================================" << endl;
	return 0;
}
int ptr1() {

	int i, j;
	int n=9,mid = n/2+1;
	for (i = 1;i <= 9;i++) {
		for (j = 1;j <= 9;j++) {
			if (i + j == mid + 1 || i - j == n / 2 || j - i == n / 2 || i + j == n + mid) {
				cout << "* ";
			}
			else
				cout << " ";
			


		}
		cout << endl;
	}

	//..............Output.....................

	/*
						*
					   *  *
					  *    *
					 *      *
					*        *
					 *      *
					  *    *
					   *  *
						*
	*/

	//................How it work ........................

	// it will check the condition of if if one condition is satisfied 
	//it will print the value of *
	//if it does not match it will print the value of space......
	//and it will create the simond shape

	cout << "==========================================================================" << endl;
	return 0;
}
int ptr3() {

	int i, j;
	int n = 7;
	for (i = 1;i <= 7;i++) {
		for (j = 1;j <= 7;j++) {
			if (i==n || j==n || i==j) {
				cout << "* ";
			}
			else
				cout << "  ";



		}
		cout << endl;
	}

	//.....................output...................

	/*
						*           *
						  *         *
							*       *
							  *     *
								*   *
								  * *
						* * * * * * *
	*/


	cout << "==========================================================================" << endl;


	
	for (i = 1;i <= 7;i++) {
		for (j = 1;j <= 7;j++) {
			if (j == 1 || i == n || i +j== n+1) {
				cout << "* ";
			}
			else
				cout << "  ";



		}
		cout << endl;
	}

	//.........................Output......................

	/*
								*           *
								*         *
								*       *
								*     *
								*   *
								* *
								* * * * * * *
	
	*/


	cout << "==========================================================================" << endl;



	for (i = 1;i <= 7;i++) {
		for (j = 1;j <= 7;j++) {
			if (i == 1 || j == n || i + j == n + 1) {
				cout << "* ";
			}
			else
				cout << "  ";



		}
		cout << endl;
	}


	//.................Output..................

	/*
	
					* * * * * * *
							  * *
							*   *
						  *     *
						*       *
					  *         *
					*           *
	*/



	cout << "==========================================================================" << endl;



	for (i = 1;i <= 7;i++) {
		for (j = 1;j <= 7;j++) {
			if (i == 1 || j == 1 || i  == j) {
				cout << "* ";
			}
			else
				cout << "  ";



		}
		cout << endl;
	}


	//................Output................

	/*
	
					* * * * * * *
					* *
					*   *
					*     *
					*       *
					*         *
					*           *
	*/
	return 0;
}
int main()
{
	loop();
	ptr();
	ptr1();
	ptr3();
}
