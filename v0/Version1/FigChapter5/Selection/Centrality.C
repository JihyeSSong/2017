{
//=========Macro generated from canvas: Canvas_1_n2/Canvas_1_n2
//=========  (Thu Jun  4 19:25:37 2015) by ROOT version5.34/18
   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",210,76,700,500);
   Canvas_1_n2->Range(-12.5,-1500000,112.5,1.35e+07);
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetFrameBorderMode(0);
   Canvas_1_n2->SetFrameBorderMode(0);
    
    Canvas_1_n2->SetTickx(1);
    Canvas_1_n2->SetTicky(1);
    gStyle->SetLineWidth(2);
   Canvas_1_n2->SetBottomMargin(0.11);

    
   
   TH1F *hCentralitykSelected = new TH1F("hCentralitykSelected","Centrality : after MB event selection",10,0,100);
   hCentralitykSelected->SetBinContent(1,1.093776e+07);
   hCentralitykSelected->SetBinContent(2,1.088512e+07);
   hCentralitykSelected->SetBinContent(3,1.09282e+07);
   hCentralitykSelected->SetBinContent(4,1.093317e+07);
   hCentralitykSelected->SetBinContent(5,1.093673e+07);
   hCentralitykSelected->SetBinContent(6,1.096882e+07);
   hCentralitykSelected->SetBinContent(7,1.078824e+07);
   hCentralitykSelected->SetBinContent(8,1.10718e+07);
   hCentralitykSelected->SetBinContent(9,1.078504e+07);
   hCentralitykSelected->SetBinContent(10,1.103313e+07);
   hCentralitykSelected->SetBinContent(11,3530);
   hCentralitykSelected->SetMinimum(0);
   hCentralitykSelected->SetMaximum(1.5e+07);
   hCentralitykSelected->SetEntries(1.092715e+08);
   hCentralitykSelected->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.9511494,0.8942918,0.9798851,0.9365751,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetLineColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextColor(0);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hCentralitykSelected__1");
   text->SetTextSize(0.009725159);
   text = ptstats->AddText("Entries =   1.092715e+08");
   text = ptstats->AddText("Mean  =  50.02");
   text = ptstats->AddText("RMS   =  28.73");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hCentralitykSelected->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hCentralitykSelected);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hCentralitykSelected->SetLineColor(1);
    hCentralitykSelected->SetLineWidth(2);
    
   hCentralitykSelected->GetXaxis()->SetTitle("Centrality(%)");
   hCentralitykSelected->GetXaxis()->SetRange(1,10);
   hCentralitykSelected->GetXaxis()->SetLabelFont(42);
   hCentralitykSelected->GetXaxis()->SetLabelSize(0.05);
   hCentralitykSelected->GetXaxis()->SetTitleSize(0.05);
   hCentralitykSelected->GetXaxis()->SetTitleFont(42);
   hCentralitykSelected->GetYaxis()->SetRange(1,1);
   hCentralitykSelected->GetYaxis()->SetLabelFont(42);
    hCentralitykSelected->GetYaxis()->SetTitle("Accepted events");
   hCentralitykSelected->GetYaxis()->SetLabelSize(0.05);
   hCentralitykSelected->GetYaxis()->SetTitleSize(0.05);
    hCentralitykSelected->GetYaxis()->SetTitleOffset(0.88);
   hCentralitykSelected->GetYaxis()->SetTitleFont(42);
   hCentralitykSelected->GetZaxis()->SetLabelFont(42);
   hCentralitykSelected->GetZaxis()->SetLabelSize(0.035);
   hCentralitykSelected->GetZaxis()->SetTitleSize(0.035);
   hCentralitykSelected->GetZaxis()->SetTitleFont(42);
   hCentralitykSelected->Draw("");
    
    TH1F *hCentralitykSelected1 = new TH1F("hCentralitykSelected1","Centrality : after MB event selection",2,0,20);
    hCentralitykSelected1->SetBinContent(1,1.093776e+07);
    hCentralitykSelected1->SetBinContent(2,1.088512e+07);
    hCentralitykSelected1->SetLineColor(0);
    hCentralitykSelected1->SetFillStyle(3002);
    hCentralitykSelected1->SetFillColor(2);
    hCentralitykSelected1->Draw("same");
    
    TH1F *hCentralitykSelected2 = new TH1F("hCentralitykSelected2","Centrality : after MB event selection",2,20,40);
    hCentralitykSelected2->SetBinContent(1,1.09282e+07);
    hCentralitykSelected2->SetBinContent(2,1.093317e+07);
    hCentralitykSelected2->SetLineColor(0);
    hCentralitykSelected2->SetFillStyle(3002);
    hCentralitykSelected2->SetFillColor(kOrange);
    hCentralitykSelected2->Draw("same");
    
    
    TH1F *hCentralitykSelected3 = new TH1F("hCentralitykSelected3","Centrality : after MB event selection",2,40,60);
    hCentralitykSelected3->SetBinContent(1,1.093673e+07);
    hCentralitykSelected3->SetBinContent(2,1.096882e+07);
    hCentralitykSelected3->SetLineColor(0);
    hCentralitykSelected3->SetFillStyle(3002);
    hCentralitykSelected3->SetFillColor(kGreen+2);
    hCentralitykSelected3->Draw("same");
    
    
    TH1F *hCentralitykSelected4 = new TH1F("hCentralitykSelected4","Centrality : after MB event selection",4,60,100);

    hCentralitykSelected4->SetBinContent(1,1.078824e+07);
    hCentralitykSelected4->SetBinContent(2,1.10718e+07);
    hCentralitykSelected4->SetBinContent(3,1.078504e+07);
    hCentralitykSelected4->SetBinContent(4,1.103313e+07);
    hCentralitykSelected4->SetLineColor(0);
    hCentralitykSelected4->SetFillStyle(3002);
    hCentralitykSelected4->SetFillColor(4);
    hCentralitykSelected4->Draw("same");
    
    hCentralitykSelected->Draw("same");

   
   TPaveText *pt = new TPaveText(0.1724138,0.9281184,0.8261494,0.9957717,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   text = pt->AddText("Centrality : after MB event selection");
   pt->Draw();
      tex = new TLatex(0.15,0.8,"ALICE, p-Pb, #sqrt{s_{NN}} = 5.02 TeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.73,"-0.5 < #it{y}_{CMS} < 0");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
    
    
    tex = new TLatex(0.15,0.4,"0-20 %");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();
    
    tex = new TLatex(0.3,0.4,"20-40 %");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();

    
    tex = new TLatex(0.45,0.4,"40-60 %");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();

    
    tex = new TLatex(0.7,0.4,"60-100 %");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();


   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
}
