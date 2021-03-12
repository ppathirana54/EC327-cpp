char MostFrequentCharCaseInsensitive(char word[ ], int size) 
{
    /*returns the most frequent character (case-insensitive) in the input char array
    word*/
    int alphaSize = 26;
    int alphaCount[alphaSize];
    char alpha[alphaSize];

    int lower2upper = 'A' - 'a';

    for (int i = 0; i < alphaSize; i++)
    {
        alpha[i] = 'a' + i;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < alphaSize; j++ )
        {
            if(word[i] == alpha[j] || word[i] == alpha[j] + lower2upper)
            {
                alphaCount[j] ++;
            }
        }
    }

    int max = 0;
    int indx = 0;
    for(int i = 0; i < alphaSize; i++)
    {
        if(alphaCount[i] > max)
        {
            max = alphaCount[i];
            indx = i;
        }
    }

    return alpha[indx];

}

char MostFrequentChar(char word[ ], int size)
{
//returns the most frequent character in the input char array word
    int alphaSize = 52;
    int alphaCount[alphaSize];
    char alpha[alphaSize];

    

    for (int i = 0; i < alphaSize/2; i++)
    {
        alpha[i] = 'a' + i;
    }
    for(int i = 0; i < alphaSize/2; i++)
    {
        alpha[i + alphaSize/2] = 'A' + i;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < alphaSize; j++ )
        {
            if(word[i] == alpha[j] || word[i] == alpha[j])
            {
                alphaCount[j] ++;
            }
        }
    }

    int max = 0;
    int indx = 0;
    for(int i = 0; i < alphaSize; i++)
    {
        if(alphaCount[i] > max)
        {
            max = alphaCount[i];
            indx = i;
        }
    }

    return alpha[indx];


}