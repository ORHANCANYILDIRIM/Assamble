#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#define size 256

/*ORHANCAN YILDIRIM*/			                                                   /*KURALLAR*/
/*   02210224036   */			          				/*  En fazla 3 basamaklý atama yapiniz  */			      
																
										/*  Degiskenler sürekli degistigi için	
										      tek dosyada birden fazla islem 
						                                    yapmak hatali sonuca sebep olabilir  */				      

bool IsInteger(char a)
{
    if (a == '0' || a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9')
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{

    int i = 0;
    int AX = NULL;
    int BX = NULL;
    int CX = NULL;
    int DX = NULL;

    FILE *File;
    char Commands[size];
    char Character;

    char FileName[100] = {0x0};
    char *a = NULL;

    printf("Dosya ismi giriniz: ");
    a = fgets(FileName, 100, stdin);
    a = strchr(FileName, '\n');
    if (a != NULL)
        *a = 0x0;

    File = fopen(FileName, "r");

    for (i = 0; i < size; i++){
        Commands[i] = getc(File);
    }
    i = 0;
    int j;
    for ( j = 0; j < 9998; j++){
        /*********************************************   ATAMA BLOGU   ********************************************/
        if (Commands[i] == 'A')
        {
            if (Commands[i + 4] == 'A')
            {
                if (Commands[i + 7] == 'T')
                {
                    AX = true;
                    i = i + 12;
                }
                else if (Commands[i + 7] == 'F')
                {
                    AX = false;
                    i = i + 13;
                }
                else{
                    int a = ((int)Commands[i + 7] - 48);
                    AX = a;
                    int ctrl = 0;

                    if (IsInteger(Commands[i + 8]))
                    {
                        int b = ((int)Commands[i + 8] - 48);
                        AX = 10 * AX + b;
                        ctrl = 1;
                        if (IsInteger(Commands[i + 9]))
                        {
                            int c = ((int)Commands[i + 9] - 48);
                            AX = 10 * AX + c;
                            ctrl = 2;
                        }
                    }
                    if (ctrl == 0)
                    {
                        i += 9;
                    }
                    else if (ctrl == 1)
                    {
                        i += 10;
                    }
                    else{
                        i += 11;
                    }
                }
            }
            //--B--
            else if (Commands[i + 4] == 'B')
            {
                if (Commands[i + 7] == 'T')
                {
                    BX = true;
                    i = i + 12;
                }
                else if (Commands[i + 7] == 'F')
                {
                    BX = false;
                    i = i + 13;
                }
                else{
                    int a = ((int)Commands[i + 7] - 48);
                    BX = a;
                    int ctrl = 0;
                    if (IsInteger(Commands[i + 8]))
                    {
                        int b = ((int)Commands[i + 8] - 48);
                        BX = 10 * BX + b;
                        ctrl = 1;
                        if (IsInteger(Commands[i + 9]))
                        {
                            int c = ((int)Commands[i + 8] - 48);
                            BX = 10 * BX + c;
                            ctrl = 2;
                        }
                    }
                    if (ctrl == 0)
                    {
                        i += 9;
                    }
                    else if (ctrl == 1)
                    {
                        i += 10;
                    }
                    else{
                        i += 11;
                    }
                }
            }
            else if (Commands[i + 4] == 'C')
            {
                if (Commands[i + 7] == 'T')
                {
                    CX = true;
                    i = i + 12;
                }
                else if (Commands[i + 7] == 'F')
                {
                    CX = false;
                    i = i + 13;
                }
                else{
                    int a = ((int)Commands[i + 7] - 48);
                    CX = a;
                    int ctrl = 0;
                    if (IsInteger(Commands[i + 8]))
                    {
                        int b = ((int)Commands[i + 8] - 48);
                        CX = 10 * CX + b;
                        ctrl = 1;
                        if (IsInteger(Commands[i + 9]))
                        {
                            int c = ((int)Commands[i + 8] - 48);
                            CX = 10 * CX + c;
                            ctrl = 2;
                        }
                    }
                    if (ctrl == 0)
                    {
                        i += 9;
                    }
                    else if (ctrl == 1)
                    {
                        i += 10;
                    }
                    else{
                        i += 11;
                    }
                }
            }
            else if (Commands[i + 4] == 'D')
            {
                if (Commands[i + 7] == 'T')
                {
                    DX = true;
                    i = i + 11;
                }
                else if (Commands[i + 7] == 'F')
                {
                    DX = false;
                    i = i + 12;
                }
                else{
                    int a = ((int)Commands[i + 7] - 48);
                    DX = a;
                    int ctrl = 0;
                    if (IsInteger(Commands[i + 8]))
                    {
                        int b = ((int)Commands[i + 8] - 48);
                        DX = 10 * DX + b;
                        ctrl = 1;
                        if (IsInteger(Commands[i + 9]))
                        {
                            int c = ((int)Commands[i + 8] - 48);
                            DX = 10 * DX + c;
                            ctrl = 2;
                        }
                    }
                    if (ctrl == 0)
                    {
                        i += 9;
                    }
                    else if (ctrl == 1)
                    {
                        i += 10;
                    }
                    else{
                        i += 11;
                    }
                }
            }
        }
        /**************************************************   TOPLAMA BLOGU   *****************************************************************************/
        else if (Commands[i] == 'T')
        {
            if (Commands[i + 4] == 'A')
            {
                if (Commands[i + 7] == 'A')
                {
                    AX = AX + AX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'B')
                {
                    AX = AX + BX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'C')
                {
                    AX = AX + CX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'D')
                {
                    AX = AX + DX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == '[')
                {
                    if (Commands[i + 9] == ']')
                    {
                        AX += (int)Commands[i + 8] - 48;
                        i = i + 10;
                    }
                    else if (Commands[i + 10] == ']')
                    {
                        AX += ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                    else{
                        AX += ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                        i = i + 12;
                    }
                }
                else{
                    if ((int)Commands[i + 8] == 13)
                    {
                        AX += (int)Commands[i + 7] - 48;
                        i = i + 9;
                    }
                    else if ((int)Commands[i + 9] == 13)
                    {
                        AX += ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                        i = i + 10;
                    }
                    else{
                        AX += ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                }
            }

            if (Commands[i + 4] == 'B')
            {
                if (Commands[i + 7] == 'A')
                {
                    BX = BX + AX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'B')
                {
                    BX = BX + BX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'C')
                {
                    BX = BX + CX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'D')
                {
                    BX = BX + DX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == '[')
                {
                    if (Commands[i + 9] == ']')
                    {
                        BX += (int)Commands[i + 8] - 48;
                        i = i + 10;
                    }
                    else if (Commands[i + 10] == ']')
                    {
                        BX += ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                    else{
                        BX += ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                        i = i + 12;
                    }
                }
                else{
                    if ((int)Commands[i + 8] == 13)
                    {
                        BX += (int)Commands[i + 7] - 48;
                        i = i + 9;
                    }
                    else if ((int)Commands[i + 9] == 13)
                    {
                        BX += ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                        i = i + 10;
                    }
                    else{
                        BX += ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                }
            }

            if (Commands[i + 4] == 'C')
            {
                if (Commands[i + 7] == 'A')
                {
                    CX = CX + AX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'B')
                {
                    CX = CX + BX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'C')
                {
                    CX = CX + CX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'D')
                {
                    CX = CX + DX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == '[')
                {
                    if (Commands[i + 9] == ']')
                    {
                        CX += (int)Commands[i + 8] - 48;
                        i = i + 10;
                    }
                    else if (Commands[i + 10] == ']')
                    {
                        CX += ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                    else{
                        CX += ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                        i = i + 12;
                    }
                }
                else{
                    if ((int)Commands[i + 8] == 13)
                    {
                        CX += (int)Commands[i + 7] - 48;
                        i = i + 9;
                    }
                    else if ((int)Commands[i + 9] == 13)
                    {
                        CX += ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                        i = i + 10;
                    }
                    else{
                        CX += ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                }
            }

            if (Commands[i + 4] == 'D')
            {
                if (Commands[i + 7] == 'A')
                {
                    DX = DX + AX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'B')
                {
                    DX = DX + BX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'C')
                {
                    DX = DX + CX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == 'D')
                {
                    DX = DX + DX;
                    i = i + 10;
                }
                else if (Commands[i + 7] == '[')
                {
                    if (Commands[i + 9] == ']')
                    {
                        DX += (int)Commands[i + 8] - 48;
                        i = i + 10;
                    }
                    else if (Commands[i + 10] == ']')
                    {
                        DX += ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                    else{
                        DX += ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                        i = i + 12;
                    }
                }
                else{
                    if ((int)Commands[i + 8] == 13)
                    {
                        DX += (int)Commands[i + 7] - 48;
                        i = i + 9;
                    }
                    else if ((int)Commands[i + 9] == 13)
                    {
                        DX += ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                        i = i + 10;
                    }
                    else{
                        DX += ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                        i = i + 11;
                    }
                }
            }
        }
        else if (Commands[i] == 'C')
        {
            /************************************************************   CIKARMA BLOGU   ******************************************************************************/
            if (Commands[i + 1] == 'I')
            {
                if (Commands[i + 4] == 'A')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        AX = AX - AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        AX = AX - BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        AX = AX - CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        AX = AX - DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            AX -= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            AX -= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            AX -= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            AX -= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            AX -= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            AX -= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'B')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        BX = BX - AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        BX = BX - BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        BX = BX - CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        BX = BX - DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            BX -= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            BX -= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            BX -= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            BX -= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            BX -= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            BX -= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'C')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        CX = CX - AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        CX = CX - BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        CX = CX - CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        CX = CX - DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            CX -= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            CX -= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            CX -= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            CX -= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            CX -= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            CX -= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'D')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        DX = DX - AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        DX = DX - BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        DX = DX - CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        DX = DX - DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            DX -= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            DX -= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            DX -= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            DX -= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            DX -= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            DX -= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }
            }
            /*******************************************************    CARPMA BLOGU   *******************************************************/
            else if (Commands[i + 1] == 'R')
            {
                if (Commands[i + 4] == 'A')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        AX = AX * AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        AX = AX * BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        AX = AX * CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        AX = AX * DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            AX *= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            AX *= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            AX *= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            AX *= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            AX *= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            AX *= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'B')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        BX = BX * AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        BX = BX * BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        BX = BX * CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        BX = BX * DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            BX *= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            BX *= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            BX *= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            BX *= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            BX *= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            BX *= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'C')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        CX = CX * AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        CX = CX * BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        CX = CX * CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        CX = CX * DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            CX *= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            CX *= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            CX *= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            CX *= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            CX *= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            CX *= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'D')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        DX = DX * AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        DX = DX * BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        DX = DX * CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        DX = DX * DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            DX *= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            DX *= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            DX *= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            DX *= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            DX *= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            DX *= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }
            }
        }
        /*****************************************************************    BOLME BLOGU   ******************************************************************************************/
        else if (Commands[i] == 'B')
        {
            if (Commands[i + 4] == 'A')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        AX = AX / AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        AX = AX / BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        AX = AX / CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        AX = AX / DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            AX /= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            AX /= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            AX /= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            AX /= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            AX /= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            AX /= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'B')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        BX = BX / AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        BX = BX / BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        BX = BX / CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        BX = BX / DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            BX /= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            BX /= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            BX /= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            BX /= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            BX /= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            BX /= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'C')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        CX = CX / AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        CX = CX / BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        CX = CX / CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        CX = CX / DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            CX /= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            CX /= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            CX /= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            CX /= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            CX /= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            CX /= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }

                if (Commands[i + 4] == 'D')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        DX = DX / AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        DX = DX / BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        DX = DX / CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        DX = DX / DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == '[')
                    {
                        if (Commands[i + 9] == ']')
                        {
                            DX /= (int)Commands[i + 8] - 48;
                            i = i + 10;
                        }
                        else if (Commands[i + 10] == ']')
                        {
                            DX /= ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                        else{
                            DX /= ((int)Commands[i + 8] - 48) * 100 + ((int)Commands[i + 9] - 48) * 10 + ((int)Commands[i + 10] - 48);
                            i = i + 12;
                        }
                    }
                    else{
                        if ((int)Commands[i + 8] == 13)
                        {
                            DX /= (int)Commands[i + 7] - 48;
                            i = i + 9;
                        }
                        else if ((int)Commands[i + 9] == 13)
                        {
                            DX /= ((int)Commands[i + 7] - 48) * 10 + ((int)Commands[i + 8] - 48);
                            i = i + 10;
                        }
                        else{
                            DX /= ((int)Commands[i + 7] - 48) * 100 + ((int)Commands[i + 8] - 48) * 10 + ((int)Commands[i + 9] - 48);
                            i = i + 11;
                        }
                    }
                }
            
        }
        else if (Commands[i] == 'V')
        {

            /****************************************************    VE BLOGU   ***************************************************************************************/
            if (Commands[i + 2] == ' ')
            {

                if (Commands[i + 3] == 'A')
                {

                    if (Commands[i + 6] == 'A')
                    {
                        AX *= AX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'B')
                    {
                        AX *= BX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'C')
                    {
                        AX *= CX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'D')
                    {
                        AX = DX;
                        i = i + 9;
                    }
                }
                else if (Commands[i + 3] == 'B')
                {

                    if (Commands[i + 6] == 'A')
                    {
                        BX *= AX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'B')
                    {
                        BX *= BX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'C')
                    {
                        BX *= CX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'D')
                    {
                        BX = DX;
                        i = i + 9;
                    }
                }
                else if (Commands[i + 3] == 'C')
                {

                    if (Commands[i + 6] == 'A')
                    {
                        CX *= AX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'B')
                    {
                        CX *= BX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'C')
                    {
                        CX *= CX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'D')
                    {
                        CX = DX;
                        i = i + 9;
                    }
                }
                else if (Commands[i + 3] == 'D')
                {

                    if (Commands[i + 6] == 'A')
                    {
                        DX *= AX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'B')
                    {
                        DX *= BX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'C')
                    {
                        DX *= CX;
                        i = i + 9;
                    }
                    else if (Commands[i + 6] == 'D')
                    {
                        DX = DX;
                        i = i + 9;
                    }
                }

            }
            else{

                /****************************************************************    VEYA BLOGU   ****************************************************************************/

                if (Commands[i + 4] == 'A')
                {
                    if (Commands[i + 7] == 'A')
                    {
                        AX = AX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        if (AX == true)
                        {
                            AX = true;
                            i = i + 10;
                        }
                        else{
                            if (BX == true)
                            {
                                AX = true;
                                i = i + 10;
                            }
                            else{
                                AX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        if (AX == true)
                        {
                            AX = true;
                            i = i + 10;
                        }
                        else{
                            if (CX == true)
                            {
                                AX = true;
                                i = i + 10;
                            }
                            else{
                                AX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        if (AX == true)
                        {
                            AX = true;
                            i = i + 10;
                        }
                        else{
                            if (DX == true)
                            {
                                AX = true;
                                i = i + 10;
                            }
                            else{
                                AX = false;
                                i = i + 10;
                            }
                        }
                    }
                }
                //-----------
                if (Commands[i + 4] == 'B')
                {
                    if (Commands[i + 7] == 'B')
                    {
                        BX = BX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'A')
                    {
                        if (BX == true)
                        {
                            BX = true;
                            i = i + 10;
                        }
                        else{
                            if (AX == true)
                            {
                                BX = true;
                                i = i + 10;
                            }
                            else{
                                BX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        if (BX == true)
                        {
                            BX = true;
                            i = i + 10;
                        }
                        else{
                            if (CX == true)
                            {
                                BX = true;
                                i = i + 10;
                            }
                            else{
                                BX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        if (BX == true)
                        {
                            BX = true;
                            i = i + 10;
                        }
                        else{
                            if (DX == true)
                            {
                                BX = true;
                                i = i + 10;
                            }
                            else{
                                BX = false;
                                i = i + 10;
                            }
                        }
                    }
                }
                //------------
                if (Commands[i + 4] == 'C')
                {
                    if (Commands[i + 7] == 'C')
                    {
                        CX = CX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        if (CX == true)
                        {
                            CX = true;
                            i = i + 10;
                        }
                        else{
                            if (BX == true)
                            {
                                CX = true;
                                i = i + 10;
                            }
                            else{
                                CX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'A')
                    {
                        if (CX == true)
                        {
                            CX = true;
                            i = i + 10;
                        }
                        else{
                            if (AX == true)
                            {
                                CX = true;
                                i = i + 10;
                            }
                            else{
                                CX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'D')
                    {
                        if (CX == true)
                        {
                            CX = true;
                            i = i + 10;
                        }
                        else{
                            if (DX == true)
                            {
                                CX = true;
                                i = i + 10;
                            }
                            else{
                                CX = false;
                                i = i + 10;
                            }
                        }
                    }
                }
                //------------
                if (Commands[i + 4] == 'D')
                {
                    if (Commands[i + 7] == 'D')
                    {
                        DX = DX;
                        i = i + 10;
                    }
                    else if (Commands[i + 7] == 'B')
                    {
                        if (DX == true)
                        {
                            DX = true;
                            i = i + 10;
                        }
                        else{
                            if (BX == true)
                            {
                                DX = true;
                                i = i + 10;
                            }
                            else{
                                DX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'C')
                    {
                        if (DX == true)
                        {
                            DX = true;
                            i = i + 10;
                        }
                        else{
                            if (CX == true)
                            {
                                DX = true;
                                i = i + 10;
                            }
                            else{
                                DX = false;
                                i = i + 10;
                            }
                        }
                    }
                    else if (Commands[i + 7] == 'A')
                    {
                        if (DX == true)
                        {
                            DX = true;
                            i = i + 10;
                        }
                        else{
                            if (AX == true)
                            {
                                DX = true;
                                i = i + 10;
                            }
                            else{
                                DX = false;
                                i = i + 10;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", AX);
    printf("%d\n", BX);
    printf("%d\n", CX);
    printf("%d\n", DX);
}
