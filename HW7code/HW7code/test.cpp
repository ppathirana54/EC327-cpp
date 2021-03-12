



int* findnm(const int* array, int arraySize) 
{
    int lastNum = array[0];
    bool contains = false; 

	for(int i = 1; i < arraySize; i++)
    {
        if(lastNum+1 == array[i]){
            contains = true;
            
            int* container = new int;
            container[0] = lastNum;
            container[1] = array[i];
        }

    }

    if(contains == false)
    {
        int container = NULL;
    }

    return container;
}
