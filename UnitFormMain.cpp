// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormMain.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;

// ---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner) : TForm(Owner)
{
}

// ---------------------------------------------------------------------------
void __fastcall TFormMain::FormShow(TObject *Sender)
{
    for (int kk = 0; kk < 100; ++kk)
    {
        Sleep(100);
    }


    UnicodeString iniName = Application->ExeName;
    iniName = ChangeFileExt(iniName, L".ini");

    //UnicodeString iniName;
    UnicodeString test = "";
    test = "PROVA";
    int demo = 1;

    UnicodeString iniSection = "";
    UnicodeString iniKeyName = "Debug";
    wchar_t bf[512];

    TCursor myCur = Screen->Cursor;

    for (int kk = 0; kk < 100; ++kk)
    {
        iniSection = Format(L"Section%2.0d", ARRAYOFCONST((kk)));
        GetPrivateProfileString(iniSection.c_str(), iniKeyName.c_str(), L"yes", bf, sizeof(bf), iniName.c_str());
        Sleep(100);
    }
}

// ---------------------------------------------------------------------------
void __fastcall TFormMain::btSaveClick(TObject *Sender)
{
    UnicodeString test = "";
    test = "PROVA";
}
// ---------------------------------------------------------------------------
