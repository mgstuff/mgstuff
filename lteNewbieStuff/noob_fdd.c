#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


/*
 * Ten 4x(pseudokod) zostal napisany w celach imagniacji dzialania FDD w polaczeniu miedzy ue a bts
*/

void
tdd_up_and_dl() 
{
	int up_a[100];
	int dl_a[100];
	int fhz = 0;
	int guard = 0.1;
	int time_imagination = 5;

	srand(time(NULL));

	//Z tego bede upliknowal do jakiegos tam UE
	// Powiedzmy ze to jest moja antena
	int range = (252352 - 1) + 1;

	/*
	for(int i=0; i<5; i++) {
		dl_a[i] = rand() % range +1;
		* Tu musze zrobic ze w momencie w ktorym robie moj pseudo uplink to na drugim watku odpalic pseudo downlink 
		 * na ue. To wypelnianie tablicy moimi wartosciami to wlasnie moje ladowanie wartosciami w antenie do pseudo
		 * uplinku
		*/

	//To bedzie UE ktory bedzie mial wartosci do UP i DL
	int ue_up_a[100];
	int ue_dl_a[100];
	int ue_fhz;
	int w = 0;
	int ue_guard = 0.1;
	int ue_time_imagination = 5;
	

	//Action
	for(int i=0; i<6; i++) {
		ue_up_a[i] = rand() % range + 1;
		//Robie uplink z UE do BTS
		printf("Uplink [%d] from UE -----> {%d}\n", i, ue_up_a[i]);	
		sleep(5);
		for(int j=0; j<1; j++) {
			up_a[i] = ue_up_a[i];
			//BTS odbiera uplink z UE i robi uplink do siebie
			printf("\t\t\t\t\t\t[Uplink] [%d] to BTS {%d} <-----\n",i,up_a[i]);
			//jak fhz bedzie 2 to robie Downlink z BTS'a do UE
			if(fhz == 2) {
				{
					ue_dl_a[w] = up_a[i];
					//Z BTS DO UE Downlink
					printf("\t\t\tDownlink BTS -> UE [%d] -----> {%d}\n", w, up_a[w]);
					for(int z=0; z<1; z++) {
						//UE robi downlink do siebie danych z BTS
						printf("\t\t\tDownlink  [%d] <----- {%d}\n", w, ue_dl_a[w]);
					}
					w++;
					fhz=0;
				}
			}
		fhz++;
		}
	}

}





int 
main(void) {

tdd_up_and_dl();

}
