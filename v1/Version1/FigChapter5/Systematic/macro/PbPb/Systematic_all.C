{
//=========Macro generated from canvas: cTotErrorRMSbarlow/cTotErrorRMSbarlow
//=========  (Sat Jan 14 15:17:02 2017) by ROOT version5.34/30
   TCanvas *cTotErrorRMSbarlow = new TCanvas("cTotErrorRMSbarlow", "cTotErrorRMSbarlow",199,93,800,500);
   cTotErrorRMSbarlow->Range(-0.2964286,-0.0625,7.810714,0.5625);
   cTotErrorRMSbarlow->SetFillColor(0);
   cTotErrorRMSbarlow->SetBorderMode(0);
   cTotErrorRMSbarlow->SetBorderSize(2);
   cTotErrorRMSbarlow->SetFrameBorderMode(0);
   cTotErrorRMSbarlow->SetFrameBorderMode(0);
    cTotErrorRMSbarlow->SetTopMargin(0.05);

   cTotErrorRMSbarlow->SetBottomMargin(0.13);
    cTotErrorRMSbarlow->SetRightMargin(0.05);

   Double_t xAxis1[8] = {1.2, 2, 2.5, 3, 3.5, 4, 5, 6};
   
   TH1D *hMB = new TH1D("hMB","",7, xAxis1);
    hMB->SetBinContent(1,0.1512797);
    hMB->SetBinContent(2,0.1181485);
    hMB->SetBinContent(3,0.1187724);
    hMB->SetBinContent(4,0.1766506);
    hMB->SetBinContent(5,0.2286566);
    hMB->SetBinContent(6,0.1598061);
    hMB->SetBinContent(7,0.1461274);
    hMB->SetBinError(1,0.00000001);
    hMB->SetBinError(2,0.00000001);
    hMB->SetBinError(3,0.00000001);
    hMB->SetBinError(4,0.00000001);
    hMB->SetBinError(5,0.00000001);
    hMB->SetBinError(6,0.00000001);
    hMB->SetBinError(7,0.00000001);

    hMB->SetMaximum(0.5);
    hMB->SetEntries(7);
    hMB->SetDirectory(0);
    hMB->SetDirectory(0);
    hMB->SetLineWidth(2);
    hMB->GetXaxis()->SetTitle("p_{T} (GeV/c)");
    hMB->GetXaxis()->SetLabelFont(42);
    hMB->GetXaxis()->SetLabelSize(0.035);
    hMB->GetXaxis()->SetTitleSize(0.035);
    hMB->GetXaxis()->SetTitleFont(42);
    hMB->GetYaxis()->SetTitle("Uncertainty (fraction)");
    hMB->GetYaxis()->SetLabelFont(42);
    hMB->GetYaxis()->SetLabelSize(0.035);
    hMB->GetYaxis()->SetTitleSize(0.035);
    hMB->GetYaxis()->SetTitleFont(42);
    hMB->GetZaxis()->SetLabelFont(42);
    hMB->GetZaxis()->SetLabelSize(0.035);
    hMB->GetZaxis()->SetTitleSize(0.035);
    hMB->GetZaxis()->SetTitleFont(42);
    
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("SysErrorCutPercentileRMS1");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 7      ");
   text = ptstats->AddText("Mean  =  3.448");
   text = ptstats->AddText("RMS   =  1.182");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hMB->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hMB);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hMB->SetLineWidth(2);
    hMB->SetLineColor(1);

   hMB->SetMarkerColor(1);
   hMB->SetMarkerStyle(24);
    hMB->SetMarkerSize(1.2);

   hMB->GetXaxis()->SetTitle("#it{p}_{T} (GeV/#it{c})");
   hMB->GetXaxis()->SetRange(0,8);
   hMB->GetXaxis()->SetLabelFont(42);
   hMB->GetXaxis()->SetLabelSize(0.05);
   hMB->GetXaxis()->SetTitleSize(0.05);
   hMB->GetXaxis()->SetTitleFont(42);
   hMB->GetYaxis()->SetTitle("Uncertainty(fraction)");
   hMB->GetYaxis()->SetLabelFont(42);
   hMB->GetYaxis()->SetLabelSize(0.05);
   hMB->GetYaxis()->SetTitleSize(0.05);
   hMB->GetYaxis()->SetTitleFont(42);
   hMB->GetZaxis()->SetLabelFont(42);
   hMB->GetZaxis()->SetLabelSize(0.035);
   hMB->GetZaxis()->SetTitleSize(0.035);
   hMB->GetZaxis()->SetTitleFont(42);
   hMB->Draw("");

    TH1D *h010 = new TH1D("h010","",7, xAxis1);
    h010->SetBinContent(1,0.181523);
    h010->SetBinContent(2,0.1381235);
    h010->SetBinContent(3,0.1780993);
    h010->SetBinContent(4,0.2273483);
    h010->SetBinContent(5,0.228118);
    h010->SetBinContent(6,0.2004698);
    h010->SetBinContent(7,0.2127242);
    h010->SetBinError(1,0.00000001);
    h010->SetBinError(2,0.00000001);
    h010->SetBinError(3,0.00000001);
    h010->SetBinError(4,0.00000001);
    h010->SetBinError(5,0.00000001);
    h010->SetBinError(6,0.00000001);
    h010->SetBinError(7,0.00000001);
    h010->SetMarkerStyle(20);
    h010->SetMarkerColor(2);
    h010->SetLineWidth(2);
    h010->SetLineColor(2);
    h010->Draw("same");
    
    TH1D *h1040 = new TH1D("h1040","",7, xAxis1);
    h1040->SetBinContent(1,0.1233471);
    h1040->SetBinContent(2,0.1242964);
    h1040->SetBinContent(3,0.1453023);
    h1040->SetBinContent(4,0.1453333);
    h1040->SetBinContent(5,0.1917973);
    h1040->SetBinContent(6,0.1283299);
    h1040->SetBinContent(7,0.2098467);
    h1040->SetBinError(1,0.00000001);
    h1040->SetBinError(2,0.00000001);
    h1040->SetBinError(3,0.00000001);
    h1040->SetBinError(4,0.00000001);
    h1040->SetBinError(5,0.00000001);
    h1040->SetBinError(6,0.00000001);
    h1040->SetBinError(7,0.00000001);
    h1040->SetMarkerStyle(21);
    h1040->SetMarkerColor(kGreen+2);
    h1040->SetLineWidth(2);
    h1040->SetLineColor(kGreen+2);
    h1040->Draw("same");
    
    TH1D *h4080 = new TH1D("h4080","",7, xAxis1);
    h4080->SetBinContent(1,0.1381319);
    h4080->SetBinContent(2,0.1510617);
    h4080->SetBinContent(3,0.1331189);
    h4080->SetBinContent(4,0.1536695);
    h4080->SetBinContent(5,0.1735861);
    h4080->SetBinContent(6,0.1307176);
    h4080->SetBinContent(7,0.2444072);
    h4080->SetBinError(1,0.00000001);
    h4080->SetBinError(2,0.00000001);
    h4080->SetBinError(3,0.00000001);
    h4080->SetBinError(4,0.00000001);
    h4080->SetBinError(5,0.00000001);
    h4080->SetBinError(6,0.00000001);
    h4080->SetBinError(7,0.00000001);
    h4080->SetMarkerColor(4);
    h4080->SetMarkerSize(1.3);
    h4080->SetMarkerStyle(22);
    h4080->SetLineWidth(2);
    h4080->SetLineColor(4);
    h4080->Draw("same");


    
   TLegend *leg = new TLegend(0.7,0.6,0.9,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
    
    
    
   TLegendEntry *entry=leg->AddEntry("hMB","0-80%","lp");
    entry->SetMarkerStyle(24);

   entry=leg->AddEntry("h010","0-10%","lp");
    entry->SetMarkerStyle(21);
    
   entry=leg->AddEntry("h1040","10-40%","lp");
   entry->SetTextFont(42);
   entry=leg->AddEntry("h4080","40-80%","lp");

   entry->SetTextFont(42);
  leg->Draw();
    
    
      tex = new TLatex(0.15,0.85,"ALICE, Pb-Pb, #sqrt{s_{NN}} = 2.76 TeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.05);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.77,"|#it{y}| < 0.5, Minimum-bias (0-80%)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05);
   tex->SetLineWidth(2);
   tex->Draw();
    
  
   cTotErrorRMSbarlow->Modified();
   cTotErrorRMSbarlow->cd();
   cTotErrorRMSbarlow->SetSelected(cTotErrorRMSbarlow);
}
