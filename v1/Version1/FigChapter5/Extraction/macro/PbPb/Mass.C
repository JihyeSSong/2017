{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Dec 27 12:57:33 2016) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",32,45,700,500);
   c1->Range(-0.2500001,1.525844,7.25,1.542178);
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
    c1->SetLeftMargin(0.13);
    

   
    TGraphErrors *gre = new TGraphErrors(7);
    gre->SetName("Graph0");
    gre->SetTitle("");
    gre->SetFillColor(1);
    gre->SetMarkerStyle(20);
    gre->SetPoint(0,1.6,1.532029);
    gre->SetPointError(0,0.4,0.0005619633);
    gre->SetPoint(1,2.25,1.531659);
    gre->SetPointError(1,0.25,0.0004883641);
    gre->SetPoint(2,2.75,1.532391);
    gre->SetPointError(2,0.25,0.0004573212);
    gre->SetPoint(3,3.25,1.532434);
    gre->SetPointError(3,0.25,0.0004795299);
    gre->SetPoint(4,3.75,1.53259);
    gre->SetPointError(4,0.25,0.0005500087);
    gre->SetPoint(5,4.5,1.532581);
    gre->SetPointError(5,0.5,0.0007062877);
    gre->SetPoint(6,5.5,1.534737);
    gre->SetPointError(6,0.5,0.001475631);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.5,6.5);
   Graph_Graph1->SetMinimum(1.527477);
   Graph_Graph1->SetMaximum(1.542845);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("#it{p}_{T} (GeV/#it{c})");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Mass (GeV/#it{c}^{2})");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph1");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
    gre->SetFillColor(1);
    gre->SetMarkerStyle(20);
    gre->SetPoint(0,1.6,1.532523);
    gre->SetPointError(0,0.4,0);
    gre->SetPoint(1,2.25,1.531919);
    gre->SetPointError(1,0.25,0.0008049238);
    gre->SetPoint(2,2.75,1.531868);
    gre->SetPointError(2,0.25,0.0006625157);
    gre->SetPoint(3,3.25,1.532424);
    gre->SetPointError(3,0.25,0.0006689547);
    gre->SetPoint(4,3.75,1.531812);
    gre->SetPointError(4,0.25,0.0009744004);
    gre->SetPoint(5,4.5,1.533805);
    gre->SetPointError(5,0.5,0.0007330906);
    gre->SetPoint(6,5.5,1.533375);
    gre->SetPointError(6,0.5,0.001208375);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.5,6.5);
   Graph_Graph2->SetMinimum(1.529);
   Graph_Graph2->SetMaximum(1.5345);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Mass (GeV/c^{2})");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("P");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph2");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
    gre->SetPoint(0,1.6,1.531888);
    gre->SetPointError(0,0.4,0.000934188);
    gre->SetPoint(1,2.25,1.531323);
    gre->SetPointError(1,0.25,0.0007511733);
    gre->SetPoint(2,2.75,1.532965);
    gre->SetPointError(2,0.25,0.0007287046);
    gre->SetPoint(3,3.25,1.532872);
    gre->SetPointError(3,0.25,0.000649899);
    gre->SetPoint(4,3.75,1.532907);
    gre->SetPointError(4,0.25,0.0007695276);
    gre->SetPoint(5,4.5,1.532866);
    gre->SetPointError(5,0.5,0.001025918);
    gre->SetPoint(6,5.5,1.534513);
    gre->SetPointError(6,0.5,0.00227203);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0.5,6.5);
   Graph_Graph3->SetMinimum(1.529);
   Graph_Graph3->SetMaximum(1.5345);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("Mass (GeV/c^{2})");
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("P");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph3");
   gre->SetTitle("");
   gre->SetFillColor(1);
    gre->SetLineColor(4);

   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
    gre->SetPoint(0,1.6,1.530938);
    gre->SetPointError(0,0.4,0.0008789101);
    gre->SetPoint(1,2.25,1.532417);
    gre->SetPointError(1,0.25,0.0009031493);
    gre->SetPoint(2,2.75,1.533517);
    gre->SetPointError(2,0.25,0.0006834865);
    gre->SetPoint(3,3.25,1.531462);
    gre->SetPointError(3,0.25,0.001202773);
    gre->SetPoint(4,3.75,1.533203);
    gre->SetPointError(4,0.25,0.001705841);
    gre->SetPoint(5,4.5,1.531086);
    gre->SetPointError(5,0.5,0.001054569);
    gre->SetPoint(6,5.5,1.537107);
    gre->SetPointError(6,0.5,0.002128282);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,0.5,6.5);
   Graph_Graph4->SetMinimum(1.529);
   Graph_Graph4->SetMaximum(1.5345);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("Mass (GeV/c^{2})");
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("P");
    
    TF1 *PrevFitTMP = new TF1("PrevFitTMP","pol0",0,10);
    PrevFitTMP->SetLineColor(1);
    PrevFitTMP->SetLineStyle(2);
    PrevFitTMP->SetLineWidth(2);
    
    PrevFitTMP->GetXaxis()->SetLabelFont(42);
    PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
    PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
    PrevFitTMP->GetXaxis()->SetTitleFont(42);
    PrevFitTMP->GetYaxis()->SetLabelFont(42);
    PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
    PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
    PrevFitTMP->GetYaxis()->SetTitleFont(42);
    PrevFitTMP->SetParameter(0,1.5318);
    PrevFitTMP->SetParError(0,0.00032);
    PrevFitTMP->SetParLimits(0,0,0);
    gre->GetListOfFunctions()->Add(PrevFitTMP);
    gre->Draw("pz");

    
    TLatex *tex = new TLatex(0.2,0.83,"ALICE, Pb-Pb, #sqrt{s_{NN}} = 2.76 TeV, |#it{y}| < 0.5");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();
  /*  tex = new TLatex(0.2,0.77,"#Xi(1530)^{0} #rightarrow #Xi^{#mp}#pi^{#pm}");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(42);
    tex->SetTextSize(0.04);
    tex->SetLineWidth(2);
    tex->Draw();*/
    
    
    TLegend *leg = new TLegend(0.17,0.5,0.6,0.8,NULL,"brNDC");
    leg->SetBorderSize(1);
    leg->SetTextSize(0.045);
    leg->SetLineColor(0);
    leg->SetLineStyle(1);
    leg->SetLineWidth(1);
    leg->SetFillColor(0);
    leg->SetFillStyle(1001);
    TLegendEntry *entry=leg->AddEntry("NULL","MB 0-80%","lp");
    entry->SetLineColor(1);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(1);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("NULL","Central 0-10%","lp");
    entry->SetLineColor(2);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(2);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("NULL","Semi-Central 10-40%","lp");
    
    ci = TColor::GetColor("#009900");
    entry->SetLineColor(ci);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    
    ci = TColor::GetColor("#009900");
    entry->SetMarkerColor(ci);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("NULL","Peripheral 40-80%","lp");
    entry->SetLineColor(4);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(4);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("NULL","PDG value","l");
    entry->SetLineColor(1);
    entry->SetLineStyle(2);
    entry->SetLineWidth(2);
    entry->SetTextFont(42);
    leg->Draw();

   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
