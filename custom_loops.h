#ifndef CUSTOM_LOOPS_H
#define CUSTOM_LOOPS_H
	#ifndef forN
	//C-Style loop i is the index N the number of loop
	#define forN(i,N) for(size_t i = 0; i < N; i++)
	#endif
	#ifndef forrN
	//C-Style loop i is the index N the number of loop, reserve version
	#define forrN(i, N) for(size_t i = N -1; i >= 0; i--)
	#endif
	#ifndef forNM
	//C-Style bidemensional loop, i and j are the indexes and N and M the sizes 
	#define forNM(i, j, N, M) for(size_t i = 0; i < N; i++) for (size_t j = 0; j < M; j++)
	#endif
	#ifndef forrNM
	//C-Style bidemensional loop, i and j are the indexes and N and M the sizes, reverse version
	#define forrNM(i, j, N, M) for(size_t i = N - 1; i >= 0; i--) for (size_t j = M-1; j >= 0; j--)
	#endif
#endif