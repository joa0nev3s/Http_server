
typedef struct Stats{
	int nstatic;
	int ncompressed;
	int tcompressed;
	int tstatic;
}Stats;

void averagetimestatic(int t, Stats stat);
void averagetimescompressed(int t, Stats stat);
