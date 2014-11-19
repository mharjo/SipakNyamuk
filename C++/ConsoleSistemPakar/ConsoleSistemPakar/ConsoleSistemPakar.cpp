// ConsoleSistemPakar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <iterator>

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	vector<int> arrJawab;
	int arrDemamBerdarahDenque[] = {1,2,3,4,5,6,7};   
    int arrDemamPenyakitKuning[] = { 1,4,8,9,10,11,12};
    int arrChikungunya[] = { 1,11,13,14,15,16, 17 };
    int arrEncephalitis[] = { 1,4,17,18,19,20,21 };
    int arrMalaria[] = { 1,2,4,6,8  };  
	
	char answer;

	cout << "*****************************************************************" << "\n";	
	cout << "** Sistem Pakar Diagnosa Penyakit yang disebabkan oleh Nyamuk  **" << "\n";	
	cout << "*****************************************************************" << "\n\n\n";	
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << "\n";
	cout << "Untuk dapat melakukan diagnosis dengan benar, Anda harus terlebih" << "\n";
	cout << "dahulu menjawab pertanyaan - pertanyaan  di bawah ini" << "\n";	
	cout << " " << "\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << "\n\n";
	cout << "Apakah Anda Merasa ? " << "\n";
	cout << "1. Demam (Y/N) : ";	
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(1);
	//End Check

	cout << "2. Merasa Kedinginan (Y/N) : ";	
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(2);
	//End Check

	cout << "3. Tubuh Terasa Sakit (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(3);
	//End Check

	cout << "4. Sakit Kepala (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(4);
	//End Check

	cout << "5. tenggorokan sakit saat menelan (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(5);
	//End Check

	cout << "6. Badan Terasa Lemas dan Lemah (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(6);
	//End Check

	cout << "7. Muncul Bintik-bintik berwarna Merah (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(7);
	//End Check

	cout << "8. panas tubuh tinggi (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(8);
	//End Check

	cout << "9. otot terasa nyeri (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(9);
	//End Check

	cout << "10. nafsu makan menurun (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(10);
	//End Check

	cout << "11. merasa mual-mual (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(11);
	//End Check
	
	cout << "12. denyut nadi terasa lemah (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(12);
	//End Check

	cout << "13. merasakan ngilu (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(13);
	//End Check

	cout << "14. merasakan persendian membengkak (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(14);
	//End Check

	cout << "15. stamina terasa menurun (Y/N) : ";
	
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(15);
	//End Check
	
	cout << "16. nyeri pada setiap persendian (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(16);
	//End Check
	
	cout << "17. merasakan ingin muntah (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(17);
	//End Check
	
	cout << "18. penglihatan terganggu bila melihat cahaya (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(18);
	//End Check
	
	cout << "19. leher dan punggung terasa kaku (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(19);
	//End Check
	
	cout << "20. sering merasa mengantuk (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(20);
	//End Check
	
	cout << "21. mudah terangsang (Y/N) : ";
	cin.get(answer);
	fflush(stdin);
	//Check
	if (answer=='Y' || answer=='y')
	arrJawab.push_back(21);
	//End Check
	
	cout << "\n\n";
	cout << "kESIMPULAN : \n";

	if (std::equal(arrJawab.begin(),arrJawab.end(), arrDemamBerdarahDenque))
	{
		cout << "Anda Menderita : Demam Berdarah Denque" << "\n";
	}
	else if (std::equal(arrJawab.begin(),arrJawab.end(),arrDemamPenyakitKuning))
	{
		cout << "Anda Menderita : Demam Penyakit Kuning" << "\n";
	}
	else if (std::equal(arrJawab.begin(),arrJawab.end(),arrChikungunya))
	{
		cout << "Anda Menderita : Chikungunya" << "\n";
	}
	else if (std::equal(arrJawab.begin(),arrJawab.end(),arrEncephalitis))
	{
		cout << "Anda Menderita : Encephalitis" << "\n";
	}
	else if (std::equal(arrJawab.begin(),arrJawab.end(),arrMalaria))
	{
		cout << "Anda Menderita : Malaria" << "\n";
	}
	else
	{
    cout << "Penyakit Anda Tidak Terdeteksi" << "\n";
	}

	getchar();

	return 0;
}

