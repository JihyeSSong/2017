{
  ////////////////////////////////////////////////////////////////////
  //
  //  Generate Figure 5 (mean pT vs. centrality) in 
  //  "Production of Sigma(1385) and Xi(1530) hyperon resonances 
  //   in p–Pb collisions at sqrt(sNN) = 5.02 TeV"
  //
  //  Author: Enrico Fragiacomo
  //  Date: 18/12/2015
  //
  //  Based on: Final_IdMeanPt_dNdch.C by Francesca Bellini for Figure 5 in 
  //  "Production of K(892) and Phi(1020) 
  //   in p-Pb collisions at sqrt(sNN) = 5.02 TeV"
  //
  //////////////////////////////////////////////////////////////////

  TCanvas *c = new TCanvas("c", "",12,36,600,600);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  gStyle->SetLineWidth(2);
  c->Range(0,0,1,1);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetFrameBorderMode(0);
  
  // ------------>Primitives in pad: p2
  TPad *p2 = new TPad("p2", "",0,0,1,1);
  p2->Draw();
  p2->cd();
  p2->Range(-0.1117832,0.4236842,2.640305,2.134211);
  p2->SetFillColor(0);
  p2->SetBorderMode(0);
  p2->SetBorderSize(2);
  p2->SetLogx();
  p2->SetTickx(1);
  p2->SetTicky(1);
  p2->SetLeftMargin(0.18);
  p2->SetRightMargin(0.06);
  p2->SetTopMargin(0.02);
  p2->SetBottomMargin(0.2);
  p2->SetFrameBorderMode(0);
  p2->SetFrameLineWidth(2);
  p2->SetFrameBorderMode(0);
   
  //////////////////////////////////////////////////////////////////
  // 
  // Draw frame
  //
  TH1F *frame = new TH1F("frame","",1,2,300);
  frame->SetMinimum(0.8);
  frame->SetMaximum(2.1);
  frame->SetStats(0);
  frame->GetXaxis()->SetTitle("#LTd#it{N}_{ch}/d#it{#eta}_{lab}#GT_{|#it{#eta}_{lab}| < 0.5}");
  frame->GetXaxis()->SetLabelFont(42);
  frame->GetXaxis()->SetLabelOffset(0.01);
  frame->GetXaxis()->SetLabelSize(0.06);
  frame->GetXaxis()->SetTitleSize(0.06);
  frame->GetXaxis()->SetTitleOffset(1.45);
  frame->GetXaxis()->SetTitleFont(42);
  frame->GetYaxis()->SetTitle("#LT#it{p}_{T}#GT (GeV/#it{c})");
  frame->GetYaxis()->SetNdivisions(509);
  frame->GetYaxis()->SetLabelFont(42);
  frame->GetYaxis()->SetLabelOffset(0.01);
  frame->GetYaxis()->SetLabelSize(0.06);
  frame->GetYaxis()->SetTitleSize(0.06);
  frame->GetYaxis()->SetTickLength(0.02);
  frame->GetYaxis()->SetTitleOffset(1.3);
  frame->GetYaxis()->SetTitleFont(42);
  frame->GetZaxis()->SetLabelFont(42);
  frame->GetZaxis()->SetLabelOffset(0.01);
  frame->GetZaxis()->SetLabelSize(0.05);
  frame->GetZaxis()->SetTitleSize(0.06);
  frame->GetZaxis()->SetTitleFont(42);
  frame->Draw("");

  //////////////////////////////////////////////////////////////////
    double shift = 0.5;
    
    // Start Lambda systematic uncertainties
  TBox *box = new TBox(45-1,1.33749,45+1,1.418436);

  Int_t ci;   // for color index setting
  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(36.2-0.8,1.316888,36.2+0.8,1.391648);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(30.5-0.7,1.284411,30.5+0.7,1.362695);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(23.2-0.5,1.23901,23.2+0.5,1.303404);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(16.1-0.4,1.168182,16.1+0.4,1.225904);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(9.8-0.2,1.061901,9.8+0.2,1.134435);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(4.4-0.1,0.924812,4.4+0.1,1.01745);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  
    box = new TBox(45-1,1.742,45+1,1.894);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(36.2-0.8,1.75,36.2+0.8,1.908);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(30.5-0.7,1.689,30.5+0.7,1.853);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(23.2-0.5+shift,1.586,23.2+0.5+shift,1.75);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(16.1-0.4+shift,1.496,16.1+0.4+shift,1.63);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(9.8-0.2,1.46,9.8+0.2,1.628);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(4.4-0.1,1.244,4.4+0.1,1.456);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#000000");
    box->SetLineColor(ci);
    box->Draw();
   
  box = new TBox(45-1,1.537,45+1,1.611);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(36.2-0.8,1.493,36.2+0.8,1.565);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(30.5-0.7,1.481,30.5+0.7,1.549);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(23.2-0.5+shift,1.436,23.2+0.5+shift,1.5);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(16.1-0.4+shift,1.364,16.1+0.4+shift,1.424);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(9.8-0.2,1.248,9.8+0.2,1.312);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(4.4-0.1,1.1178,4.4+0.1,1.1914);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#000000");
  box->SetLineColor(ci);
  box->Draw();

  //  box = new TBox(35.6-0.8,1.495-0.027,35.6+0.8,1.495+0.027);
  box = new TBox(35.6-0.8,1.495-0.046,35.6+0.8,1.495+0.046);

  ci = TColor::GetColor("#ff0000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  box->SetLineColor(ci);
  box->Draw();
  //  box = new TBox(19.7-0.5,1.342-0.033,19.7+0.5,1.342+0.033);
  box = new TBox(19.7-0.5,1.342-0.055,19.7+0.5,1.342+0.055);

  ci = TColor::GetColor("#ff0000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  box->SetLineColor(ci);
  box->Draw();
  //  box = new TBox(7.1-0.2,1.173-0.043,7.1+0.2,1.173+0.043);
  box = new TBox(7.1-0.2,1.173-0.067,7.1+0.2,1.173+0.067);

  ci = TColor::GetColor("#ff0000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#ff0000");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(35.6-0.8,1.626-0.068,35.6+0.8,1.626+0.068);
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);


  ci = TColor::GetColor("#0000ff");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(23.2-0.5,1.482-0.1,23.2+0.5,1.482+0.1);
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);


  ci = TColor::GetColor("#0000ff");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(16.1-0.4,1.459-0.114,16.1+0.4,1.459+0.114);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#0000ff");
  box->SetLineColor(ci);
  box->Draw();
  box = new TBox(7.1-0.2,1.377-0.089,7.1+0.2,1.377+0.089);

  ci = TColor::GetColor("#000000");
  box->SetFillColor(ci);
  box->SetFillStyle(0);

  ci = TColor::GetColor("#0000ff");
  box->SetLineColor(ci);
  box->Draw();

   
  /////////////////////////////////////////////////////////
  //
  // Lambda mean pT vs. centrality
  //
  ci = TColor::GetColor("#000000");
  TGraphErrors *gre = new TGraphErrors(7);
  gre->SetName("GraphLambda");
  gre->SetTitle("GraphLambda");
  gre->SetFillColor(1);
  gre->SetFillStyle(0);
  gre->SetLineColor(ci);
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(4);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,45.,1.377963);
  gre->SetPointError(0,1,0.004903);
  gre->SetPoint(1,36.2,1.354268);
  gre->SetPointError(1,0.8,0.005114);
  gre->SetPoint(2,30.5,1.323553);
  gre->SetPointError(2,0.7,0.004321);
  gre->SetPoint(3,23.2,1.271207);
  gre->SetPointError(3,0.5,0.003724);
  gre->SetPoint(4,16.1,1.197043);
  gre->SetPointError(4,0.4,0.003738);
  gre->SetPoint(5,9.8,1.098168);
  gre->SetPointError(5,0.2,0.003955);
  gre->SetPoint(6,4.4,0.971131);
  gre->SetPointError(6,0.1,0.005563);
   
  TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph_Graph1",100,0.365245,50.8577);
  Graph_Graph1->SetMinimum(0.9238382);
  Graph_Graph1->SetMaximum(1.424596);
  Graph_Graph1->SetDirectory(0);
  Graph_Graph1->SetStats(0);
  Graph_Graph1->GetXaxis()->SetLabelFont(42);
  Graph_Graph1->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph1->GetXaxis()->SetTitleFont(42);
  Graph_Graph1->GetYaxis()->SetLabelFont(42);
  Graph_Graph1->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph1->GetYaxis()->SetTickLength(0.02);
  Graph_Graph1->GetYaxis()->SetTitleFont(42);
  Graph_Graph1->GetZaxis()->SetLabelFont(42);
  Graph_Graph1->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph1->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph1);
   
  gre->Draw("pz");
  // TGraphErrors *gre12 =  (TGraphErrors*) gre->Clone();
  //gre12->SetName("gre12");
  //gre12->SetMarkerColor(ci);
  //gre12->SetMarkerStyle(20);
  //gre12->SetMarkerSize(1.0);
  //  gre12->Draw("pz");
  TGraphErrors *gre1 =  (TGraphErrors*) gre->Clone();
  gre1->SetName("gre1");
  gre1->SetMarkerColor(0);
  gre1->SetMarkerStyle(20);
  gre1->SetMarkerSize(1.4);
  gre1->Draw("pz");

  /////////////////////////////////////////////////////////
  //
  // Xi mean pT vs. centrality
  //
  ci = TColor::GetColor("#000000");
  gre = new TGraphErrors(7);
  gre->SetName("GraphXi");
  gre->SetTitle("GraphXi");
  gre->SetFillColor(1);
  gre->SetFillStyle(0);
  gre->SetLineColor(ci);
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(25);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,45.,1.574);
  gre->SetPointError(0,1,0.01);
  gre->SetPoint(1,36.2,1.529);
  gre->SetPointError(1,0.8,0.009);
  gre->SetPoint(2,30.5,1.515);
  gre->SetPointError(2,0.7,0.007);
  gre->SetPoint(3,23.2+shift,1.468);
  gre->SetPointError(3,0.5,0.006);
  gre->SetPoint(4,16.1+shift,1.394);
  gre->SetPointError(4,0.35,0.012);
  gre->SetPoint(5,9.8,1.28);
  gre->SetPointError(5,0.20895,0.009);
  gre->SetPoint(6,4.4,1.1546);
  gre->SetPointError(6,0.0945,0.0175);
   
  TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph_Graph2",100,0.365245,50.8577);
  Graph_Graph2->SetMinimum(1.09241);
  Graph_Graph2->SetMaximum(1.62869);
  Graph_Graph2->SetDirectory(0);
  Graph_Graph2->SetStats(0);
  Graph_Graph2->GetXaxis()->SetLabelFont(42);
  Graph_Graph2->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph2->GetXaxis()->SetTitleFont(42);
  Graph_Graph2->GetYaxis()->SetLabelFont(42);
  Graph_Graph2->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph2->GetYaxis()->SetTickLength(0.02);
  Graph_Graph2->GetYaxis()->SetTitleFont(42);
  Graph_Graph2->GetZaxis()->SetLabelFont(42);
  Graph_Graph2->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph2->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph2);
   
  gre->Draw("pz");
  TGraphErrors *gre2 =  (TGraphErrors*) gre->Clone();
  gre2->SetName("gre2");
  gre2->SetMarkerColor(0);
  gre2->SetMarkerStyle(21);
  gre2->SetMarkerSize(1.4);
  gre2->Draw("pz");
   
  /////////////////////////////////////////////////////////
  //
  // Sigma* mean pT vs. centrality
  //
  ci = TColor::GetColor("#ff0000");
  gre = new TGraphErrors(3);
  gre->SetName("GraphSigmaStar");
  gre->SetTitle("GraphSigmaStar");
  gre->SetFillColor(1);
  gre->SetFillStyle(0);
  gre->SetLineColor(ci);
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(20);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,35.6,1.495);
  gre->SetPointError(0,0.8,0.012);
  gre->SetPoint(1,19.7,1.342);
  gre->SetPointError(1,0.5,0.010);
  gre->SetPoint(2,7.1,1.173);
  gre->SetPointError(2,0.2,0.015);
   
  TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph_Graph3",100,5.378,40.442);
  Graph_Graph3->SetMinimum(1.1991);
  Graph_Graph3->SetMaximum(1.5579);
  Graph_Graph3->SetDirectory(0);
  Graph_Graph3->SetStats(0);
  Graph_Graph3->GetXaxis()->SetLabelFont(42);
  Graph_Graph3->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph3->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph3->GetXaxis()->SetTitleFont(42);
  Graph_Graph3->GetYaxis()->SetLabelFont(42);
  Graph_Graph3->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph3->GetYaxis()->SetTickLength(0.02);
  Graph_Graph3->GetYaxis()->SetTitleFont(42);
  Graph_Graph3->GetZaxis()->SetLabelFont(42);
  Graph_Graph3->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph3->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph3->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph3);
   
  gre->Draw("pz");
    
    
    /////////////////////////////////////////////////////////
    //
    // Omega mean pT vs. centrality
    //
    // Systematic error
  // box = new TBox(35.6-0.8,1.495-0.027,35.6+0.8,1.495+0.027);
  box = new TBox(35.6-0.8,1.495-0.046,35.6+0.8,1.495+0.046);
    
    ci = TColor::GetColor("#ff0000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#ff0000");
    box->SetLineColor(ci);
    box->Draw();
    //box = new TBox(19.7-0.5,1.342-0.033,19.7+0.5,1.342+0.033);
    box = new TBox(19.7-0.5,1.342-0.055,19.7+0.5,1.342+0.055);
  
    ci = TColor::GetColor("#ff0000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#ff0000");
    box->SetLineColor(ci);
    box->Draw();
    // box = new TBox(7.1-0.2,1.173-0.043,7.1+0.2,1.173+0.043);
  box = new TBox(7.1-0.2,1.173-0.069,7.1+0.2,1.173+0.069);
   
    ci = TColor::GetColor("#ff0000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#ff0000");
    box->SetLineColor(ci);
    box->Draw();
    
    ci = TColor::GetColor("#000000");
    gre = new TGraphErrors(7);
    gre->SetName("GraphOmega");
    gre->SetTitle("GraphOmega");
    gre->SetFillColor(ci);
    gre->SetFillStyle(1);
    gre->SetLineColor(ci);
    gre->SetMarkerColor(ci);
    gre->SetMarkerStyle(28);
    gre->SetMarkerSize(2.0);
    gre->SetPoint(0,45.,1.818);
    gre->SetPointError(0,1,0.056);
    gre->SetPoint(1,36.2,1.829);
    gre->SetPointError(1,0.8,0.062);
    gre->SetPoint(2,30.5,1.771);
    gre->SetPointError(2,0.7,0.058);
    gre->SetPoint(3,23.2+shift,1.668);
    gre->SetPointError(3,0.5,0.04);
    gre->SetPoint(4,16.1+shift,1.563);
    gre->SetPointError(4,0.4,0.033);
    gre->SetPoint(5,9.8,1.544);
    gre->SetPointError(5,0.2,0.055);
    gre->SetPoint(6,4.4,1.35);
    gre->SetPointError(6,0.1,0.11);
    
    TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph_Graph5",100,3.665655,50.3577);
    Graph_Graph5->SetMinimum(1.1749);
    Graph_Graph5->SetMaximum(1.9561);
    Graph_Graph5->SetDirectory(0);
    Graph_Graph5->SetStats(0);
    Graph_Graph5->GetXaxis()->SetLabelFont(42);
    Graph_Graph5->GetXaxis()->SetLabelOffset(0.01);
    Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
    Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
    Graph_Graph5->GetXaxis()->SetTitleFont(42);
    Graph_Graph5->GetYaxis()->SetLabelFont(42);
    Graph_Graph5->GetYaxis()->SetLabelOffset(0.01);
    Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
    Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
    Graph_Graph5->GetYaxis()->SetTickLength(0.02);
    Graph_Graph5->GetYaxis()->SetTitleFont(42);
    Graph_Graph5->GetZaxis()->SetLabelFont(42);
    Graph_Graph5->GetZaxis()->SetLabelOffset(0.01);
    Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
    Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
    Graph_Graph5->GetZaxis()->SetTitleFont(42);
    gre->SetHistogram(Graph_Graph5);
    
    
    TGraphErrors *gre3 =  (TGraphErrors*) gre->Clone();
    gre3->SetName("gre3");
    gre3->SetMarkerColor(0);
    gre3->SetMarkerStyle(34);
    gre3->SetMarkerSize(1.9);
    gre3->Draw("pz");
    
    gre->Draw("pz");

   
  /////////////////////////////////////////////////////////
  //
  // Xi* mean pT vs. centrality
  //
    box = new TBox(35.6-0.8,1.626-0.068,35.6+0.8,1.626+0.068);
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    
    ci = TColor::GetColor("#0000ff");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(23.2-0.5,1.482-0.1,23.2+0.5,1.482+0.1);
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    
    ci = TColor::GetColor("#0000ff");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(16.1-0.4,1.459-0.114,16.1+0.4,1.459+0.114);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#0000ff");
    box->SetLineColor(ci);
    box->Draw();
    box = new TBox(7.1-0.2,1.377-0.089,7.1+0.2,1.377+0.089);
    
    ci = TColor::GetColor("#000000");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    
    ci = TColor::GetColor("#0000ff");
    box->SetLineColor(ci);
    box->Draw();

  ci = TColor::GetColor("#0000ff");
  gre = new TGraphErrors(4);
  gre->SetName("GraphXiStar");
  gre->SetTitle("GraphXiStar");
  gre->SetFillColor(1);
  gre->SetFillStyle(0);
  gre->SetLineColor(ci);
  gre->SetMarkerColor(ci);
  gre->SetMarkerStyle(21);
  gre->SetMarkerSize(1.5);
  gre->SetPoint(0,35.6,1.626);
  gre->SetPointError(0,0.8,0.016);
  gre->SetPoint(1,23.2,1.482);
  gre->SetPointError(1,0.5,0.02);
  gre->SetPoint(2,16.1,1.459);
  gre->SetPointError(2,0.4,0.025);
  gre->SetPoint(3,7.1,1.377);
  gre->SetPointError(3,0.2,0.023);
   
  TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph_Graph4",100,5.34,40.86);
  Graph_Graph4->SetMinimum(1.3233);
  Graph_Graph4->SetMaximum(1.6917);
  Graph_Graph4->SetDirectory(0);
  Graph_Graph4->SetStats(0);
  Graph_Graph4->GetXaxis()->SetLabelFont(42);
  Graph_Graph4->GetXaxis()->SetLabelOffset(0.01);
  Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
  Graph_Graph4->GetXaxis()->SetTitleSize(0.06);
  Graph_Graph4->GetXaxis()->SetTitleFont(42);
  Graph_Graph4->GetYaxis()->SetLabelFont(42);
  Graph_Graph4->GetYaxis()->SetLabelOffset(0.01);
  Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
  Graph_Graph4->GetYaxis()->SetTitleSize(0.06);
  Graph_Graph4->GetYaxis()->SetTickLength(0.02);
  Graph_Graph4->GetYaxis()->SetTitleFont(42);
  Graph_Graph4->GetZaxis()->SetLabelFont(42);
  Graph_Graph4->GetZaxis()->SetLabelOffset(0.01);
  Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
  Graph_Graph4->GetZaxis()->SetTitleSize(0.06);
  Graph_Graph4->GetZaxis()->SetTitleFont(42);
  gre->SetHistogram(Graph_Graph4);
   
  gre->Draw("pz");
  
  
   /////////////////////////////////////////////////////////////////////////////////////////
  //
  
   /////////////////////////////////////////////////////////////////////////////////////////
  //
  // Draw legend
  //
  TLegend *leg = new TLegend(0.8,0.51,0.92,0.86,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.045);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);

  TLegendEntry *entry=leg->AddEntry("Graph_Graph5"," #Omega^{-}","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  ci = TColor::GetColor("#000000");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(28);
  entry->SetMarkerSize(2.0);

  entry=leg->AddEntry("Graph_Graph4"," #Xi*^{0}","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  ci = TColor::GetColor("#0000ff");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(21);
  entry->SetMarkerSize(1.4);
 
  entry=leg->AddEntry("Graph_Graph2"," #Sigma*^{#pm}","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  ci = TColor::GetColor("#ff0000");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(20);
  entry->SetMarkerSize(1.4);

  entry=leg->AddEntry("Graph_Graph3"," #Xi^{-}","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  ci = TColor::GetColor("#000000");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(25);
  entry->SetMarkerSize(1.4);

  entry=leg->AddEntry("Graph_Graph1"," #Lambda","p");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  ci = TColor::GetColor("#000000");
  entry->SetMarkerColor(ci);
  entry->SetMarkerStyle(4);
  entry->SetMarkerSize(1.4);

  leg->Draw();
   
  /////////////////////////////////////////////////////////////////////////

  TPaveText *pt = new TPaveText(0.2,0.88,0.6,0.93,"brNDC");
  pt->SetBorderSize(0);
  pt->SetFillColor(0);
  pt->SetFillStyle(0);
  pt->SetTextAlign(12);
  pt->SetTextFont(42);
  pt->SetTextSize(0.04);
  TText *text = pt->AddText("ALICE, p-Pb  #sqrt{#it{s}_{NN}} = 5.02 TeV");
  pt->Draw();
   
  /////////////////////////////////////////////////////////////////////////

  leg = new TLegend(0.22,0.24,0.7,0.3,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.04);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(2);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);
  entry=leg->AddEntry("NULL","Uncertainties: stat.(bars), sys.(boxes)","");
  entry->SetLineColor(1);
  entry->SetLineStyle(1);
  entry->SetLineWidth(1);
  entry->SetMarkerColor(1);
  entry->SetMarkerStyle(21);
  entry->SetMarkerSize(1);
  leg->Draw();

  /////////////////////////////////////////////////////////////////////////

  p2->Modified();
  c->cd();
  c->Modified();
  c->cd();
  c->SetSelected(c);

  c->SaveAs("PAPER_FIGURE5.pdf");
  c->SaveAs("PAPER_FIGURE5.eps");

}
