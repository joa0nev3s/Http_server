#include "stats.h"

void averagetimestatic(int t, Stats stat){
	int aux=stat->tstatic*stat->nstatic;	/*tempo total de todos os pedidos servidos(static)*/
	aux=aux+t;
	stat->nstatic++;
	stat->tstatic=aux/stat->nstatic;
}


void averagetimescompressed(int t, Stats stat){
	int aux=stat->tcompressed*stat->ncompressed;	/*tempo total de todos os pedidos servidos(compressed)*/
	aux=aux+t;
	stat->ncompressed++;
	stat->tcompressed=aux/stat->ncompressed;
}
