{
    //=========Macro generated from canvas: c/
    //=========  (Mon Jan 18 14:08:41 2016) by ROOT version5.34/30
    TCanvas *c = new TCanvas("c", "",74,45,800,600);
    gStyle->SetOptStat(0);
    gStyle->SetOptTitle(0);
    gStyle->SetHatchesSpacing(0.7);
    gStyle->SetHatchesLineWidth(1.9);
    gStyle->SetLineWidth(2);

   c->Range(0,0,1,1);
    c->SetFillColor(0);
    c->SetBorderMode(0);
    c->SetBorderSize(2);
    c->SetFrameBorderMode(0);
    TGaxis::SetMaxDigits(3);
    
    
    // ------------>Primitives in pad: p2
    TPad *p2 = new TPad("p2", "",0,0,1,1);
    p2->Draw();
    p2->cd();
    p2->Range(-6.768292,-0.000935065,52.9878,0.00425974);
    p2->SetFillColor(0);
    p2->SetBorderMode(0);
    p2->SetBorderSize(2);
    p2->SetTickx(1);
    p2->SetTicky(1);
    p2->SetLeftMargin(0.15);
    p2->SetRightMargin(0.05);
    p2->SetTopMargin(0.08);
    p2->SetBottomMargin(0.17);
    p2->SetFrameBorderMode(0);
    p2->SetFrameBorderMode(0);
    
    double ppresults = 0.0011;
  

    
    TH1F *frame = new TH1F("frame","",1,1,49);
    frame->SetMinimum(0);
    frame->SetMaximum(2.5);
    frame->SetStats(0);
    
    Int_t ci;      // for color index setting
    TColor *color; // for color definition with alpha
    ci = TColor::GetColor("#000099");
    frame->SetLineColor(ci);
    frame->GetXaxis()->SetTitle("#LTd#it{N}_{ch}/d#it{#eta}_{lab}#GT_{|#it{#eta_{lab}}| < 0.5}");
    frame->GetXaxis()->SetNdivisions(508);
    frame->GetXaxis()->SetLabelFont(42);
    frame->GetXaxis()->SetLabelOffset(0.01);
    frame->GetXaxis()->SetLabelSize(0.06);
    frame->GetXaxis()->SetTitleSize(0.06);
    frame->GetXaxis()->SetTickLength(0.02);
  frame->GetXaxis()->SetTitleOffset(1.25);
    frame->GetXaxis()->SetTitleFont(42);
    frame->GetYaxis()->SetTitle("(h/#pi)_{pPb}/(h/#pi)_{pp}");
    frame->GetYaxis()->SetNdivisions(508);
    frame->GetYaxis()->SetLabelFont(42);
    frame->GetYaxis()->SetLabelOffset(0.01);
    frame->GetYaxis()->SetLabelSize(0.06);
    frame->GetYaxis()->SetTitleSize(0.06);
     frame->GetYaxis()->SetTickLength(0.02);
   frame->GetYaxis()->SetTitleOffset(1.0);
    frame->GetYaxis()->SetTitleFont(42);
    frame->GetZaxis()->SetLabelFont(42);
    frame->GetZaxis()->SetLabelOffset(0.01);
    frame->GetZaxis()->SetLabelSize(0.05);
    frame->GetZaxis()->SetTitleSize(0.06);
    frame->GetZaxis()->SetTitleFont(42);
    frame->Draw("");
    
    double factor1 = 0.5;
    
    double syserror1 = sqrt((0.000190195*factor1/0.00167996)*(0.000190195*factor1/0.00167996)+(2.2e-04/ppresults)*(2.2e-04/ppresults))*0.00167996/ppresults;
    
    double syserror2 = sqrt((0.0002333*factor1/0.00162774)*(0.0002333*factor1/0.00162774)+(2.2e-04/ppresults)*(2.2e-04/ppresults))*0.00162774/ppresults;
    
    double syserror3 = sqrt((0.000219097*factor1/0.00139961)*(0.000219097*factor1/0.00139961)+(2.2e-04/ppresults)*(2.2e-04/ppresults))*0.00139961/ppresults;
    
    double syserror4 = sqrt((0.000153054*factor1/0.00104581)*(0.000153054*factor1/0.00104581)+(2.2e-04/ppresults)*(2.2e-04/ppresults))*0.00104581/ppresults;
    
    
    TBox *box = new TBox(34.8,0.00167996/ppresults-0.000190195*factor1/ppresults,36.4,0.00167996/ppresults+0.000190195*factor1/ppresults);
    
    ci = TColor::GetColor("#99ccff");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    box->SetLineColor(4);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(22.7,0.00162774/ppresults-0.0002333*factor1/ppresults,23.7,0.00162774/ppresults+0.0002333*factor1/ppresults);
    
    ci = TColor::GetColor("#99ccff");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    box->SetLineColor(4);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(15.7,0.00139961/ppresults-0.000219097*factor1/ppresults,16.5,0.00139961/ppresults+0.000219097*factor1/ppresults);
    
    ci = TColor::GetColor("#99ccff");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    box->SetLineColor(4);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(6.9,0.00104581/ppresults-0.000153054*factor1/ppresults,7.3,0.00104581/ppresults+0.000153054*factor1/ppresults);
    
    ci = TColor::GetColor("#99ccff");
    box->SetFillColor(ci);
    box->SetFillStyle(0);
    box->SetLineColor(4);
    box->SetLineWidth(2);
    box->Draw();
    
    double staterror1 = sqrt((3.69291e-05/0.00167996)*(3.69291e-05/0.00167996)+(3e-05/ppresults)*(3e-05/ppresults))*0.00167996/ppresults;
    
       double staterror2 = sqrt((4.59841e-05/0.00162774)*(4.59841e-05/0.00162774)+(3e-05/ppresults)*(3e-05/ppresults))*0.00162774/ppresults;
    
       double staterror3 = sqrt((3.92449e-05/0.00139961)*(3.92449e-05/0.00139961)+(3e-05/ppresults)*(3e-05/ppresults))*0.00139961/ppresults;
    
       double staterror4 = sqrt((2.90549e-05/0.00104581)*(2.90549e-05/0.00104581)+(3e-05/ppresults)*(3e-05/ppresults))*0.00104581/ppresults;
    
    TGraphErrors *gre = new TGraphErrors(4);
    gre->SetName("GraphXiStarpPb");
    gre->SetTitle("GraphXiStarpPb");
    gre->SetFillColor(1);
    gre->SetLineColor(4);
    gre->SetLineWidth(2);
    gre->SetMarkerColor(4);
    gre->SetMarkerStyle(20);
    gre->SetMarkerSize(1.52);
    gre->SetPoint(0,35.6,0.00167996/ppresults);
    gre->SetPointError(0,0.8,3.69291e-05/ppresults);
    gre->SetPoint(1,23.2,0.00162774/ppresults);
    gre->SetPointError(1,0.5,4.59841e-05/ppresults);
    gre->SetPoint(2,16.1,0.00139961/ppresults);
    gre->SetPointError(2,0.4,3.92449e-05/ppresults);
    gre->SetPoint(3,7.1,0.00104581/ppresults);
    gre->SetPointError(3,0.2,2.90549e-05/ppresults);
    
 
    
    TH1F *GraphXiStarpPb = new TH1F("GraphXiStarpPb","GraphXiStarpPb",100,1.435105,3.589767);
    GraphXiStarpPb->SetDirectory(0);
    GraphXiStarpPb->SetStats(0);
    GraphXiStarpPb->SetLineColor(4);
    GraphXiStarpPb->GetXaxis()->SetLabelFont(42);
    GraphXiStarpPb->GetXaxis()->SetLabelOffset(0.01);
    GraphXiStarpPb->GetXaxis()->SetLabelSize(0.05);
    GraphXiStarpPb->GetXaxis()->SetTitleSize(0.06);
    GraphXiStarpPb->GetXaxis()->SetTitleFont(42);
    GraphXiStarpPb->GetYaxis()->SetLabelFont(42);
    GraphXiStarpPb->GetYaxis()->SetLabelOffset(0.01);
    GraphXiStarpPb->GetYaxis()->SetLabelSize(0.05);
    GraphXiStarpPb->GetYaxis()->SetTitleSize(0.06);
    GraphXiStarpPb->GetYaxis()->SetTickLength(0.02);
    GraphXiStarpPb->GetYaxis()->SetTitleFont(42);
    GraphXiStarpPb->GetZaxis()->SetLabelFont(42);
    GraphXiStarpPb->GetZaxis()->SetLabelOffset(0.01);
    GraphXiStarpPb->GetZaxis()->SetLabelSize(0.05);
    GraphXiStarpPb->GetZaxis()->SetTitleSize(0.06);
    GraphXiStarpPb->GetZaxis()->SetTitleFont(42);
    gre->SetHistogram(GraphXiStarpPb);
    
    gre->Draw("pz");
   /* box = new TBox(4.6-0.34,0.00099,4.6+0.34,0.00121);
    box->SetFillColor(4);
    box->SetFillStyle(0);
    box->SetLineColor(4);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(4.6-0.34,0.00099,4.6+0.34,0.00121);
    box->SetFillColor(4);
    box->SetFillStyle(3356);
    box->SetLineColor(4);
    box->SetLineWidth(2);
    box->Draw();
    
    gre = new TGraphErrors(1);
    gre->SetName("XiStarpp");
    gre->SetTitle("XiStarpp");
    gre->SetFillColor(1);
    gre->SetLineWidth(2);
    gre->SetMarkerColor(4);
    gre->SetMarkerStyle(25);
    gre->SetMarkerSize(1.5);
    gre->SetPoint(0,4.6,0.0011);
    gre->SetPointError(0,0.2,3e-05);
    
    TH1F *GraphXiStarpp = new TH1F("GraphXiStarpp","XiStarpp",100,1.71813,2.91813);
    GraphXiStarpp->SetDirectory(0);
    GraphXiStarpp->SetStats(0);
    
    ci = TColor::GetColor("#000099");
    GraphXiStarpp->SetLineColor(ci);
    GraphXiStarpp->GetXaxis()->SetLabelFont(42);
    GraphXiStarpp->GetXaxis()->SetLabelOffset(0.01);
    GraphXiStarpp->GetXaxis()->SetLabelSize(0.05);
    GraphXiStarpp->GetXaxis()->SetTitleSize(0.06);
    GraphXiStarpp->GetXaxis()->SetTitleFont(42);
    GraphXiStarpp->GetYaxis()->SetLabelFont(42);
    GraphXiStarpp->GetYaxis()->SetLabelOffset(0.01);
    GraphXiStarpp->GetYaxis()->SetLabelSize(0.05);
    GraphXiStarpp->GetYaxis()->SetTitleSize(0.06);
    GraphXiStarpp->GetYaxis()->SetTickLength(0.02);
    GraphXiStarpp->GetYaxis()->SetTitleFont(42);
    GraphXiStarpp->GetZaxis()->SetLabelFont(42);
    GraphXiStarpp->GetZaxis()->SetLabelOffset(0.01);
    GraphXiStarpp->GetZaxis()->SetLabelSize(0.05);
    GraphXiStarpp->GetZaxis()->SetTitleSize(0.06);
    GraphXiStarpp->GetZaxis()->SetTitleFont(42);
   // gre->SetHistogram(GraphXiStarpp);
    
   */
    

    TLatex *   tex = new TLatex(0.2,0.85,"ALICE, p-Pb #sqrt{s_{NN}}=5.02 TeV");
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.04);
    tex->SetLineWidth(2);
    tex->Draw();
    
    
    TLegend *leg = new TLegend(0.6,0.2,0.88,0.4,NULL,"brNDC");
    leg->SetBorderSize(1);
    leg->SetTextSize(0.038);
    leg->SetLineColor(0);
    leg->SetLineStyle(1);
    leg->SetLineWidth(1);
    leg->SetFillColor(0);
    leg->SetFillStyle(1001);
    entry=leg->AddEntry("NULL","#Sigma^{#pm}(1385)","p");
    entry->SetLineColor(2);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(2);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1.5);
    entry->SetTextFont(42);
    entry=leg->AddEntry("NULL","#Xi^{0}(1530)","p");
    entry->SetLineColor(4);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(4);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1.5);
    entry->SetTextFont(42);
    leg->Draw();
    
    
    
    
    ///
    
  /*  TGraphErrors *gre = new TGraphErrors(3);
    gre->SetName("GraphSigmaStarpPb");
    gre->SetTitle("GraphSigmaStarpPb");
    gre->SetFillColor(1);
    gre->SetLineColor(4);
    gre->SetLineWidth(2);
    gre->SetMarkerColor(4);
    gre->SetMarkerStyle(20);
    gre->SetMarkerSize(1.52);
    gre->SetPoint(0,35.6,0.0056);
    gre->SetPointError(0,0.8,0.0001);
    gre->SetPoint(1,19.7,0.0056);
    gre->SetPointError(1,0.5,0.0001);
    gre->SetPoint(2,7.1,0.0044);
    gre->SetPointError(2,0.2,0.0001);
    
    
    
    TH1F *GraphSigmaStarpPb = new TH1F("GraphSigmaStarpPb","GraphSigmaStarpPb",100,1.435105,3.589767);
    GraphSigmaStarpPb->SetDirectory(0);
    GraphSigmaStarpPb->SetStats(0);
    GraphSigmaStarpPb->SetLineColor(4);
    GraphSigmaStarpPb->GetXaxis()->SetLabelFont(42);
    GraphSigmaStarpPb->GetXaxis()->SetLabelOffset(0.01);
    GraphSigmaStarpPb->GetXaxis()->SetLabelSize(0.05);
    GraphSigmaStarpPb->GetXaxis()->SetTitleSize(0.06);
    GraphSigmaStarpPb->GetXaxis()->SetTitleFont(42);
    GraphSigmaStarpPb->GetYaxis()->SetLabelFont(42);
    GraphSigmaStarpPb->GetYaxis()->SetLabelOffset(0.01);
    GraphSigmaStarpPb->GetYaxis()->SetLabelSize(0.05);
    GraphSigmaStarpPb->GetYaxis()->SetTitleSize(0.06);
    GraphSigmaStarpPb->GetYaxis()->SetTickLength(0.02);
    GraphSigmaStarpPb->GetYaxis()->SetTitleFont(42);
    GraphSigmaStarpPb->GetZaxis()->SetLabelFont(42);
    GraphSigmaStarpPb->GetZaxis()->SetLabelOffset(0.01);
    GraphSigmaStarpPb->GetZaxis()->SetLabelSize(0.05);
    GraphSigmaStarpPb->GetZaxis()->SetTitleSize(0.06);
    GraphSigmaStarpPb->GetZaxis()->SetTitleFont(42);
    gre->SetHistogram(GraphSigmaStarpPb);
    
    gre->Draw("pz");
*/
///
    
    double sigmapp = 0.0044;
      double staterror11 = sqrt((0.0001/0.0056)*(0.0001/0.0056)+(0.0001/sigmapp)*(0.0001/sigmapp))*0.0056/sigmapp;
    
      double staterror22 = sqrt((0.0001/0.0056)*(0.0001/0.0056)+(0.0001/sigmapp)*(0.0001/sigmapp))*0.0056/sigmapp;
    
      double staterror33 = sqrt((0.0001/0.0044)*(0.0001/0.0044)+(0.0001/sigmapp)*(0.0001/sigmapp))*0.0044/sigmapp;
    
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
    gre->SetPoint(0,35.6,0.0056/sigmapp);
    gre->SetPointError(0,0.8,0.0001/sigmapp);
    gre->SetPoint(1,19.7,0.0056/sigmapp);
    gre->SetPointError(1,0.5,0.0001/sigmapp);
    gre->SetPoint(2,7.1,0.0044/sigmapp);
    gre->SetPointError(2,0.2,0.0001/sigmapp);
    
  
    gre->SetHistogram(GraphXiStarpPb);
    
    gre->Draw("pz");
    
    double UncorrFactor = 0.35;

    double syserror11 = sqrt((0.0006*UncorrFactor/0.0056)*(0.0006*UncorrFactor/0.0056)+(0.0007/sigmapp)*(0.0007/sigmapp))*0.0056/sigmapp;
    
    double syserror22 = sqrt((0.0007*UncorrFactor/0.0056)*(0.0007*UncorrFactor/0.0056)+(0.0007/sigmapp)*(0.0007/sigmapp))*0.0056/sigmapp;
    
    double syserror33 = sqrt((0.0008*UncorrFactor/0.0044)*(0.0008*UncorrFactor/0.0044)+(0.0007/sigmapp)*(0.0007/sigmapp))*0.0044/sigmapp;
    
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
    gre->SetPoint(0,35.6,0.0056/sigmapp);
    gre->SetPointError(0,0.8,0.0006/sigmapp);
    gre->SetPoint(1,19.7,0.0056/sigmapp);
    gre->SetPointError(1,0.5,0.0007/sigmapp);
    gre->SetPoint(2,7.1,0.0044/sigmapp);
    gre->SetPointError(2,0.2,0.0008/sigmapp);
    
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
    gre->SetHistogram(GraphXiStarpPb);
    
    gre->Draw("pe2");

    TLine *line = new TLine(0,1,100,1);
    line->SetLineWidth(1);
    line->SetLineStyle(2);
    line->SetLineColor(1);
    line->Draw();


    
    //////////////////////////////////////////////////////////////////

    
    p2->Modified();
    c->cd();
    c->Modified();
    c->cd();
    c->SetSelected(c);
 
    c->SaveAs("PAPER_FIGURE8B.gif");
    c->SaveAs("PAPER_FIGURE8B.eps");
    c->SaveAs("PAPER_FIGURE8B.pdf");
    c->SaveAs("Ratio.C");

                       }
