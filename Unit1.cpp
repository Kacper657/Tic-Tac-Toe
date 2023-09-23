//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char kto;
char p1, p2, p3, p4, p5, p6, p7, p8, p9;
void sprawdz()
{
if((p1==p2 && p2==p3 && p1!='n'    ||
p4==p5 && p5==p6 && p4!='n'        ||
p7==p8 && p8==p9 && p7!='n'        ||
p1==p4 && p4==p7 && p1!='n'        ||
p2==p5 && p5==p8 && p2!='n'        ||
p3==p6 && p6==p9 && p3!='n'        ||
p1==p5 && p5==p9 && p1!='n'        ||
p3==p5 && p5==p7 && p3!='n'))
{
char *w;
if(kto=='x') w="The circle wins!";
else w="The cross wins!";
Application->MessageBox(w, "End of the game", MB_OK);
}
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image1Click(TObject *Sender)
{
if(p1=='n')
{
        if(kto=='o')
        {
        Image1->Picture->LoadFromFile("img/o.bmp");
        p1='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image1->Picture->LoadFromFile("img/x.bmp");
        p1='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image1->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
if(p2=='n')
{
        if(kto=='o')
        {
        Image2->Picture->LoadFromFile("img/o.bmp");
        p2='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image2->Picture->LoadFromFile("img/x.bmp");
        p2='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image2->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image3Click(TObject *Sender)
{
if(p3=='n')
{
        if(kto=='o')
        {
        Image3->Picture->LoadFromFile("img/o.bmp");
        p3='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image3->Picture->LoadFromFile("img/x.bmp");
        p3='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image3->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image4Click(TObject *Sender)
{
if(p4=='n')
{
        if(kto=='o')
        {
        Image4->Picture->LoadFromFile("img/o.bmp");
        p4='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image4->Picture->LoadFromFile("img/x.bmp");
        p4='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image4->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image5Click(TObject *Sender)
{
if(p5=='n')
{
        if(kto=='o')
        {
        Image5->Picture->LoadFromFile("img/o.bmp");
        p5='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image5->Picture->LoadFromFile("img/x.bmp");
        p5='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image5->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image6Click(TObject *Sender)
{
if(p6=='n')
{
        if(kto=='o')
        {
        Image6->Picture->LoadFromFile("img/o.bmp");
        p6='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image6->Picture->LoadFromFile("img/x.bmp");
        p6='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image6->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image7Click(TObject *Sender)
{
if(p7=='n')
{
        if(kto=='o')
        {
        Image7->Picture->LoadFromFile("img/o.bmp");
        p7='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image7->Picture->LoadFromFile("img/x.bmp");
        p7='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image7->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image8Click(TObject *Sender)
{
if(p8=='n')
{
        if(kto=='o')
        {
        Image8->Picture->LoadFromFile("img/o.bmp");
        p8='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image8->Picture->LoadFromFile("img/x.bmp");
        p8='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image8->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image9Click(TObject *Sender)
{
if(p9=='n')
{
        if(kto=='o')
        {
        Image9->Picture->LoadFromFile("img/o.bmp");
        p9='o';
        kto='x';
        Image10->Picture->LoadFromFile("img/xsmall.bmp");
        }
        else
        {
        Image9->Picture->LoadFromFile("img/x.bmp");
        p9='x';
        kto='o';
        Image10->Picture->LoadFromFile("img/osmall.bmp");
        }
        Image9->Enabled=false;
        sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{

p1 = 'n'; p2 = 'n'; p3 = 'n';
p4 = 'n'; p5 = 'n'; p6 = 'n';
p7 = 'n'; p8 = 'n'; p9 = 'n';
kto = 'o';
Image1->Picture->LoadFromFile("img/nic.bmp");
Image2->Picture->LoadFromFile("img/nic.bmp");
Image3->Picture->LoadFromFile("img/nic.bmp");
Image4->Picture->LoadFromFile("img/nic.bmp");
Image5->Picture->LoadFromFile("img/nic.bmp");
Image6->Picture->LoadFromFile("img/nic.bmp");
Image7->Picture->LoadFromFile("img/nic.bmp");
Image8->Picture->LoadFromFile("img/nic.bmp");
Image9->Picture->LoadFromFile("img/nic.bmp");
Image10->Picture->LoadFromFile("img/osmall.bmp");


Image1->Enabled=true;
Image2->Enabled=true;
Image3->Enabled=true;
Image4->Enabled=true;
Image5->Enabled=true;
Image6->Enabled=true;
Image7->Enabled=true;
Image8->Enabled=true;
Image9->Enabled=true;
}
//---------------------------------------------------------------------------


