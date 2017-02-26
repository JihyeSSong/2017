{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 24 10:50:52 2015) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   c1->Range(-1,-1205.102,9,10845.92);
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
    c1->SetLeftMargin(0.09);

    
    c1->SetLogy();
   Double_t xAxis1[12] = {0, 0.8, 1.4, 1.8, 2.2, 2.6, 3, 3.4, 3.8, 4.8, 5.8, 8}; 
   
   TH1D *RawYields = new TH1D("RawYields","",11, xAxis1);
   RawYields->SetBinContent(2,3447.841);
   RawYields->SetBinContent(3,6558.063);
   RawYields->SetBinContent(4,8869.028);
   RawYields->SetBinContent(5,9114.708);
   RawYields->SetBinContent(6,7563.863);
   RawYields->SetBinContent(7,5279.269);
   RawYields->SetBinContent(8,3573.946);
   RawYields->SetBinContent(9,4544.402);
   RawYields->SetBinContent(10,1359.222);
   RawYields->SetBinContent(11,505.9054);
   RawYields->SetBinError(2,66.87111);
   RawYields->SetBinError(3,76.11921);
   RawYields->SetBinError(4,70.5379);
   RawYields->SetBinError(5,67.02088);
   RawYields->SetBinError(6,64.35395);
   RawYields->SetBinError(7,51.01112);
   RawYields->SetBinError(8,40.69277);
   RawYields->SetBinError(9,45.59627);
   RawYields->SetBinError(10,20.44969);
   RawYields->SetBinError(11,12.10514);
    RawYields->SetMinimum(11.);
    RawYields->SetMaximum(200000.);

   RawYields->SetEntries(10);
   
   TPaveStats *ptstats = new TPaveStats(0.9468391,0.7230444,0.9798851,0.9365751,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetLineColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextColor(0);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("RawYields");
   text->SetTextSize(0.04911205);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  =  2.658");
   text = ptstats->AddText("RMS   =  1.049");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   RawYields->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(RawYields);
   RawYields->SetLineWidth(2);
    RawYields->SetLineColor(1);
    RawYields->SetMarkerStyle(24);
   RawYields->GetXaxis()->SetLabelFont(42);
   RawYields->GetXaxis()->SetLabelSize(0.05);
   RawYields->GetXaxis()->SetTitleSize(0.05);
   RawYields->GetXaxis()->SetTitleFont(42);
    RawYields->GetXaxis()->SetTitle("#it{p}_{T} (GeV/#it{c})");
    RawYields->GetYaxis()->SetTitle("d#it{N}_{raw}/d#it{p}_{T}");
    RawYields->GetYaxis()->SetTitleOffset(0.8);
   RawYields->GetYaxis()->SetLabelFont(42);
   RawYields->GetYaxis()->SetLabelSize(0.05);
   RawYields->GetYaxis()->SetTitleSize(0.05);


   RawYields->GetYaxis()->SetTitleFont(42);
   RawYields->GetZaxis()->SetLabelFont(42);
   RawYields->GetZaxis()->SetLabelSize(0.05);
   RawYields->GetZaxis()->SetTitleSize(0.05);
   RawYields->GetZaxis()->SetTitleFont(42);
   RawYields->Draw("");
   Double_t xAxis2[12] = {0, 0.8, 1.4, 1.8, 2.2, 2.6, 3, 3.4, 3.8, 4.8, 5.8, 8}; 
   
   TH1D *RawYields1 = new TH1D("RawYields1","",11, xAxis2);
   RawYields1->SetBinContent(2,1304.935);
   RawYields1->SetBinContent(3,2598.266);
   RawYields1->SetBinContent(4,3947.167);
   RawYields1->SetBinContent(5,4277.962);
   RawYields1->SetBinContent(6,3690.068);
   RawYields1->SetBinContent(7,2574.581);
   RawYields1->SetBinContent(8,1774.399);
   RawYields1->SetBinContent(9,2234.773);
   RawYields1->SetBinContent(10,670.884);
   RawYields1->SetBinContent(11,193.0882);
   RawYields1->SetBinError(2,37.77265);
   RawYields1->SetBinError(3,46.5251);
   RawYields1->SetBinError(4,53.27071);
   RawYields1->SetBinError(5,51.0113);
   RawYields1->SetBinError(6,43.59113);
   RawYields1->SetBinError(7,34.87676);
   RawYields1->SetBinError(8,31.01448);
   RawYields1->SetBinError(9,30.47403);
   RawYields1->SetBinError(10,14.88743);
   RawYields1->SetBinError(11,8.215484);
   RawYields1->SetEntries(10);
   RawYields1->SetLineColor(2);
   RawYields1->SetLineWidth(2);
    RawYields1->SetMarkerStyle(20);
    RawYields1->SetMarkerColor(2);

   RawYields1->GetXaxis()->SetLabelFont(42);
   RawYields1->GetXaxis()->SetLabelSize(0.035);
   RawYields1->GetXaxis()->SetTitleSize(0.035);
   RawYields1->GetXaxis()->SetTitleFont(42);
   RawYields1->GetYaxis()->SetLabelFont(42);
   RawYields1->GetYaxis()->SetLabelSize(0.035);
   RawYields1->GetYaxis()->SetTitleSize(0.035);
   RawYields1->GetYaxis()->SetTitleFont(42);
   RawYields1->GetZaxis()->SetLabelFont(42);
   RawYields1->GetZaxis()->SetLabelSize(0.035);
   RawYields1->GetZaxis()->SetTitleSize(0.035);
   RawYields1->GetZaxis()->SetTitleFont(42);
   RawYields1->Draw("same");
   Double_t xAxis3[12] = {0, 0.8, 1.4, 1.8, 2.2, 2.6, 3, 3.4, 3.8, 4.8, 5.8, 8}; 
   
   TH1D *RawYields2 = new TH1D("RawYields2","",11, xAxis3);
   RawYields2->SetBinContent(2,1062.163);
   RawYields2->SetBinContent(3,1925.948);
   RawYields2->SetBinContent(4,2412.107);
   RawYields2->SetBinContent(5,2467.693);
   RawYields2->SetBinContent(6,2053.317);
   RawYields2->SetBinContent(7,1432.135);
   RawYields2->SetBinContent(8,1004.781);
   RawYields2->SetBinContent(9,1219.023);
   RawYields2->SetBinContent(10,323.2916);
   RawYields2->SetBinContent(11,164.943);
   RawYields2->SetBinError(2,26.12144);
   RawYields2->SetBinError(3,32.69808);
   RawYields2->SetBinError(4,35.08568);
   RawYields2->SetBinError(5,33.33423);
   RawYields2->SetBinError(6,28.17154);
   RawYields2->SetBinError(7,24.31646);
   RawYields2->SetBinError(8,17.82325);
   RawYields2->SetBinError(9,20.56016);
   RawYields2->SetBinError(10,10.49881);
   RawYields2->SetBinError(11,5.702421);
   RawYields2->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   RawYields2->SetLineColor(ci);
   RawYields2->SetLineWidth(2);
    RawYields2->SetMarkerStyle(21);
    RawYields2->SetMarkerColor(ci);

   RawYields2->GetXaxis()->SetLabelFont(42);
   RawYields2->GetXaxis()->SetLabelSize(0.035);
   RawYields2->GetXaxis()->SetTitleSize(0.035);
   RawYields2->GetXaxis()->SetTitleFont(42);
   RawYields2->GetYaxis()->SetLabelFont(42);
   RawYields2->GetYaxis()->SetLabelSize(0.035);
   RawYields2->GetYaxis()->SetTitleSize(0.035);
   RawYields2->GetYaxis()->SetTitleFont(42);
   RawYields2->GetZaxis()->SetLabelFont(42);
   RawYields2->GetZaxis()->SetLabelSize(0.035);
   RawYields2->GetZaxis()->SetTitleSize(0.035);
   RawYields2->GetZaxis()->SetTitleFont(42);
   RawYields2->Draw("same");
   Double_t xAxis4[12] = {0, 0.8, 1.4, 1.8, 2.2, 2.6, 3, 3.4, 3.8, 4.8, 5.8, 8}; 
   
   TH1D *RawYields3 = new TH1D("RawYields3","",11, xAxis4);
   RawYields3->SetBinContent(2,656.7336);
   RawYields3->SetBinContent(3,1139.514);
   RawYields3->SetBinContent(4,1511.873);
   RawYields3->SetBinContent(5,1447.37);
   RawYields3->SetBinContent(6,1088.913);
   RawYields3->SetBinContent(7,859.8428);
   RawYields3->SetBinContent(8,474.7622);
   RawYields3->SetBinContent(9,684.3505);
   RawYields3->SetBinContent(10,278.1565);
   RawYields3->SetBinContent(11,105.3013);
   RawYields3->SetBinError(2,19.02535);
   RawYields3->SetBinError(3,23.35732);
   RawYields3->SetBinError(4,24.80852);
   RawYields3->SetBinError(5,26.04648);
   RawYields3->SetBinError(6,18.39949);
   RawYields3->SetBinError(7,17.66487);
   RawYields3->SetBinError(8,11.9828);
   RawYields3->SetBinError(9,13.33423);
   RawYields3->SetBinError(10,7.025743);
   RawYields3->SetBinError(11,4.069638);
   RawYields3->SetEntries(10);

   ci = TColor::GetColor("#009900");
   RawYields3->SetLineColor(ci);
   RawYields3->SetLineWidth(2);
   RawYields3->GetXaxis()->SetLabelFont(42);
    RawYields3->SetMarkerStyle(22);
    RawYields3->SetMarkerColor(ci);
    RawYields3->SetMarkerSize(1.3);


   RawYields3->GetXaxis()->SetLabelSize(0.035);
   RawYields3->GetXaxis()->SetTitleSize(0.035);
   RawYields3->GetXaxis()->SetTitleFont(42);
   RawYields3->GetYaxis()->SetLabelFont(42);
   RawYields3->GetYaxis()->SetLabelSize(0.035);
   RawYields3->GetYaxis()->SetTitleSize(0.035);
   RawYields3->GetYaxis()->SetTitleFont(42);
   RawYields3->GetZaxis()->SetLabelFont(42);
   RawYields3->GetZaxis()->SetLabelSize(0.035);
   RawYields3->GetZaxis()->SetTitleSize(0.035);
   RawYields3->GetZaxis()->SetTitleFont(42);
   RawYields3->Draw("same");
   Double_t xAxis5[12] = {0, 0.8, 1.4, 1.8, 2.2, 2.6, 3, 3.4, 3.8, 4.8, 5.8, 8}; 
   
   TH1D *RawYields4 = new TH1D("RawYields4","",11, xAxis5);
   RawYields4->SetBinContent(2,438.845);
   RawYields4->SetBinContent(3,807.8375);
   RawYields4->SetBinContent(4,998.8073);
   RawYields4->SetBinContent(5,886.6987);
   RawYields4->SetBinContent(6,683.1398);
   RawYields4->SetBinContent(7,421.4221);
   RawYields4->SetBinContent(8,293.3473);
   RawYields4->SetBinContent(9,326.4674);
   RawYields4->SetBinContent(10,95.05962);
   RawYields4->SetBinContent(11,41.26207);
   RawYields4->SetBinError(2,13.26382);
   RawYields4->SetBinError(3,16.85749);
   RawYields4->SetBinError(4,18.73229);
   RawYields4->SetBinError(5,16.84202);
   RawYields4->SetBinError(6,13.96127);
   RawYields4->SetBinError(7,9.816077);
   RawYields4->SetBinError(8,7.909343);
   RawYields4->SetBinError(9,8.327112);
   RawYields4->SetBinError(10,4.267138);
   RawYields4->SetBinError(11,2.617624);
   RawYields4->SetEntries(10);
   RawYields4->SetLineColor(4);
   RawYields4->SetLineWidth(2);
    RawYields4->SetMarkerStyle(23);
    RawYields4->SetMarkerColor(4);
    RawYields4->SetMarkerSize(1.3);

   RawYields4->GetXaxis()->SetLabelFont(42);
   RawYields4->GetXaxis()->SetLabelSize(0.035);
   RawYields4->GetXaxis()->SetTitleSize(0.035);
   RawYields4->GetXaxis()->SetTitleFont(42);
   RawYields4->GetYaxis()->SetLabelFont(42);
   RawYields4->GetYaxis()->SetLabelSize(0.035);
   RawYields4->GetYaxis()->SetTitleSize(0.035);
   RawYields4->GetYaxis()->SetTitleFont(42);
   RawYields4->GetZaxis()->SetLabelFont(42);
   RawYields4->GetZaxis()->SetLabelSize(0.035);
   RawYields4->GetZaxis()->SetTitleSize(0.035);
   RawYields4->GetZaxis()->SetTitleFont(42);
   RawYields4->Draw("same");
    
    
    
    TLegend *leg = new TLegend(0.65,0.55,0.85,0.85,NULL,"brNDC");
    leg->SetBorderSize(1);
    leg->SetTextSize(0.045);
    leg->SetLineColor(0);
    leg->SetLineStyle(1);
    leg->SetLineWidth(1);
    leg->SetFillColor(0);
    leg->SetFillStyle(1001);
    
    TLegendEntry *entry=leg->AddEntry("RawYields","MB","lp");
    
    entry->SetLineColor(1);
    entry->SetLineStyle(1);
    entry->SetLineWidth(2);
    entry->SetMarkerColor(1);
    entry->SetMarkerStyle(24);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    
    entry=leg->AddEntry("RawYields1","0-20%","lp");
    entry->SetLineColor(2);
    entry->SetLineStyle(1);
    entry->SetLineWidth(2);
    entry->SetMarkerColor(1);
    entry->SetMarkerStyle(21);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("RawYields2","20-40%","lp");
    entry->SetLineColor(kOrange-3);
    entry->SetLineStyle(1);
    entry->SetLineWidth(2);
    entry->SetMarkerColor(kOrange-3);
    entry->SetMarkerStyle(21);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("RawYields3","40-60%","lp");
    entry->SetLineColor(kGreen+2);
    entry->SetLineStyle(1);
    entry->SetLineWidth(2);
    entry->SetMarkerColor(kGreen+2);
    entry->SetMarkerStyle(21);
    entry->SetMarkerSize(1.3);
    entry->SetTextFont(42);
    entry=leg->AddEntry("RawYields4","60-100%","lp");
    entry->SetLineColor(4);
    entry->SetLineStyle(1);
    entry->SetLineWidth(2);
    entry->SetMarkerColor(4);
    entry->SetMarkerStyle(21);
    entry->SetMarkerSize(1.3);
    entry->SetTextFont(42);
    leg->Draw();
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
  
    
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
