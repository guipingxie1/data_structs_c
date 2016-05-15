/**
 * 	@file: stl_test.cpp
 * 	@author: Guiping Xie 
 *
 * 	@description: Tests the stl data structures
 *	@date: Spring 2016
 *
 */

#include <stack>
#include <queue>				// contains both queue, priority queue
#include <deque>
#include <map>
#include <set>
#include <vector>
#include <unordered_set>		// hashtable

#include <string>
#include <cassert>
#include <cstdio>


using namespace std;

struct tester {
	int k;
	char c;
	double g;
};

//-------------------------------------------------------------------

//-------------------------------------------------------------------

void stack_teststruct() {
	stack<tester> s;

	int t = 5;
	
	while ( t-- ) {	
		for ( int i = 0; i < 4096; ++i ) {
			tester x;
			x.k = i;
			x.c = i % 26 + 'a';
			x.g = i * i / 3.0;
			s.push( x );
		}
	
		for ( int i = 0; i < 4096; ++i ) 
			s.pop();
	}
}

void stack_testint() {
	stack<int> s;
	int t = 5;
	
	while ( t-- ) {	
		for ( int i = 0; i < 16384; ++i ) 
			s.push( i );
	
		for ( int i = 0; i < 16384; ++i ) 
			s.pop();
			
		for ( int i = 0; i < 50000; ++i ) 
			s.push( i );
			
		for ( int i = 0; i < 25000; ++i ) 
			s.pop();
			
		for ( int i = 0; i < 25000; ++i ) 
			s.push( i );
			
		for ( int i = 0; i < 50000; ++i ) 
			s.pop();	
	}
}


void stack_teststruct_p() {
	stack<tester> s;
	
	for ( int i = 0; i < 64; ++i ) {
		tester x;
		x.k = i;
		x.c = i % 26 + 'a';
		x.g = i * i / 3.0;
		s.push( x );
	}

	for ( int i = 0; i < 64; ++i ) {
		tester x = s.top();
		printf("%d, %c, %f ---", x.k, x.c, x.g);
		s.pop();
	}
	
	printf("\n");
}

void stack_testint_p() {
	stack<int> s;

	for ( int i = 0; i < 128; ++i ) 
		s.push( i );

	for ( int i = 0; i < 128; ++i ) {
		int k = s.top();
		printf("%d ", k);
		s.pop();
	}
	
	printf("\n");
}

//-------------------------------------------------------------------

//-------------------------------------------------------------------

void vector_teststruct() {
	vector<tester> v;

	int t = 5;
	
	while ( t-- ) {	
		for ( int i = 0; i < 4096; ++i ) {
			tester x;
			x.k = i;
			x.c = i % 26 + 'a';
			x.g = i * i / 3.0;
			v.push_back( x );
		}
	
		for ( int i = 0; i < 4096; ++i ) 
			v[i].k = i << 1;
	}
}

void vector_testint() {
	vector<int> v;
	int t = 5;
	
	while ( t-- ) {	
		for ( int i = 0; i < 4096; ++i ) 
			v.push_back( i );
	
		for ( int i = 0; i < 4096; ++i ) 
			v[i] *= (i >> 1);
			
		for ( int i = 0; i < 4096; ++i ) 
			v.erase(--v.end());
			
		for ( int i = 0; i < 16384; ++i ) 
			v.push_back( i );
			
		for ( int i = 0; i < 16384; ++i ) 
			v[i] = 0;	
			
		for ( int i = 0; i < 256; ++i )
			v.insert(v.begin(), 1);
			
		for ( int i = 0; i < 256; ++i )
			v.erase(v.begin());
			
		v.clear();			
	}
	
	vector< vector<int> > vv;
	
	for ( int i = 0; i < 256; ++i ) {
		vector<int> k;
		
		for ( int j = 0; j < 256; ++j )
			k.push_back(j);
			
		vv.push_back(k);	
	}
}


void vector_teststruct_p() {
	vector<tester> v;
	
	for ( int i = 0; i < 64; ++i ) {
		tester x;
		x.k = i;
		x.c = i % 26 + 'a';
		x.g = i * i / 3.0;
		v.push_back( x );
	}

	for ( int i = 0; i < 64; ++i ) {
		tester x = v[i];
		printf("%d, %c, %f ---", x.k, x.c, x.g);
	}
	
	printf("\n");
}

void vector_testint_p() {
	vector<int> v;

	for ( int i = 0; i < 128; ++i ) 
		v.push_back( i );

	for ( int i = 0; i < 128; ++i ) 
		printf("%d ", v[i]);
		
	for ( int i = 0; i < 128; ++i ) {
		v[i] *= (i >> 1);
		printf("%d ", v[i]);	
	}
	
	vector< vector<int> > vv;
	
	for ( int i = 0; i < 16; ++i ) {
		vector<int> k;
		
		for ( int j = 0; j < 16; ++j )
			k.push_back(j);
			
		vv.push_back(k);	
	}

	for ( int i = 0; i < 16; ++i ) {
		for ( int j = 0; j < 16; ++j )
			printf("%d ", vv[i][j]);	
	}
	
	printf("\n");
}

//-------------------------------------------------------------------

//-------------------------------------------------------------------

int main( int argc, char* argv[] ) {
	assert( argc == 3 );
	
	string arg = argv[1];
	int k = atoi( argv[2] );			// 1 if we want to print
	
	if ( arg.compare("stack") == 0 ) {
		if ( !k ) {
			stack_testint();
			stack_teststruct();
		}
		else {
			stack_testint_p();
			stack_teststruct_p();
		}
	}
	else if ( arg.compare("set") == 0 ) {
		
	}
	else if ( arg.compare("map") == 0 ) {
		
	}
	else if ( arg.compare("vector") == 0 ) {
		if ( !k ) {
			vector_testint();
			vector_teststruct();
		}
		else {
			vector_testint_p();
			vector_teststruct_p();
		}
	}
	else if ( arg.compare("queue") == 0 ) {
		
	}
	else if ( arg.compare("pqueue") == 0 ) {
		
	}
	else if ( arg.compare("deque") == 0 ) {
		
	}
	else if ( arg.compare("hash") == 0 ) {
		
	}
	else {
		/*	nothing  */
	}
}
