#define ROW_SIZE 9
#define COL_SIZE ROW_SIZE
#define NUM_OF_SUBGRIDS ROW_SIZE
#define NUM_OF_THREADS (ROW_SIZE+COL_SIZE+NUM_OF_SUBGRIDS)

/**
 * Defines the structure that will hold the parameter data
 * provided to the worker threads
*/
typedef struct {
    int id;
    int starting_row;
    int starting_col;
    int ending_row;
    int ending_col;
} param_struct;

int** sudoku_board; // this board is shared by the threads
int* worker_validation; // this will hold the result from each thread

/**
 * is_board_valid - Checks if the Sudoko board is valid or not.  Returns a 0 
 *                  if the board is not valid; 1 otherwise.
*/
int is_board_valid();
int is_board_valid(){
    pthread_t* tid;  /* the thread identifiers */
    pthread_attr_t attr;  
  
    thread_t* tid = (thread_t*)malloc(sizeof(int)*NUM_OF_THREADS);
  
    param_struct* params = (param_struct*)malloc(sizeof(param_struct)*NUM_OF_THREADS); 
  
    params[0].id = 0; // id of first thread
    params[0].starting_row = 0;
    params[0].starting_col = 0;
    params[0].starting_row = 3;
    params[0].starting_row = 3;
    /* Now create the thread passing it params[0] as a parameter */
    pthread_create(&(tid[0]), &attr, validate, &(params[0]));
    pthread_creat(&threads[threadIndex++], NULL, isColumnValid, columnData);

}

if(j==0){

boundaries *rowData=(parameters*)malloc(sizeof(parameters));

rowData->row=i;

rowData->column=j;

pthread_creat(&threads[threadIndex++], NULL, isRowValid, rowData);

}

}

}

for(i=0; i<num_threads; i++){

pthread_join(threads[i], NULL);

}

for(i=0; i<num_threads; i++){

if(valid[i]==0) {

printf("Sudoku arrangement is invalid!\n");

return EXIT_SUCCESS;

}

}

printf("Sudoku arrangement is valid!\n");

return EXIT_SUCCESS;

}
/** 
 * Reads in the sudoku board into a 2-dimensional array
 * and returns a reference to the array.
*/
int** read_board_from_file(char* filename);
