double tax(double amount, char kind)
{
    if (kind == 'f')
    {
        return amount * 1.09;
    }
    else if(kind == 'l')
    {
        return amount * 1.12;
    }

    return 0;
}

double split(double total, int people)
{
    return total/people;
}