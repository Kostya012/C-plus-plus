//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ZamPer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PyskClick(TObject *Sender)
{
 //int Pos(const String & PodStroka);
 String Stroka= "������ �����!",
        PodStroka= "�����";
 int iPosic= Stroka.Pos(PodStroka);
 ShowMessage(Stroka);
 ShowMessage("������ �������\
 ����� �����= " + IntToStr(iPosic));//8
 //String & Delete(int iPosic, int iDlina)
 int iDlina= PodStroka.Length();//����� ���������� �����
 Stroka.Delete(iPosic, iDlina);
 ShowMessage(Stroka);//������!
 
// String &Insert(const String &NovPodStroka, int iPosic)
}//PyskClick
//---------------------------------------------------------------------------

void __fastcall TForm1::ZamenaClick(TObject *Sender)
{
String Stroka= "������ �����!",
       PodStroka= "�����",
       NovPodStroka= "����";
int iPosic= Stroka.Pos(PodStroka);
 ShowMessage(Stroka);
 //iPosic= Stroka.Pos(PodStroka);
 if (iPosic != 0)
  {
   int iDlina=PodStroka.Length();
   Stroka.Delete(iPosic, iDlina);
   Stroka.Insert(NovPodStroka, iPosic);
   ShowMessage(Stroka);
  }//if
 else
  ShowMessage("����� �� ������!");
}//ZamenaClick
//---------------------------------------------------------------------------
