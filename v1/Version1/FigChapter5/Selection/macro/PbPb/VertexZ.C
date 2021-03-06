void VertexZ()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Aug 17 11:36:12 2016) by ROOT version6.06/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",271,100,700,500);
   Canvas_1->Range(-37.5,-369326.1,37.5,3323935);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetTheta(7.63836);
   Canvas_1->SetPhi(88.8399);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
    
    Canvas_1->SetTickx(1);
    Canvas_1->SetTicky(1);
    gStyle->SetLineWidth(2);
    TGaxis::SetMaxDigits(3);

    

   
   TH1D *fVertexDistXYZ_z__5 = new TH1D("fVertexDistXYZ_z__5","",60,-30,30);
   fVertexDistXYZ_z__5->SetBinContent(0,264);
   fVertexDistXYZ_z__5->SetBinContent(1,102);
   fVertexDistXYZ_z__5->SetBinContent(2,178);
   fVertexDistXYZ_z__5->SetBinContent(3,317);
   fVertexDistXYZ_z__5->SetBinContent(4,540);
   fVertexDistXYZ_z__5->SetBinContent(5,850);
   fVertexDistXYZ_z__5->SetBinContent(6,1559);
   fVertexDistXYZ_z__5->SetBinContent(7,2455);
   fVertexDistXYZ_z__5->SetBinContent(8,3798);
   fVertexDistXYZ_z__5->SetBinContent(9,5532);
   fVertexDistXYZ_z__5->SetBinContent(10,12872);
   fVertexDistXYZ_z__5->SetBinContent(11,47940);
   fVertexDistXYZ_z__5->SetBinContent(12,93481);
   fVertexDistXYZ_z__5->SetBinContent(13,109111);
   fVertexDistXYZ_z__5->SetBinContent(14,146216);
   fVertexDistXYZ_z__5->SetBinContent(15,198307);
   fVertexDistXYZ_z__5->SetBinContent(16,262412);
   fVertexDistXYZ_z__5->SetBinContent(17,352487);
   fVertexDistXYZ_z__5->SetBinContent(18,534247);
   fVertexDistXYZ_z__5->SetBinContent(19,810816);
   fVertexDistXYZ_z__5->SetBinContent(20,1060298);
   fVertexDistXYZ_z__5->SetBinContent(21,1288507);
   fVertexDistXYZ_z__5->SetBinContent(22,1520400);
   fVertexDistXYZ_z__5->SetBinContent(23,1751841);
   fVertexDistXYZ_z__5->SetBinContent(24,1979972);
   fVertexDistXYZ_z__5->SetBinContent(25,2197428);
   fVertexDistXYZ_z__5->SetBinContent(26,2393248);
   fVertexDistXYZ_z__5->SetBinContent(27,2560001);
   fVertexDistXYZ_z__5->SetBinContent(28,2690079);
   fVertexDistXYZ_z__5->SetBinContent(29,2774221);
   fVertexDistXYZ_z__5->SetBinContent(30,2813913);
   fVertexDistXYZ_z__5->SetBinContent(31,2813020);
   fVertexDistXYZ_z__5->SetBinContent(32,2735332);
   fVertexDistXYZ_z__5->SetBinContent(33,2627097);
   fVertexDistXYZ_z__5->SetBinContent(34,2472956);
   fVertexDistXYZ_z__5->SetBinContent(35,2293880);
   fVertexDistXYZ_z__5->SetBinContent(36,2085416);
   fVertexDistXYZ_z__5->SetBinContent(37,1857796);
   fVertexDistXYZ_z__5->SetBinContent(38,1627644);
   fVertexDistXYZ_z__5->SetBinContent(39,1395633);
   fVertexDistXYZ_z__5->SetBinContent(40,1162322);
   fVertexDistXYZ_z__5->SetBinContent(41,860436);
   fVertexDistXYZ_z__5->SetBinContent(42,562992);
   fVertexDistXYZ_z__5->SetBinContent(43,402338);
   fVertexDistXYZ_z__5->SetBinContent(44,305305);
   fVertexDistXYZ_z__5->SetBinContent(45,231851);
   fVertexDistXYZ_z__5->SetBinContent(46,173472);
   fVertexDistXYZ_z__5->SetBinContent(47,128149);
   fVertexDistXYZ_z__5->SetBinContent(48,93433);
   fVertexDistXYZ_z__5->SetBinContent(49,75648);
   fVertexDistXYZ_z__5->SetBinContent(50,51244);
   fVertexDistXYZ_z__5->SetBinContent(51,9641);
   fVertexDistXYZ_z__5->SetBinContent(52,3534);
   fVertexDistXYZ_z__5->SetBinContent(53,2566);
   fVertexDistXYZ_z__5->SetBinContent(54,1656);
   fVertexDistXYZ_z__5->SetBinContent(55,1078);
   fVertexDistXYZ_z__5->SetBinContent(56,570);
   fVertexDistXYZ_z__5->SetBinContent(57,367);
   fVertexDistXYZ_z__5->SetBinContent(58,224);
   fVertexDistXYZ_z__5->SetBinContent(59,125);
   fVertexDistXYZ_z__5->SetBinContent(60,86);
   fVertexDistXYZ_z__5->SetBinContent(61,335);
   fVertexDistXYZ_z__5->SetEntries(4.958954e+07);
   
   TPaveStats *ptstats = new TPaveStats(0.928839,0.7049689,0.9794007,0.9378882,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetLineColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextColor(0);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("fVertexDistXYZ_z");
   AText->SetTextSize(0.05357143);
   AText = ptstats->AddText("Entries =   4.958954e+07");
   AText = ptstats->AddText("Mean  = -0.2955");
   AText = ptstats->AddText("Std Dev   =  6.693");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   fVertexDistXYZ_z__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(fVertexDistXYZ_z__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   fVertexDistXYZ_z__5->SetLineColor(kGreen+2);
    fVertexDistXYZ_z__5->SetLineWidth(2);
   fVertexDistXYZ_z__5->GetXaxis()->SetTitle("Z Vertex (cm)");
   fVertexDistXYZ_z__5->GetXaxis()->SetLabelFont(42);
   fVertexDistXYZ_z__5->GetXaxis()->SetLabelSize(0.05);
   fVertexDistXYZ_z__5->GetXaxis()->SetTitleSize(0.05);
   fVertexDistXYZ_z__5->GetXaxis()->SetTitleFont(42);
   fVertexDistXYZ_z__5->GetYaxis()->SetLabelFont(42);
    fVertexDistXYZ_z__5->GetYaxis()->SetTitle("Number of events");
   fVertexDistXYZ_z__5->GetYaxis()->SetLabelSize(0.05);
   fVertexDistXYZ_z__5->GetYaxis()->SetTitleSize(0.05);
   fVertexDistXYZ_z__5->GetYaxis()->SetTitleFont(42);
   fVertexDistXYZ_z__5->GetZaxis()->SetLabelFont(42);
   fVertexDistXYZ_z__5->GetZaxis()->SetLabelSize(0.035);
   fVertexDistXYZ_z__5->GetZaxis()->SetTitleSize(0.035);
   fVertexDistXYZ_z__5->GetZaxis()->SetTitleFont(42);
   fVertexDistXYZ_z__5->Draw("");
    
    TH1D *Cut = new TH1D("Cut","Vertex Distribution z projection",1,-10,10);
    Cut->SetBinContent(1,5000000);
    Cut->SetMinimum(27989.15);
    //Cut->SetMaximum(812447.1);
    Cut->SetEntries(1);
    Cut->SetLineColor(2);
    Cut->SetLineWidth(2);
    Cut->SetLineStyle(2);
    Cut->GetXaxis()->SetLabelFont(42);
    Cut->GetXaxis()->SetLabelSize(0.035);
    Cut->GetXaxis()->SetTitleSize(0.035);
    Cut->GetXaxis()->SetTitleFont(42);
    Cut->GetYaxis()->SetLabelFont(42);
    Cut->GetYaxis()->SetLabelSize(0.035);
    Cut->GetYaxis()->SetTitleSize(0.035);
    Cut->GetYaxis()->SetTitleFont(42);
    Cut->GetZaxis()->SetLabelFont(42);
    Cut->GetZaxis()->SetLabelSize(0.035);
    Cut->GetZaxis()->SetTitleSize(0.035);
    Cut->GetZaxis()->SetTitleFont(42);
    Cut->Draw("same");
    
    tex = new TLatex(0.15,0.8,"ALICE, Pb-Pb");
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(0.15,0.73,"#sqrt{#it{s}_{NN}} = 2.76 TeV");
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(0.15,0.66,"|#it{y}| < 0.5");
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();

   
   TPaveText *pt = new TPaveText(0.2690262,0.9353727,0.7309738,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Vertex Distribution z projection");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
