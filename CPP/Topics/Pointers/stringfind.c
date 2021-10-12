void mystrtok(char**result, char* src ,const char* delim){
    char *temp = (char*)malloc((strlen(src)+1)*sizeof(char));
    strcpy(temp,src);
    size_t i=0;
    size_t dl= strlen(delim);
    while(temp!=NULL && *temp && !memcmp(temp, delim, dl))
    {
        memset(temp, 0x0, dl);
        temp += dl;
    }
    for (result[i]=NULL; temp!=NULL && *temp; )
    {
        result[i++] = temp;
        result[i] = NULL;
        temp = strstr(temp,delim);
        while(temp!=NULL && *temp && !memcmp(temp, delim, dl))
        {
            memset(temp,0x0, dl);
            temp+=dl;
        }
    }
}