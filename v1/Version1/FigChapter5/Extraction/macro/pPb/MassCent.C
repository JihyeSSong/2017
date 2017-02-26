{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 24 10:34:07 2015) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",116,45,700,500);
   c1->Range(-1,1.5265,9.8,1.5415);
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

    
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,1.1,1.531622);
   gre->SetPointError(0,0.3,0.0004610807);
   gre->SetPoint(1,1.6,1.532033);
   gre->SetPointError(1,0.2,0.0002932943);
   gre->SetPoint(2,2,1.532284);
   gre->SetPointError(2,0.2,0.0002355189);
   gre->SetPoint(3,2.4,1.532441);
   gre->SetPointError(3,0.2,0.0002276448);
   gre->SetPoint(4,2.8,1.532858);
   gre->SetPointError(4,0.2,0.0002191259);
   gre->SetPoint(5,3.2,1.533058);
   gre->SetPointError(5,0.2,0.000230091);
   gre->SetPoint(6,3.6,1.533294);
   gre->SetPointError(6,0.2,0.0002965011);
   gre->SetPoint(7,4.3,1.533405);
   gre->SetPointError(7,0.5,0.0002984759);
   gre->SetPoint(8,5.3,1.533059);
   gre->SetPointError(8,0.5,0.0004801994);
   gre->SetPoint(9,6.9,1.533575);
   gre->SetPointError(9,1.1,0.0006616327);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.08,8.72);
   Graph_Graph1->SetMinimum(1.529);
   Graph_Graph1->SetMaximum(1.543);
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
   
   gre->Draw("AP");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph1");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.1,1.530945);
   gre->SetPointError(0,0.3,0.0008856093);
   gre->SetPoint(1,1.6,1.531961);
   gre->SetPointError(1,0.2,0.0004463017);
   gre->SetPoint(2,2,1.53189);
   gre->SetPointError(2,0.2,0.0004051915);
   gre->SetPoint(3,2.4,1.53236);
   gre->SetPointError(3,0.2,0.000371669);
   gre->SetPoint(4,2.8,1.532677);
   gre->SetPointError(4,0.2,0.0003517187);
   gre->SetPoint(5,3.2,1.533466);
   gre->SetPointError(5,0.2,0.000383412);
   gre->SetPoint(6,3.6,1.533093);
   gre->SetPointError(6,0.2,0.0004325665);
   gre->SetPoint(7,4.3,1.533504);
   gre->SetPointError(7,0.5,0.0004813453);
   gre->SetPoint(8,5.3,1.532916);
   gre->SetPointError(8,0.5,0.0007373927);
   gre->SetPoint(9,6.898276,1.533371);
   gre->SetPointError(9,1.1,0.00109577);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.08,8.72);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph2");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.1,1.53179);
   gre->SetPointError(0,0.3,0.0007526496);
   gre->SetPoint(1,1.6,1.531897);
   gre->SetPointError(1,0.2,0.0005631219);
   gre->SetPoint(2,2,1.532407);
   gre->SetPointError(2,0.2,0.0004323219);
   gre->SetPoint(3,2.4,1.532309);
   gre->SetPointError(3,0.2,0.0004274863);
   gre->SetPoint(4,2.8,1.533404);
   gre->SetPointError(4,0.2,0.0004014109);
   gre->SetPoint(5,3.2,1.532741);
   gre->SetPointError(5,0.2,0.0003926469);
   gre->SetPoint(6,3.593103,1.53433);
   gre->SetPointError(6,0.2,0.000586222);
   gre->SetPoint(7,4.3,1.533065);
   gre->SetPointError(7,0.5,0.0004442729);
   gre->SetPoint(8,5.3,1.532542);
   gre->SetPointError(8,0.5,0.0008096486);
   gre->SetPoint(9,6.898276,1.534126);
   gre->SetPointError(9,1.1,0.001153016);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0.08,8.72);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph3");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(22);
    gre->SetMarkerSize(1.8);

   gre->SetPoint(0,1.1,1.532448);
   gre->SetPointError(0,0.3,0.0009512618);
   gre->SetPoint(1,1.6,1.532122);
   gre->SetPointError(1,0.2,0.000604691);
   gre->SetPoint(2,2,1.53248);
   gre->SetPointError(2,0.2,0.0004917009);
   gre->SetPoint(3,2.4,1.53273);
   gre->SetPointError(3,0.2,0.000487004);
   gre->SetPoint(4,2.8,1.53272);
   gre->SetPointError(4,0.2,0.0004179391);
   gre->SetPoint(5,3.2,1.532486);
   gre->SetPointError(5,0.2,0.0004718649);
   gre->SetPoint(6,3.593103,1.532266);
   gre->SetPointError(6,0.2,0.0005801491);
   gre->SetPoint(7,4.3,1.533391);
   gre->SetPointError(7,0.5,0.0006832096);
   gre->SetPoint(8,5.3,1.534848);
   gre->SetPointError(8,0.5,0.0009743217);
   gre->SetPoint(9,6.9,1.533618);
   gre->SetPointError(9,1.1,0.001785865);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,0.08,8.72);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph4");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(23);
    gre->SetMarkerSize(1.8);

   gre->SetPoint(0,1.1,1.532024);
   gre->SetPointError(0,0.3,0.0007111499);
   gre->SetPoint(1,1.6,1.533277);
   gre->SetPointError(1,0.2,0.0006098743);
   gre->SetPoint(2,2,1.533165);
   gre->SetPointError(2,0.2,0.0005089359);
   gre->SetPoint(3,2.4,1.532691);
   gre->SetPointError(3,0.2,0.0004625652);
   gre->SetPoint(4,2.8,1.53242);
   gre->SetPointError(4,0.2,0.0005371856);
   gre->SetPoint(5,3.2,1.533078);
   gre->SetPointError(5,0.2,0.0005761977);
   gre->SetPoint(6,3.6,1.534006);
   gre->SetPointError(6,0.2,0.0008373587);
   gre->SetPoint(7,4.291379,1.532571);
   gre->SetPointError(7,0.5,0.001098086);
   gre->SetPoint(8,5.3,1.532339);
   gre->SetPointError(8,0.5,0.001499261);
   gre->SetPoint(9,6.9,1.533992);
   gre->SetPointError(9,1.1,0.001119487);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,0.08,8.72);
   Graph_Graph5->SetMinimum(1.529);
   Graph_Graph5->SetMaximum(1.5345);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetTitle("Mass (GeV/c^{2})");
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph5);
   
   gre->Draw("P");
    TLegend *leg = new TLegend(0.612069,0.55,0.8936782,0.8942918,NULL,"brNDC");
    leg->SetBorderSize(1);
    leg->SetTextSize(0.045);
    leg->SetLineColor(0);
    leg->SetLineStyle(1);
    leg->SetLineWidth(1);
    leg->SetFillColor(0);
    leg->SetFillStyle(1001);

    
    TLegendEntry *entry=leg->AddEntry("","0-100%","lp");
    entry->SetLineColor(1);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(1);
    entry->SetMarkerStyle(24);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    
    entry=leg->AddEntry("","0-20%","lp");
    entry->SetLineColor(2);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(2);
    entry->SetMarkerStyle(20);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("","20-40%","lp");
    
    ci = TColor::GetColor("#ff9900");
    entry->SetLineColor(ci);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    
    ci = TColor::GetColor("#ff9900");
    entry->SetMarkerColor(ci);
    entry->SetMarkerStyle(21);
    entry->SetMarkerSize(1);
    entry->SetTextFont(42);
    entry=leg->AddEntry("","40-60%","lp");
    
    ci = TColor::GetColor("#009900");
    entry->SetLineColor(ci);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    
    ci = TColor::GetColor("#009900");
    entry->SetMarkerColor(ci);
    entry->SetMarkerStyle(22);
    entry->SetMarkerSize(1.8);
    entry->SetTextFont(42);
    
    
    entry=leg->AddEntry("","60-100%","lp");
    entry->SetLineColor(4);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    entry->SetMarkerColor(4);
    entry->SetMarkerStyle(23);
    entry->SetMarkerSize(1.8);
    entry->SetTextFont(42);
    leg->Draw();
    tex = new TLatex(0.18,0.8,"ALICE, p-Pb, #sqrt{s_{NN}} = 5.02 TeV");
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();
    tex = new TLatex(0.18,0.73,"-0.5 < #it{y}_{CMS} < 0");
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
