{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Dec 27 12:48:52 2016) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   c1->Range(-0.2500001,-0.001,7.25,0.009);
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
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
    gre->SetPoint(0,1.6,0.002197879);
    gre->SetPointError(0,0.4,0.0009769398);
    gre->SetPoint(1,2.25,0.002933444);
    gre->SetPointError(1,0.25,0.0007526918);
    gre->SetPoint(2,2.75,0.003606038);
    gre->SetPointError(2,0.25,0.0007472236);
    gre->SetPoint(3,3.25,0.003641986);
    gre->SetPointError(3,0.25,0.0008845547);
    gre->SetPoint(4,3.75,0.002462436);
    gre->SetPointError(4,0.25,0.001242706);
    gre->SetPoint(5,4.5,0.004134256);
    gre->SetPointError(5,0.5,0.001214049);
    gre->SetPoint(6,5.5,0.004438187);
    gre->SetPointError(6,0.5,0.003328043);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","",100,0.5,6.5);
   Graph_Graph_Graph11->SetMinimum(0);
   Graph_Graph_Graph11->SetMaximum(0.010);
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
    Graph_Graph_Graph11->GetYaxis()->SetTitleOffset(0.9);

   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11);
   
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","pol0",0.5,6.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
    PrevFitTMP->SetLineColor(1);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetLineStyle(2);
   PrevFitTMP->SetChisquare(2.93042);
   PrevFitTMP->SetNDF(7);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,0.00320613);
   PrevFitTMP->SetParError(0,0.000370162);
   PrevFitTMP->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(PrevFitTMP);
   gre->Draw("ap");
    
    
    TLatex *tex = new TLatex(1.,0.006,"pol(0) : 0.0032 #\pm 0.0004");
    tex->SetLineWidth(1);
    tex->Draw();
    
   TLatex *   tex = new TLatex(0.15,0.8,"ALICE, Pb-Pb, #sqrt{#it{s}_{NN}} = 2.76 TeV, |#it{y}| < 0.5");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.72,"#Xi(1530)^{0} #rightarrow #Xi^{#mp}#pi^{#pm}");
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
