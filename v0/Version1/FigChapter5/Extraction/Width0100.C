{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 24 10:26:06 2015) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",133,46,700,500);
   c1->Range(-1,-0.00125,9.8,0.01125);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
    
    TGaxis::SetMaxDigits(2);
    c1->SetTickx(1);
    c1->SetTicky(1);
    gStyle->SetLineWidth(2);
    c1->SetBottomMargin(0.12);
    c1->SetLeftMargin(0.9);


   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1,0.002763802);
   gre->SetPointError(0,0.3,0.001137355);
   gre->SetPoint(1,1.6,0.002463556);
   gre->SetPointError(1,0.2,0.0005765116);
   gre->SetPoint(2,2,0.002613485);
   gre->SetPointError(2,0.2,0.0004789076);
   gre->SetPoint(3,2.4,0.003012743);
   gre->SetPointError(3,0.2,0.0003907053);
   gre->SetPoint(4,2.8,0.002495049);
   gre->SetPointError(4,0.2,0.000379631);
   gre->SetPoint(5,3.2,0.001778913);
   gre->SetPointError(5,0.2,0.0005555416);
   gre->SetPoint(6,3.6,0.002482729);
   gre->SetPointError(6,0.2,0.0005257727);
   gre->SetPoint(7,4.3,0.003868286);
   gre->SetPointError(7,0.5,0.0004442222);
   gre->SetPoint(8,5.3,0.003602523);
   gre->SetPointError(8,0.5,0.0007976892);
   gre->SetPoint(9,6.9,0.002658389);
   gre->SetPointError(9,1.1,0.001074747);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","",100,0.08,8.72);
   Graph_Graph_Graph11->SetMinimum(0);
   Graph_Graph_Graph11->SetMaximum(0.01);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetTitle("#it{p}_{T} (GeV/#it{c})");
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
    Graph_Graph_Graph11->GetYaxis()->SetTitleOffset(1.3);

   Graph_Graph_Graph11->GetYaxis()->SetTitle("#sigma (GeV/#it{c})");
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.05);
    Graph_Graph_Graph11->GetYaxis()->SetTitleOffset(0.9);

   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11);
   
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","pol0",0.08,8.72);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineWidth(2);
    PrevFitTMP->SetLineColor(1);
   PrevFitTMP->SetLineStyle(2);
   PrevFitTMP->SetChisquare(11.98382);
   PrevFitTMP->SetNDF(9);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,0.002786671);
   PrevFitTMP->SetParError(0,0.0001666806);
   PrevFitTMP->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(PrevFitTMP);
   gre->Draw("AP");
   TLatex *   tex = new TLatex(0.15,0.8,"ALICE, p-Pb, #sqrt{s_{NN}} = 5.02 TeV");
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
      tex = new TLatex(0.55,0.8,"p0 = 2.79 +/- 0.17 (#times 10^{-3})");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.55,0.73,"Chi2/NDF = 11.98/9");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
