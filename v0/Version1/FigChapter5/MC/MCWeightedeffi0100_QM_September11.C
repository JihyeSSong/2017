{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Sep  8 09:58:18 2015) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",439,108,700,500);
   c1->Range(-1.508079,-3.78414,8.48833,0.631315);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
  // c1->SetLogy();
   c1->SetLeftMargin(0.1508621);
   c1->SetRightMargin(0.04885058);
   c1->SetTopMargin(0.05285412);
   c1->SetBottomMargin(0.1775898);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
    c1->SetTickx(1);
    c1->SetTicky(1);
    gStyle->SetLineWidth(2);
    
   Double_t xAxis1[12] = {0, 0.8, 1.4, 1.8, 2.2, 2.6, 3, 3.4, 3.8, 4.8, 5.8, 8}; 
   
   TH1D *Efficiency = new TH1D("Efficiency","",11, xAxis1);
   Efficiency->SetBinContent(2,0.009716884/0.425);
   Efficiency->SetBinContent(3,0.03652891/0.425);
   Efficiency->SetBinContent(4,0.06619701/0.425);
   Efficiency->SetBinContent(5,0.09719624/0.425);
   Efficiency->SetBinContent(6,0.1305322/0.425);
   Efficiency->SetBinContent(7,0.1520134/0.425);
   Efficiency->SetBinContent(8,0.1725557/0.425);
   Efficiency->SetBinContent(9,0.1797819/0.425);
   Efficiency->SetBinContent(10,0.1734551/0.425);
   Efficiency->SetBinContent(11,0.1958826/0.425);
   Efficiency->SetBinError(2,0.0004822538/0.425);
   Efficiency->SetBinError(3,0.001569453/0.425);
   Efficiency->SetBinError(4,0.002825359/0.425);
   Efficiency->SetBinError(5,0.004477638/0.425);
   Efficiency->SetBinError(6,0.00680684/0.425);
   Efficiency->SetBinError(7,0.009694862/0.425);
   Efficiency->SetBinError(8,0.01314854/0.425);
   Efficiency->SetBinError(9,0.01257943/0.425);
   Efficiency->SetBinError(10,0.02053198/0.425);
   Efficiency->SetBinError(11,0.02773863/0.425);
   Efficiency->SetMinimum(0.001);
   Efficiency->SetMaximum(1.);
   Efficiency->SetEntries(10);
    Efficiency->SetLineColor(1);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","pol0",0,8);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineWidth(2);
    PrevFitTMP->SetLineColor(1);

   PrevFitTMP->SetLineStyle(2);
   PrevFitTMP->SetChisquare(1876.699);
   PrevFitTMP->SetNDF(9);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,0.4255);
   PrevFitTMP->SetParError(0,1e-08);
   PrevFitTMP->SetParLimits(0,0,0);
 //  Efficiency->GetListOfFunctions()->Add(PrevFitTMP);
   
   TPaveStats *ptstats = new TPaveStats(0.8318966,0.3002114,0.908046,0.5940803,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetLineColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextColor(0);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Efficiency");
   text->SetTextSize(0.06758985);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  =  4.079");
   text = ptstats->AddText("RMS   =   1.59");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(0);
  // ptstats->Draw();
  // Efficiency->GetListOfFunctions()->Add(ptstats);
   //ptstats->SetParent(Efficiency);
   Efficiency->SetLineWidth(2);
   Efficiency->SetMarkerStyle(20);
   Efficiency->GetXaxis()->SetTitle("#it{p}_{T} (GeV/#it{c})");
   Efficiency->GetXaxis()->SetLabelFont(42);
   Efficiency->GetXaxis()->SetLabelSize(0.06);
   Efficiency->GetXaxis()->SetTitleSize(0.06);
   Efficiency->GetXaxis()->SetTitleOffset(1.3);
   Efficiency->GetXaxis()->SetTitleFont(42);
   Efficiency->GetYaxis()->SetTitle("Efficiency x Acceptance");
   Efficiency->GetYaxis()->SetLabelFont(42);
   Efficiency->GetYaxis()->SetLabelSize(0.06);
   Efficiency->GetYaxis()->SetTitleSize(0.06);
   Efficiency->GetYaxis()->SetTitleFont(42);
   Efficiency->GetZaxis()->SetLabelFont(42);
   Efficiency->GetZaxis()->SetLabelSize(0.035);
   Efficiency->GetZaxis()->SetTitleSize(0.035);
   Efficiency->GetZaxis()->SetTitleFont(42);
   Efficiency->Draw("");
    
    
    
      tex = new TLatex(0.2,0.85,"ALICE Simulation p-Pb, #sqrt{#it{s}_{NN}} = 5.02 TeV (Min. bias)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.78,"#Xi(1530)^{0} #rightarrow #Xi^{#\mp}#pi^{#\pm}, -0.5 < #it{y}_{CMS} < 0 ");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
    tex = new TLatex(0.6,0.3,"ALICE preliminary");
    tex->SetNDC();
    tex->SetTextAlign(12);
    tex->SetTextFont(62);
    tex->SetLineWidth(2);
    //tex->Draw();
    
   
/*   TLegend *leg = new TLegend(0.5,0.25,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.06);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Efficiency","#Xi(1530)^{0}","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
 //  entry=leg->AddEntry("NULL","Branching Ratio","l");
//   entry->SetLineColor(1);
 //  entry->SetLineStyle(2);
 //  entry->SetLineWidth(2);
 //  entry->SetMarkerColor(1);
 //  entry->SetMarkerStyle(21);
 //  entry->SetMarkerSize(1);
 //  entry->SetTextFont(42);
 //  leg->Draw();
 
 */
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
