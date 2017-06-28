//---------------------------------------------------------------------------

#ifndef UnitFormMainH
#define UnitFormMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
    TEdit *edNameIni;
    TLabel *Label1;
    TButton *btSave;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall btSaveClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
