#include<bits/stdc++.h>
#define N 100

typedef struct{
	float diem1 , diem2 , diem3 ;
	
}diemsinhvien ;

typedef struct {
	int masv ;
	char tensv [N] ;
	diemsinhvien diem ;
	
}sinhvien ;

FILE *f ;
sinhvien sv ;
int const size=sizeof(sinhvien);
void themmoi (){
	int them ; 
	scanf ( "%d" , &them ) ;
	int sosv = 1 ;                         //  0 thì dúng hon co mà thích d? 1 //
	f = fopen ( "B17DCCN311.bin", "rb" );
		while ( fread ( &sv , size , 1 , f ) == 1 )
			sosv++;
	fflush(stdin);
	int i;
	f = fopen ( "B17DCCN311.bin" , "ab" ) ;
	for ( i = sosv ; i < sosv + them  ; i++ ){
		sv.masv = i ;
		fflush(stdin);	
		fgets ( sv.tensv,30,stdin ) ;
		scanf ("%f%f%f" , &sv.diem.diem1 , &sv.diem.diem2 , &sv.diem.diem3 ) ;
		fwrite ( &sv , size , 1 ,f) ;
	}
	fclose (f) ;
	printf ( "%d\n" , them ) ;
}

void capnhat (){
    sinhvien svsua ;
	scanf ( "%d\n" , &svsua.masv ) ;
	gets ( svsua.tensv ) ;
	scanf ( "%f %f %f" , &svsua.diem.diem1 , &svsua.diem.diem2 , &svsua.diem.diem3 ) ;
	f = fopen ( "B17DCCN311.bin" , "rb+") ;
	rewind (f) ;
	while ( fread ( &sv , size , 1 , f ) == 1){
		if ( sv.masv == svsua.masv ){
			fseek ( f , - size , SEEK_CUR );
			fwrite ( &svsua , size , 1 , f ) ;
			break ;
		}
	}
	fclose (f) ;
	printf ( "%d" , svsua.masv ) ;
}

void dssv (){
	f = fopen ( "B17DCCN311.bin"  , "rb" ) ;
	rewind ( f ) ;
	while ( fread ( &sv , size , 1 ,f ) == 1){
		float a[3] = { 0 } ;
		a[0] = sv.diem.diem1 ;
		a[1] = sv.diem.diem2 ;
		a[2] = sv.diem.diem3 ;
		int i , j , dem = 0  ;
		for ( i = 0 ; i < 2 ; i++ )
			for ( j = i + 1 ; j < 3 ; j++ )
				if ( a[i] >= a[j]  ) 
					dem ++;
		if ( dem == 0 ){
			printf ( "%d %s " , sv.masv , sv.tensv )  ;
			printf ( "%.1f %.1f %.1f \n"  , sv.diem.diem1 , sv.diem.diem2 , sv.diem.diem3 ) ;
		}
		
	}
	fclose ( f ) ;
	
}
int main (){
	int n ;
	scanf ( "%d" , &n ) ;
	switch ( n ) {
		case 1: themmoi(); break ;
		case 2: capnhat(); break ;
		case 3: dssv();
		default: break;
	}
}
