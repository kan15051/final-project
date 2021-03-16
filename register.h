typedef struct userinfo{
    char FirstName[100];
    char LastName[100];
    char UserName[100];
    char PassWord[100];
    char HouseNO[100];
    char Village[100];
    char Lane[100];
    char Road[100];
    char SubDistrict[100];
    char District[100];
    char Province[100];
    int PostalCode;
}UserInfo;

void GetUserInfo(UserInfo* User){
    printf("Enter Firstname: ");
    fgets(User->FirstName,sizeof(User->FirstName),stdin);//firstname
    //puts(User->FirstName);
    printf("Enter Lastname: ");
    fgets(User->LastName,100,stdin);//lastname
    //puts(User->LastName);
    printf("Enter Username: ");
    fgets(User->UserName,100,stdin);//username
    //puts(User->UserName);
    printf("Enter Password: ");
    fgets(User->PassWord,100,stdin);//password
    //puts(User->PassWord);
    printf("Please Fill Your Adress\n");
    printf("House Number: ");
    fgets(User->HouseNO,100,stdin);//houseno.
    //puts(User->HouseNO);
    printf("Village: ");
    fgets(User->Village,100,stdin);//village
    //puts(User->Village);
    printf("Lane: ");
    fgets(User->Lane,100,stdin);//lane
    //puts(User->Lane);
    printf("Road: ");
    fgets(User->Road,100,stdin);//road
    //puts(User->Road);
    printf("Sub-district: ");
    fgets(User->SubDistrict,100,stdin);//subdistrict
    //puts(User->SubDistrict);
    printf("District: ");
    fgets(User->District,100,stdin);//district
    //puts(User->District);
    printf("Province: ");
    fgets(User->Province,100,stdin);//province
    //puts(User->Province);
    printf("Postal Code: ");
    scanf("%d",&User->PostalCode);//postalcode
    //printf("%d\n",User->PostalCode);
}

int CheckExist(char* filename){
    FILE *fptr;
    if(fptr=fopen(filename,"r")){
        fclose(fptr);
        return 1;
    }
    else{
        return 0;
    }
}

void CreateAccout(){
    UserInfo User;
    GetUserInfo(&User);
    char FileName[100];
    strcpy(FileName,User.UserName);
    strcat(FileName,".txt");
    //puts(User.UserName);
    //printf("Postal code: %d\n",User.PostalCode);
    FILE *fptr;
    if(CheckExist(FileName)){
        printf("Account is Already Exist");
    }
    else{
        fptr = fopen(FileName,"w");
        fwrite(&User,sizeof(UserInfo),1,fptr);
        fclose(fptr);
    }
}

void OpenInfo(char *filename, UserInfo* User){
    FILE *fptr;
    fptr=fopen(filename,"r");
    fread(User,sizeof(UserInfo),1, fptr);
    fclose(fptr);
}

void ShowInfo(UserInfo *User){
    printf("Firstname: ");
    puts(User->FirstName);//firstname
    printf("\n");
    printf("Lastname: ");
    puts(User->LastName);//lastname
    printf("\n");
    printf("Username: ");
    puts(User->UserName);//username
    printf("\n");
    printf("Password: ");
    puts(User->PassWord);//password
    printf("\n");
    printf("Your Adress\n");
    printf("House Number: ");
    puts(User->HouseNO);//houseno.
    printf("\n");
    printf("Village: ");
    puts(User->Village);//village
    printf("\n");
    printf("Lane: ");
    puts(User->Lane);//lane
    printf("\n");
    printf("Road: ");
    puts(User->Road);//road
    printf("\n");
    printf("Sub-district: ");
    puts(User->SubDistrict);//subdistrict
    printf("\n");
    printf("District: ");
    puts(User->District);//district
    printf("\n");
    printf("Province: ");
    puts(User->Province);//province
    printf("\n");
    printf("Postal Code: ");
    printf("%d",User->PostalCode);//postal
    printf("\n");
}

int CheckPass(){

}