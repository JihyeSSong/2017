{
  ////////////////////////////////////////////////////////////////////
  //
  //  Generate Figure 8A (Sigma/pi ratio) in 
  //  "Production of Sigma(1385) and Xi(1530) hyperon resonances 
  //   in p–Pb collisions at sqrt(sNN) = 5.02 TeV"
  //
  //  Author: Enrico Fragiacomo
  //  Date: 18/12/2015
  //
  //////////////////////////////////////////////////////////////////

  //  TCanvas *RatioPionEfficiencyCorrectedWithMinBias = new TCanvas("RatioPionEfficiencyCorrectedWithMinBias", "RatioPionEfficiencyCorrectedWithMinBias",12,36,700,500);
  TCanvas *RatioPionEfficiencyCorrectedWithMinBias = new TCanvas("RatioPionEfficiencyCorrectedWithMinBias", "RatioPionEfficiencyCorrectedWithMinBias",74,45,800,600);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  gStyle->SetHatchesSpacing(0.7);
  gStyle->SetHatchesLineWidth(1.9);
  gStyle->SetLineWidth(2);

  RatioPionEfficiencyCorrectedWithMinBias->Range(0,0,1,1);
  RatioPionEfficiencyCorrectedWithMinBias->SetFillColor(10);
  RatioPionEfficiencyCorrectedWithMinBias->SetBorderMode(0);
  RatioPionEfficiencyCorrectedWithMinBias->SetBorderSize(2);
  RatioPionEfficiencyCorrectedWithMinBias->SetFrameFillColor(0);
  RatioPionEfficiencyCorrectedWithMinBias->SetFrameBorderMode(0);
    TGaxis::SetMaxDigits(3);
  
  // ------------>Primitives in pad: pad
  TPad *pad = new TPad("pad", "pad",0,0,1,1);
  pad->Draw();
  pad->cd();
  pad->Range(-8.711111,-0.003835616,53.51111,0.01534247);
  pad->SetFillColor(10);
  pad->SetBorderMode(0);
  pad->SetBorderSize(0);
  pad->SetTickx(1);
  pad->SetTicky(1);
  pad->SetLeftMargin(0.15);
  pad->SetRightMargin(0.05);
  pad->SetTopMargin(0.08);
  pad->SetBottomMargin(0.17);
  pad->SetFrameFillColor(0);
  pad->SetFrameBorderMode(0);
  pad->SetFrameBorderMode(0);
   

  //  TGaxis::SetMaxDigits(1); 
  TH1F *frame__2 = new TH1F("frame__2","",10000,0,90);
  frame__2->SetMinimum(0);
  frame__2->SetMaximum(0.015);
  frame__2->SetDirectory(0);
  frame__2->SetStats(0);
  frame__2->SetLineStyle(2);
  frame__2->SetLineWidth(1);
  frame__2->GetXaxis()->SetTitle("#LTd#it{N}_{ch}/d#it{#eta}_{lab}#GT_{|#it{#eta}_{lab}| < 0.5}");
  frame__2->GetXaxis()->SetNdivisions(508);
  frame__2->GetXaxis()->SetRangeUser(0,49);
  frame__2->GetXaxis()->SetLabelFont(42);
  frame__2->GetXaxis()->SetLabelOffset(0.01);
  frame__2->GetXaxis()->SetLabelSize(0.06);
  frame__2->GetXaxis()->SetTitleSize(0.06);
  frame__2->GetXaxis()->SetTickLength(0.02);
  frame__2->GetXaxis()->SetTitleOffset(1.15);
  frame__2->GetXaxis()->SetTitleFont(42);
  frame__2->GetXaxis()->SetNoExponent(kTRUE);
  frame__2->GetYaxis()->SetTitle("(#Sigma^{*#pm}+#bar{#Sigma}^{*#mp})/[2(#pi^{+}+#pi^{-})]");
  frame__2->GetYaxis()->SetNdivisions(508);
  frame__2->GetYaxis()->SetLabelFont(42);
  frame__2->GetYaxis()->SetLabelOffset(0.01);
  frame__2->GetYaxis()->SetLabelSize(0.06);
  frame__2->GetYaxis()->SetTitleSize(0.06);
  frame__2->GetYaxis()->SetTitleOffset(1.0);
  frame__2->GetYaxis()->SetTickLength(0.02);
  frame__2->GetYaxis()->SetTitleFont(42);
  frame__2->GetZaxis()->SetLabelFont(42);
  frame__2->GetZaxis()->SetLabelOffset(0.01);
  frame__2->GetZaxis()->SetLabelSize(0.05);
  frame__2->GetZaxis()->SetTitleSize(0.06);
  frame__2->GetZaxis()->SetTitleOffset(1.1);
  frame__2->GetZaxis()->SetTitleFont(42);
  frame__2->Draw("axis");
   
  TGraphErrors *gre = new TGraphErrors(3);
  gre->SetName("RatioSigmaStarPionStat");
  gre->SetTitle("Graph");

  Int_t ci;   // for color index setting
  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);
  gre->SetLineWidth(2);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,35.6,0.0056);
  gre->SetPointError(0,0.8,0.0001);
  gre->SetPoint(1,19.7,0.0056);
  gre->SetPointError(1,0.5,0.0001);
  gre->SetPoint(2,7.1,0.0044);
  gre->SetPointError(2,0.2,0.0001);
   
  TH1F *Graph_Graph_RatioSigmaStarPionStat115 = new TH1F("Graph_Graph_RatioSigmaStarPionStat115","Graph",100,4.88,39.92);
  Graph_Graph_RatioSigmaStarPionStat115->SetMinimum(0.004006273);
  Graph_Graph_RatioSigmaStarPionStat115->SetMaximum(0.005785476);
  Graph_Graph_RatioSigmaStarPionStat115->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionStat115->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionStat115->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionStat115->GetXaxis()->SetTitleFont(42);
    Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionStat115->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionStat115->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionStat115->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionStat115->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionStat115->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionStat115->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionStat115->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionStat115);
   
  gre->Draw("pz");
   
  gre = new TGraphErrors(3);
  gre->SetName("Graph");
  gre->SetTitle("RatioSigmaStarPionSyst");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,35.6,0.0056);
  gre->SetPointError(0,0.8,0.0006);
  gre->SetPoint(1,19.7,0.0056);
  gre->SetPointError(1,0.5,0.0007);
  gre->SetPoint(2,7.1,0.0044);
  gre->SetPointError(2,0.2,0.0008);
   
  TH1F *Graph_Graph_Graph216 = new TH1F("Graph_Graph_Graph216","RatioSigmaStarPionSyst",100,4.88,39.92);
  Graph_Graph_Graph216->SetMinimum(0.003497851);
  Graph_Graph_Graph216->SetMaximum(0.006411381);
  Graph_Graph_Graph216->SetDirectory(0);
  Graph_Graph_Graph216->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_Graph216->SetLineColor(ci);
  Graph_Graph_Graph216->GetXaxis()->SetLabelFont(42);
  Graph_Graph_Graph216->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_Graph216->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_Graph216->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_Graph216->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_Graph216->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph216->GetXaxis()->SetTitleFont(42);
  Graph_Graph_Graph216->GetYaxis()->SetNdivisions(505);
  Graph_Graph_Graph216->GetYaxis()->SetLabelFont(42);
  Graph_Graph_Graph216->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_Graph216->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_Graph216->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_Graph216->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_Graph216->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph216->GetYaxis()->SetTitleFont(42);
  Graph_Graph_Graph216->GetZaxis()->SetLabelFont(42);
  Graph_Graph_Graph216->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_Graph216->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_Graph216->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_Graph216->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph216->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_Graph216);
   
  gre->Draw("pe2");
   
  gre = new TGraphErrors(3);
  gre->SetName("Graph");
  gre->SetTitle("RatioSigmaStarPionSystUncorr");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(3356);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(1.5);

    double UncorrFactor = 0.35;
    // uncorrelated errors across the multiplicity
    gre->SetPoint(0,35.6,0.0056);
    gre->SetPointError(0,0.8,0.0006*UncorrFactor);
    gre->SetPoint(1,19.7,0.0056);
    gre->SetPointError(1,0.5,0.0007*UncorrFactor);
    gre->SetPoint(2,7.1,0.0044);
    gre->SetPointError(2,0.2,0.0008*UncorrFactor);
    
    // below are shaded errors which don't include common error between numerator and denominator
//  gre->SetPoint(0,35.6,0.0056);
//  gre->SetPointError(0,0.8,0.00028);
//  gre->SetPoint(1,19.7,0.0056);
//  gre->SetPointError(1,0.5,0.00033);
//  gre->SetPoint(2,7.1,0.0044);
//  gre->SetPointError(2,0.2,0.00037);
   
  TH1F *Graph_Graph_Graph317 = new TH1F("Graph_Graph_Graph317","RatioSigmaStarPionSystUncorr",100,4.88,39.92);
  Graph_Graph_Graph317->SetMinimum(0.003835752);
  Graph_Graph_Graph317->SetMaximum(0.006049554);
  Graph_Graph_Graph317->SetDirectory(0);
  Graph_Graph_Graph317->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_Graph317->SetLineColor(ci);
  Graph_Graph_Graph317->GetXaxis()->SetLabelFont(42);
  Graph_Graph_Graph317->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_Graph317->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_Graph317->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_Graph317->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_Graph317->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph317->GetXaxis()->SetTitleFont(42);
  Graph_Graph_Graph317->GetYaxis()->SetNdivisions(505);
  Graph_Graph_Graph317->GetYaxis()->SetLabelFont(42);
  Graph_Graph_Graph317->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_Graph317->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_Graph317->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_Graph317->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_Graph317->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph317->GetYaxis()->SetTitleFont(42);
  Graph_Graph_Graph317->GetZaxis()->SetLabelFont(42);
  Graph_Graph_Graph317->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_Graph317->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_Graph317->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_Graph317->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph317->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_Graph317);
   
  gre->Draw("pe2");
   
   gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionppSyst");
  gre->SetTitle("RatioSigmaStarPionppSyst");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  //  gre->SetPoint(0,6,0.0044);
  gre->SetPoint(0,4.6,0.0044); // changed 17/06/2016 according to http://arxiv.org/abs/1509.07541 
  gre->SetPointError(0,0.34,0.0007);
   
  TH1F *Graph_Graph_RatioSigmaStarPionppSyst519 = new TH1F("Graph_Graph_RatioSigmaStarPionppSyst519","RatioSigmaStarPionppSyst",100,5.76,6.24);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetMinimum(0.00356);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetMaximum(0.00524);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionppSyst519->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionppSyst519);
   
  gre->Draw("pze2");
   
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionppSystUncorr");
  gre->SetTitle("RatioSigmaStarPionppSystUncorr");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(3356);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  // gre->SetPoint(0,6,0.0044);
  gre->SetPoint(0,4.6,0.0044); // changed 17/06/2016 according to http://arxiv.org/abs/1509.07541 
  gre->SetPointError(0,0.34,0.0007);
   
  TH1F *Graph_Graph_RatioSigmaStarPionppSystUncorr620 = new TH1F("Graph_Graph_RatioSigmaStarPionppSystUncorr620","RatioSigmaStarPionppSystUncorr",100,5.76,6.24);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetMinimum(0.00398);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetMaximum(0.00482);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionppSystUncorr620);
   
  gre->Draw("pze2");
   
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionppStat");
  gre->SetTitle("RatioSigmaStarPionppStat");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  // gre->SetPoint(0,6,0.0044);
  gre->SetPoint(0,4.6,0.0044); // changed 17/06/2016 according to http://arxiv.org/abs/1509.07541 
  gre->SetPointError(0,0.34,0.0001);
   
  TH1F *Graph_Graph_RatioSigmaStarPionppStat418 = new TH1F("Graph_Graph_RatioSigmaStarPionppStat418","RatioSigmaStarPionppStat",100,5.76,6.24);
  Graph_Graph_RatioSigmaStarPionppStat418->SetMinimum(0.00428);
  Graph_Graph_RatioSigmaStarPionppStat418->SetMaximum(0.00452);
  Graph_Graph_RatioSigmaStarPionppStat418->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionppStat418->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionppStat418->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionppStat418);
   
  gre->Draw("pz");
   TGraphErrors *gre1 =  (TGraphErrors*) gre->Clone();
  gre1->SetMarkerColor(2);
  gre1->SetMarkerStyle(20);
  gre1->SetMarkerSize(1.5);
  gre1->Draw("pz");
  gre1->SetName("gre1");
  gre1->SetMarkerColor(0);
  gre1->SetMarkerStyle(20);
  gre1->SetMarkerSize(1.3);
  gre1->Draw("pz");

 

  gre = new TGraphErrors(3);
  gre->SetName("RatioSigmaStarPionFromSTARStat");
  gre->SetTitle("RatioSigmaStarPionFromSTARStat");

  ci = TColor::GetColor("#999999");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#999999");
  gre->SetLineColor(ci);
  gre->SetLineWidth(2);

  ci = TColor::GetColor("#999999");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(29);
  gre->SetMarkerSize(2);
  gre->SetPoint(0,4.2,0.0031);
  gre->SetPointError(0,0.2,0.0004);
  gre->SetPoint(1,10.6,0.0033);
  gre->SetPointError(1,0.4,0.0003);
  gre->SetPoint(2,15.1,0.004);
  gre->SetPointError(2,0.5,0.0003);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromSTARStat721 = new TH1F("Graph_Graph_RatioSigmaStarPionFromSTARStat721","RatioSigmaStarPionFromSTARStat",100,2.84,16.76);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->SetMinimum(0.00254);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->SetMaximum(0.00446);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARStat721->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromSTARStat721);
   
  gre->Draw("pz");
   
  gre = new TGraphErrors(3);
  gre->SetName("RatioSigmaStarPionFromSTARSyst");
  gre->SetTitle("RatioSigmaStarPionFromSTARSyst");

  ci = TColor::GetColor("#999999");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#999999");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#999999");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(29);
  gre->SetMarkerSize(2);
  gre->SetPoint(0,4.2,0.0031);
  gre->SetPointError(0,0.2,0.0009);
  gre->SetPoint(1,10.6,0.0033);
  gre->SetPointError(1,0.4,0.0006);
  gre->SetPoint(2,15.1,0.004);
  gre->SetPointError(2,0.5,0.0006);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromSTARSyst822 = new TH1F("Graph_Graph_RatioSigmaStarPionFromSTARSyst822","RatioSigmaStarPionFromSTARSyst",100,2.84,16.76);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->SetMinimum(0.00196);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->SetMaximum(0.00484);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARSyst822->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromSTARSyst822);
   
  gre->Draw("pe2");
   
  
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionFromSTARppSyst");
  gre->SetTitle("RatioSigmaStarPionFromSTARppSyst");

  ci = TColor::GetColor("#999999");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#999999");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#999999");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(30);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,5.5,0.00374);
  gre->SetPointError(0,0.2,0.0006);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024 = new TH1F("Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024","RatioSigmaStarPionFromSTARppSyst",100,5.26,5.74);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->SetMinimum(0.00302);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->SetMaximum(0.00446);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromSTARppSyst1024);
   
  gre->Draw("pze2");
   
   gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionFromSTARppStat");
  gre->SetTitle("RatioSigmaStarPionFromSTARppStat");

  ci = TColor::GetColor("#999999");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#999999");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#999999");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(30);
  gre->SetMarkerSize(2);
  gre->SetPoint(0,5.5,0.00374);
  gre->SetPointError(0,0.2,0.0003);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromSTARppStat923 = new TH1F("Graph_Graph_RatioSigmaStarPionFromSTARppStat923","RatioSigmaStarPionFromSTARppStat",100,5.26,5.74);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->SetMinimum(0.00338);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->SetMaximum(0.0041);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromSTARppStat923->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromSTARppStat923);
   
  gre->Draw("pz");
      TGraphErrors *gre2 =  (TGraphErrors*) gre->Clone();
  gre2->SetMarkerColor(ci);
  gre2->SetMarkerStyle(29);
  gre2->SetMarkerSize(2);
  gre2->Draw("pz");
  gre2->SetName("gre1");
  gre2->SetMarkerColor(0);
  gre2->SetMarkerStyle(29);
  gre2->SetMarkerSize(1.6);
  gre2->Draw("pz");

   gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionppSyst");
  gre->SetTitle("RatioSigmaStarPionppSyst");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  //  gre->SetPoint(0,6,0.0044);
  gre->SetPoint(0,4.6,0.0044); // changed 17/06/2016 according to http://arxiv.org/abs/1509.07541 
  gre->SetPointError(0,0.34,0.0007);
   
  TH1F *Graph_Graph_RatioSigmaStarPionppSyst519 = new TH1F("Graph_Graph_RatioSigmaStarPionppSyst519","RatioSigmaStarPionppSyst",100,5.76,6.24);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetMinimum(0.00356);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetMaximum(0.00524);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionppSyst519->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionppSyst519->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSyst519->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionppSyst519);
   
  gre->Draw("pze2");
   
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionppSystUncorr");
  gre->SetTitle("RatioSigmaStarPionppSystUncorr");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(3356);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  // gre->SetPoint(0,6,0.0044);
  gre->SetPoint(0,4.6,0.0044); // changed 17/06/2016 according to http://arxiv.org/abs/1509.07541 
  gre->SetPointError(0,0.34,0.00035);
   
  TH1F *Graph_Graph_RatioSigmaStarPionppSystUncorr620 = new TH1F("Graph_Graph_RatioSigmaStarPionppSystUncorr620","RatioSigmaStarPionppSystUncorr",100,5.76,6.24);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetMinimum(0.00398);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetMaximum(0.00482);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppSystUncorr620->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionppSystUncorr620);
   
  gre->Draw("pze2");
   
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionppStat");
  gre->SetTitle("RatioSigmaStarPionppStat");

  ci = TColor::GetColor("#ff0000");
  gre->SetFillColor(ci);
  gre->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);

  ci = TColor::GetColor("#ff0000");
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  // gre->SetPoint(0,6,0.0044);
  gre->SetPoint(0,4.6,0.0044); // changed 17/06/2016 according to http://arxiv.org/abs/1509.07541 
  gre->SetPointError(0,0.34,0.0001);
   
  TH1F *Graph_Graph_RatioSigmaStarPionppStat418 = new TH1F("Graph_Graph_RatioSigmaStarPionppStat418","RatioSigmaStarPionppStat",100,5.76,6.24);
  Graph_Graph_RatioSigmaStarPionppStat418->SetMinimum(0.00428);
  Graph_Graph_RatioSigmaStarPionppStat418->SetMaximum(0.00452);
  Graph_Graph_RatioSigmaStarPionppStat418->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionppStat418->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionppStat418->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppStat418->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppStat418->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionppStat418->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionppStat418);
   
  gre->Draw("pz");
 
 gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionFromThermal");
  gre->SetTitle("RatioSigmaStarPionFromThermal");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#0000ff");
  gre->SetLineColor(ci);
  gre->SetLineColor(2);
  gre->SetLineStyle(1);
  gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  gre->SetPoint(0,47,0.004655);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromThermal1125 = new TH1F("Graph_Graph_RatioSigmaStarPionFromThermal1125","RatioSigmaStarPionFromThermal",100,42.4,49.6);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->SetMinimum(0);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->SetMaximum(1.104655);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromThermal1125->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromThermal1125->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromThermal1125);
   
  gre->Draw("pz");
   
  gre = new TGraphErrors(1);
  gre->SetName("RefForPlotThermal");
  gre->SetTitle("RefForPlotThermal");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#0000ff");
  gre->SetLineColor(ci);
  gre->SetLineStyle(5);
   gre->SetLineColor(2);
  gre->SetLineStyle(1);
 gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  gre->SetPoint(0,47,100);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RefForPlotThermal1226 = new TH1F("Graph_Graph_RefForPlotThermal1226","RefForPlotThermal",100,42.4,49.6);
  Graph_Graph_RefForPlotThermal1226->SetMinimum(99.9);
  Graph_Graph_RefForPlotThermal1226->SetMaximum(101.1);
  Graph_Graph_RefForPlotThermal1226->SetDirectory(0);
  Graph_Graph_RefForPlotThermal1226->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RefForPlotThermal1226->SetLineColor(ci);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotThermal1226->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotThermal1226->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotThermal1226->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotThermal1226->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotThermal1226->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotThermal1226->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotThermal1226->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotThermal1226->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RefForPlotThermal1226);
   
  gre->Draw("pz");
   
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionFromTHERMUSpPb");
  gre->SetTitle("RatioSigmaStarPionFromTHERMUSpPb");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#009900");
  gre->SetLineColor(ci);
  gre->SetLineColor(kOrange+7);
  gre->SetLineStyle(9);
  gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  //gre->SetPoint(0,46,0.0045);
  gre->SetPoint(0,16.81,0.0045);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327 = new TH1F("Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327","RatioSigmaStarPionFromTHERMUSpPb",100,42.4,49.6);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->SetMinimum(0);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->SetMaximum(1.1045);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromTHERMUSpPb1327);
   
 // gre->Draw("pz"); // Remove THERMUS
   
  gre = new TGraphErrors(1);
  gre->SetName("RefForPlotTHERMUSpPb");
  gre->SetTitle("RefForPlotTHERMUSpPb");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#009900");
  gre->SetLineColor(ci);
  gre->SetLineColor(kOrange+7);
  gre->SetLineStyle(9);
  gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  gre->SetPoint(0,46,100);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RefForPlotTHERMUSpPb1428 = new TH1F("Graph_Graph_RefForPlotTHERMUSpPb1428","RefForPlotTHERMUSpPb",100,42.4,49.6);
  Graph_Graph_RefForPlotTHERMUSpPb1428->SetMinimum(99.9);
  Graph_Graph_RefForPlotTHERMUSpPb1428->SetMaximum(101.1);
  Graph_Graph_RefForPlotTHERMUSpPb1428->SetDirectory(0);
  Graph_Graph_RefForPlotTHERMUSpPb1428->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RefForPlotTHERMUSpPb1428->SetLineColor(ci);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotTHERMUSpPb1428->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RefForPlotTHERMUSpPb1428);
   
  gre->Draw("pz");
   
  //////////////////////////////////////////////////////////////////
  // 
  // predictions from DPMJET
  //
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionFromDPMJETpPb");
  gre->SetTitle("RatioSigmaStarPionFromDPMJETpPb");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#cc6600");
  gre->SetLineColor(ci);
  gre->SetLineColor(kGreen+2);
  gre->SetLineStyle(2);
  gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  //gre->SetPoint(0,46,0.1);
  gre->SetPoint(0,16.81,1.94E-03);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533 = new TH1F("Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533","RatioSigmaStarPionFromDPMJETpPb",100,42.4,49.6);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->SetMinimum(0);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->SetMaximum(1.2);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromDPMJETpPb1533);
   
  gre->Draw("pz");
   
  //////////////////////////////////////////////////////////////////
  // 
  // 
  //
  gre = new TGraphErrors(1);
  gre->SetName("RefForPlotDPMJETpPb");
  gre->SetTitle("RefForPlotDPMJETpPb");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#cc6600");
  gre->SetLineColor(ci);
  gre->SetLineColor(kGreen+2);
  gre->SetLineStyle(2);
  gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  gre->SetPoint(0,46,100);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RefForPlotDPMJETpPb1634 = new TH1F("Graph_Graph_RefForPlotDPMJETpPb1634","RefForPlotDPMJETpPb",100,42.4,49.6);
  Graph_Graph_RefForPlotDPMJETpPb1634->SetMinimum(99.9);
  Graph_Graph_RefForPlotDPMJETpPb1634->SetMaximum(101.1);
  Graph_Graph_RefForPlotDPMJETpPb1634->SetDirectory(0);
  Graph_Graph_RefForPlotDPMJETpPb1634->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RefForPlotDPMJETpPb1634->SetLineColor(ci);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotDPMJETpPb1634->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RefForPlotDPMJETpPb1634);
   
  gre->Draw("pz");
   
  //////////////////////////////////////////////////////////////////
  // 
  // predictions from PYTHIA8
  //
  gre = new TGraphErrors(1);
  gre->SetName("RatioSigmaStarPionFromPYTHIA8pPb");
  gre->SetTitle("RatioSigmaStarPionFromPYTHIA8pPb");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);
  gre->SetLineColor(4);
  gre->SetLineStyle(3);
  gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  //gre->SetPoint(0,46,0.105);
  gre->SetPoint(0,4.6,1.76E-03);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735 = new TH1F("Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735","RatioSigmaStarPionFromPYTHIA8pPb",100,42.4,49.6);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->SetMinimum(0.005);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->SetMaximum(1.205);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->SetDirectory(0);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->SetLineColor(ci);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RatioSigmaStarPionFromPYTHIA8pPb1735);
   
  gre->Draw("pz");
   
  //////////////////////////////////////////////////////////////////
  // 
  // 
  //
  gre = new TGraphErrors(1);
  gre->SetName("RefForPlotPYTHIA8pPb");
  gre->SetTitle("RefForPlotPYTHIA8pPb");
  gre->SetFillColor(1);

  ci = TColor::GetColor("#ff0000");
  gre->SetLineColor(ci);
  gre->SetLineColor(4);
  gre->SetLineStyle(3);
   gre->SetLineWidth(4);
  gre->SetMarkerStyle(0);
  gre->SetMarkerSize(0);
  gre->SetPoint(0,46,100);
  gre->SetPointError(0,3,0);
   
  TH1F *Graph_Graph_RefForPlotPYTHIA8pPb1836 = new TH1F("Graph_Graph_RefForPlotPYTHIA8pPb1836","RefForPlotPYTHIA8pPb",100,42.4,49.6);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->SetMinimum(99.9);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->SetMaximum(101.1);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->SetDirectory(0);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->SetStats(0);

  ci = TColor::GetColor("#000099");
  Graph_Graph_RefForPlotPYTHIA8pPb1836->SetLineColor(ci);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetXaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetNdivisions(505);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetTickLength(0.02);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetYaxis()->SetTitleFont(42);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetZaxis()->SetLabelFont(42);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetZaxis()->SetTitleOffset(1.1);
  Graph_Graph_RefForPlotPYTHIA8pPb1836->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph_RefForPlotPYTHIA8pPb1836);
   
  gre->Draw("pz");
   
  //////////////////////////////////////////////////////////////////
  // 
  // Draw legend
  //
    //  TLegend *leg = new TLegend(0.16,0.6,0.36,0.9,NULL,"brNDC");
  TLegend *leg = new TLegend(0.17,0.55,0.52,0.87,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.038);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(2);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);
  TLegendEntry *entry=leg->AddEntry("RefForPlotThermal","#splitline{GSI-Heidelberg model}{#it{T}_{ch} = 156 MeV}","pl");

  ci = TColor::GetColor("#0000ff");
  entry->SetLineColor(ci);
  entry->SetLineStyle(5);
  entry->SetLineWidth(4);
  entry->SetMarkerColor(1);
  /*entry=leg->AddEntry("RefForPlotTHERMUSpPb","#splitline{THERMUS p-Pb}{#it{T}_{ch} = 158 MeV}","pl");

   ci = TColor::GetColor("#009900");
  entry->SetLineColor(ci);
  entry->SetLineStyle(5);
  entry->SetLineWidth(4);
  entry->SetMarkerColor(1);*/
  entry=leg->AddEntry("RefForPlotDPMJETpPb","p-Pb, DPMJET","pl");

  ci = TColor::GetColor("#cc6600");
  entry->SetLineColor(ci);
  entry->SetLineStyle(1);
  entry->SetLineWidth(4);
  entry->SetMarkerColor(1);
  entry=leg->AddEntry("RefForPlotPYTHIA8pPb","pp, Pythia8","pl");

 ci = TColor::GetColor("#009900");
  entry->SetLineColor(ci);
  entry->SetLineStyle(5);
  entry->SetLineWidth(4);
  entry->SetMarkerColor(1);
  leg->Draw();
   
  leg = new TLegend(0.52,0.52,0.7,0.87,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.038);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(2);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);
  entry=leg->AddEntry("RatioSigmaStarPionStat","ALICE, p-Pb, #sqrt{#it{s}_{NN}} = 5.02 TeV","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);

  ci = TColor::GetColor("#ff0000");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(20);
  entry->SetMarkerSize(1.5);
  entry=leg->AddEntry("RatioSigmaStarPionppStat","ALICE, pp, #sqrt{#it{s}} = 7 TeV (INEL)","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);

  ci = TColor::GetColor("#ff0000");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(4);
  entry->SetMarkerSize(1.5);
  entry=leg->AddEntry("RatioSigmaStarPionFromSTARStat","STAR, d-Au, #sqrt{#it{s}_{NN}} = 200 GeV","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);

  ci = TColor::GetColor("#999999");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(29);
  entry->SetMarkerSize(2);
  entry=leg->AddEntry("RatioSigmaStarPionFromSTARppStat","STAR, pp, #sqrt{#it{s}} = 200 GeV","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);

  ci = TColor::GetColor("#999999");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(30);
  entry->SetMarkerSize(1.5);
  leg->Draw();
  
    ///////////// Below is cosmetics for the discontinuity on X-axis  /////////////
    TLine *line = new TLine(42.5,-0.0008,43.5,0.0008);
    line->SetLineWidth(10);
    line->SetLineColor(0);
    line->Draw();

    
    line = new TLine(42.,-0.0008,43.,0.0008);
    line->SetLineWidth(3);
    line->SetLineColor(1);
    line->Draw();
    
    line = new TLine(43.,-0.0008,44.,0.0008);
    line->SetLineWidth(3);
    line->SetLineColor(1);
    line->Draw();
    
    TLatex *tex = new TLatex(48.,-0.00115,"10^{3}");
    tex->SetTextFont(42);
    tex->SetTextSize(0.06);
    tex->Draw();
    
    double upperY = 0.015;
    
    line = new TLine(42.5,-0.0008+upperY,43.5,0.0008+upperY);
    line->SetLineWidth(10);
    line->SetLineColor(0);
    line->Draw();
    
    
    line = new TLine(42.,-0.0008+upperY,43.,0.0008+upperY);
    line->SetLineWidth(3);
    line->SetLineColor(1);
    line->Draw();
    
    line = new TLine(43.,-0.0008+upperY,44.,0.0008+upperY);
    line->SetLineWidth(3);
    line->SetLineColor(1);
    line->Draw();

    
    
    //////////////////////////////////////////////////////////////////
    
  TPaveText *pt = new TPaveText(0.44,0.22,0.83,0.36,"brNDC");
  pt->SetFillColor(0);
  pt->SetLineColor(0);
  pt->SetTextAlign(11);
  pt->SetTextFont(42);
  pt->SetTextSize(0.04);
  pt->SetBorderSize(0);
  TText *text = pt->AddText("#splitline{Uncertainties: stat. (bars), sys. (boxes)}{uncorr. sys. (shaded boxes)}");
  //pt->Draw();
  pad->Modified();
  RatioPionEfficiencyCorrectedWithMinBias->cd();
  RatioPionEfficiencyCorrectedWithMinBias->Modified();
  RatioPionEfficiencyCorrectedWithMinBias->cd();
  RatioPionEfficiencyCorrectedWithMinBias->SetSelected(RatioPionEfficiencyCorrectedWithMinBias);

  RatioPionEfficiencyCorrectedWithMinBias->SaveAs("PAPER_FIGURE8A.gif");
  RatioPionEfficiencyCorrectedWithMinBias->SaveAs("PAPER_FIGURE8A.eps");

}


