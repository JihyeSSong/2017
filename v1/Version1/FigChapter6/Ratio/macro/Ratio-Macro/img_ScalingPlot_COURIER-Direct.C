{
//=========Macro generated from canvas: can/can
//=========  (Thu Aug 25 19:53:10 2016) by ROOT version5.34/30
   TCanvas *can = new TCanvas("can", "can",0,45,600,533);
   gStyle->SetOptStat(0);
   can->Range(-0.01350651,0.06408841,1.733919,2.362983);
   can->SetFillColor(0);
   can->SetBorderMode(0);
   can->SetBorderSize(2);
   can->SetLogx();
   can->SetTickx(1);
   can->SetTicky(1);
   can->SetLeftMargin(0.18);
   can->SetRightMargin(0.02);
   can->SetTopMargin(0.02739726);
   can->SetBottomMargin(0.1461187);
   can->SetFrameBorderMode(0);
   can->SetFrameBorderMode(0);
   
   TH1D *frame = new TH1D("frame","",1,2,50);
   frame->SetMinimum(0.4);
   frame->SetMaximum(2.3);
   frame->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame->SetLineColor(ci);
   frame->GetXaxis()->SetTitle("#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|< 0.5}");
   frame->GetXaxis()->SetLabelFont(42);
   frame->GetXaxis()->SetLabelOffset(-0.0125);
   frame->GetXaxis()->SetLabelSize(0.05891884);
   frame->GetXaxis()->SetTitleSize(0.06481072);
   frame->GetXaxis()->SetTickLength(0.03652968);
   frame->GetXaxis()->SetTitleOffset(1.0075);
   frame->GetXaxis()->SetTitleFont(42);
   frame->GetYaxis()->SetTitle("(h/#pi) / (h/#pi)^{pp}_{INEL}");
   frame->GetYaxis()->SetNdivisions(509);
   frame->GetYaxis()->SetLabelFont(42);
   frame->GetYaxis()->SetLabelOffset(0.01);
   frame->GetYaxis()->SetLabelSize(0.05891884);
   frame->GetYaxis()->SetTitleSize(0.06481072);
   frame->GetYaxis()->SetTitleOffset(1.305);
   frame->GetYaxis()->SetTitleFont(42);
   frame->GetZaxis()->SetLabelFont(42);
   frame->GetZaxis()->SetLabelSize(0.035);
   frame->GetZaxis()->SetTitleSize(0.035);
   frame->GetZaxis()->SetTitleFont(42);
   frame->Draw("");
   TLine *line = new TLine(2,1,50,1);
   line->SetLineStyle(3);
   line->Draw();
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = 943;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,21.294,0.9943137);
   gre->SetPointError(0,0.038,0.002278865);
   gre->SetPoint(1,16.513,1.008212);
   gre->SetPointError(1,0.01,0.001194207);
   gre->SetPoint(2,13.457,1.012887);
   gre->SetPointError(2,0,0.001094379);
   gre->SetPoint(3,11.507,1.016569);
   gre->SetPointError(3,0,0.001128083);
   gre->SetPoint(4,10.08,1.018627);
   gre->SetPointError(4,0,0.001122962);
   gre->SetPoint(5,8.447,1.017441);
   gre->SetPointError(5,0,0.0008867187);
   gre->SetPoint(6,6.724,1.016725);
   gre->SetPointError(6,0,0.0009728883);
   gre->SetPoint(7,5.398,1.004302);
   gre->SetPointError(7,0,0.001042046);
   gre->SetPoint(8,3.897,0.9782417);
   gre->SetPointError(8,0,0.0008643578);
   gre->SetPoint(9,2.261,0.8798907);
   gre->SetPointError(9,0,0.0008265787);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,0.3539,23.2391);
   Graph_Graph17->SetMinimum(0.8649955);
   Graph_Graph17->SetMaximum(1.033819);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph17->SetLineColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph17->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph17->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph17);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = 944;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,21.294,0.9943137);
   gre->SetPointError(0,0.639,0.03845798);
   gre->SetPoint(1,16.513,1.008212);
   gre->SetPointError(1,0.495,0.03587603);
   gre->SetPoint(2,13.457,1.012887);
   gre->SetPointError(2,0.404,0.03649147);
   gre->SetPoint(3,11.507,1.016569);
   gre->SetPointError(3,0.345,0.0370768);
   gre->SetPoint(4,10.08,1.018627);
   gre->SetPointError(4,0.303,0.03773211);
   gre->SetPoint(5,8.447,1.017441);
   gre->SetPointError(5,0.254,0.03779703);
   gre->SetPoint(6,6.724,1.016725);
   gre->SetPointError(6,0.207,0.03834495);
   gre->SetPoint(7,5.398,1.004302);
   gre->SetPointError(7,0.173,0.03815139);
   gre->SetPoint(8,3.897,0.9782417);
   gre->SetPointError(8,0.143,0.03748689);
   gre->SetPoint(9,2.261,0.8798907);
   gre->SetPointError(9,0.117,0.03494355);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,0.1651,23.9119);
   Graph_Graph18->SetMinimum(0.823806);
   Graph_Graph18->SetMaximum(1.077501);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph18->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph18->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph18);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,45,1.015794);
   gre->SetPointError(0,0,0.001999595);
   gre->SetPoint(1,36.2,1.018521);
   gre->SetPointError(1,0,0.002181377);
   gre->SetPoint(2,30.5,1.021975);
   gre->SetPointError(2,0,0.001817814);
   gre->SetPoint(3,23.2,1.021248);
   gre->SetPointError(3,0,0.001454251);
   gre->SetPoint(4,16.1,1.025065);
   gre->SetPointError(4,0,0.001636032);
   gre->SetPoint(5,9.8,1.026883);
   gre->SetPointError(5,0,0.001999595);
   gre->SetPoint(6,4.4,0.9725304);
   gre->SetPointError(6,0,0.002908502);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","Graph",100,0.34,49.06);
   Graph_Graph19->SetMinimum(0.9636958);
   Graph_Graph19->SetMaximum(1.034809);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph19->SetLineColor(ci);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph19->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph19->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph19->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph19);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#cc0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#cc0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,45,1.015794);
   gre->SetPointError(0,1,0.02326802);
   gre->SetPoint(1,36.2,1.018521);
   gre->SetPointError(1,0.8,0.02308623);
   gre->SetPoint(2,30.5,1.021975);
   gre->SetPointError(2,0.7,0.02290445);
   gre->SetPoint(3,23.2,1.021248);
   gre->SetPointError(3,0.5,0.02308623);
   gre->SetPoint(4,16.1,1.025065);
   gre->SetPointError(4,0.4,0.0234498);
   gre->SetPoint(5,9.8,1.026883);
   gre->SetPointError(5,0.2,0.02417692);
   gre->SetPoint(6,4.4,0.9725304);
   gre->SetPointError(6,0.1,0.02581296);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","Graph",100,0.13,50.17);
   Graph_Graph20->SetMinimum(0.9362832);
   Graph_Graph20->SetMaximum(1.061494);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph20->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph20->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph20->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph20);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = 951;
   color = new TColor(ci, 0, 0, 1, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,21.294,1.144526);
   gre->SetPointError(0,0.038,0.004328619);
   gre->SetPoint(1,16.513,1.136503);
   gre->SetPointError(1,0.01,0.002812509);
   gre->SetPoint(2,13.457,1.121123);
   gre->SetPointError(2,0.01,0.002655206);
   gre->SetPoint(3,11.507,1.106274);
   gre->SetPointError(3,0.01,0.002846888);
   gre->SetPoint(4,10.08,1.095332);
   gre->SetPointError(4,0.01,0.002879661);
   gre->SetPoint(5,8.447,1.073909);
   gre->SetPointError(5,0,0.002577164);
   gre->SetPoint(6,6.724,1.053091);
   gre->SetPointError(6,0,0.002551819);
   gre->SetPoint(7,5.398,1.013783);
   gre->SetPointError(7,0,0.003089046);
   gre->SetPoint(8,3.897,0.9358887);
   gre->SetPointError(8,0,0.00257601);
   gre->SetPoint(9,2.261,0.7134972);
   gre->SetPointError(9,0,0.002485755);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Graph",100,0.3539,23.2391);
   Graph_Graph21->SetMinimum(0.6672271);
   Graph_Graph21->SetMaximum(1.192639);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph21->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph21->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph21->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph5");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = 952;
   color = new TColor(ci, 0, 0, 1, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,21.294,1.144526);
   gre->SetPointError(0,0.639,0.04670065);
   gre->SetPoint(1,16.513,1.136503);
   gre->SetPointError(1,0.495,0.04205194);
   gre->SetPoint(2,13.457,1.121123);
   gre->SetPointError(2,0.404,0.04529185);
   gre->SetPoint(3,11.507,1.106274);
   gre->SetPointError(3,0.345,0.0496463);
   gre->SetPoint(4,10.08,1.095332);
   gre->SetPointError(4,0.303,0.04700913);
   gre->SetPoint(5,8.447,1.073909);
   gre->SetPointError(5,0.254,0.04931648);
   gre->SetPoint(6,6.724,1.053091);
   gre->SetPointError(6,0.207,0.0524284);
   gre->SetPoint(7,5.398,1.013783);
   gre->SetPointError(7,0.173,0.04069705);
   gre->SetPoint(8,3.897,0.9358887);
   gre->SetPointError(8,0.143,0.05644977);
   gre->SetPoint(9,2.261,0.7134972);
   gre->SetPointError(9,0.117,0.07668279);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,0.1651,23.9119);
   Graph_Graph22->SetMinimum(0.5813732);
   Graph_Graph22->SetMaximum(1.246668);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph22->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph22->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph22);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph6");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,45.15,1.198531);
   gre->SetPointError(0,0,0.003739666);
   gre->SetPoint(1,36.22,1.176026);
   gre->SetPointError(1,0,0.003959432);
   gre->SetPoint(2,30.46,1.164496);
   gre->SetPointError(2,0,0.003400927);
   gre->SetPoint(3,23.24,1.143682);
   gre->SetPointError(3,0,0.003005724);
   gre->SetPoint(4,16.08,1.110402);
   gre->SetPointError(4,0,0.003358582);
   gre->SetPoint(5,9.82,1.061136);
   gre->SetPointError(5,0,0.004232344);
   gre->SetPoint(6,4.41,0.9124121);
   gre->SetPointError(6,0,0.006861437);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Graph",100,0.336,49.224);
   Graph_Graph23->SetMinimum(0.8758787);
   Graph_Graph23->SetMaximum(1.231942);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph23->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph23->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph23->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph23);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph7");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,45.15,1.198531);
   gre->SetPointError(0,1,0.06081583);
   gre->SetPoint(1,36.22,1.176026);
   gre->SetPointError(1,0.8,0.05708422);
   gre->SetPoint(2,30.46,1.164496);
   gre->SetPointError(2,0.67,0.05706028);
   gre->SetPoint(3,23.24,1.143682);
   gre->SetPointError(3,0.51,0.04998735);
   gre->SetPoint(4,16.08,1.110402);
   gre->SetPointError(4,0.35,0.04726662);
   gre->SetPoint(5,9.82,1.061136);
   gre->SetPointError(5,0.21,0.05351098);
   gre->SetPoint(6,4.41,0.9124121);
   gre->SetPointError(6,0.1,0.06171306);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,0.126,50.334);
   Graph_Graph24->SetMinimum(0.8098343);
   Graph_Graph24->SetMaximum(1.300211);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph24->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph24->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph24->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph24);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(10);
   gre->SetName("gr");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = 955;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(33);
   gre->SetMarkerSize(2.5);
   gre->SetPoint(0,21.294,1.36182);
   gre->SetPointError(0,0.038,0.02264665);
   gre->SetPoint(1,16.513,1.293083);
   gre->SetPointError(1,0.01,0.01341796);
   gre->SetPoint(2,13.457,1.304803);
   gre->SetPointError(2,0,0.01374037);
   gre->SetPoint(3,11.507,1.236256);
   gre->SetPointError(3,0,0.01380174);
   gre->SetPoint(4,10.08,1.181518);
   gre->SetPointError(4,0,0.01445076);
   gre->SetPoint(5,8.447,1.14442);
   gre->SetPointError(5,0,0.0121753);
   gre->SetPoint(6,6.724,1.061994);
   gre->SetPointError(6,0,0.01255066);
   gre->SetPoint(7,5.398,0.9947729);
   gre->SetPointError(7,0,0.01491521);
   gre->SetPoint(8,3.897,0.8612063);
   gre->SetPointError(8,0,0.01248748);
   gre->SetPoint(9,2.261,0.6109683);
   gre->SetPointError(9,0,0.01256666);
   
   TH1F *Graph_gr25 = new TH1F("Graph_gr25","Graph",100,0.3539,23.2391);
   Graph_gr25->SetMinimum(0.5197952);
   Graph_gr25->SetMaximum(1.463073);
   Graph_gr25->SetDirectory(0);
   Graph_gr25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr25->SetLineColor(ci);
   Graph_gr25->GetXaxis()->SetLabelFont(42);
   Graph_gr25->GetXaxis()->SetLabelOffset(-0.012);
   Graph_gr25->GetXaxis()->SetLabelSize(0.05891884);
   Graph_gr25->GetXaxis()->SetTitleSize(0.06481072);
   Graph_gr25->GetXaxis()->SetTickLength(0.03652968);
   Graph_gr25->GetXaxis()->SetTitleOffset(1.0075);
   Graph_gr25->GetXaxis()->SetTitleFont(42);
   Graph_gr25->GetYaxis()->SetLabelFont(42);
   Graph_gr25->GetYaxis()->SetLabelOffset(0.01);
   Graph_gr25->GetYaxis()->SetLabelSize(0.05891884);
   Graph_gr25->GetYaxis()->SetTitleSize(0.06481072);
   Graph_gr25->GetYaxis()->SetTitleOffset(1.305);
   Graph_gr25->GetYaxis()->SetTitleFont(42);
   Graph_gr25->GetZaxis()->SetLabelFont(42);
   Graph_gr25->GetZaxis()->SetLabelSize(0.035);
   Graph_gr25->GetZaxis()->SetTitleSize(0.035);
   Graph_gr25->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr25);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(10);
   gre->SetName("gr");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = 956;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(33);
   gre->SetMarkerSize(2.5);
   gre->SetPoint(0,21.294,1.36182);
   gre->SetPointError(0,0.639,0.0480064);
   gre->SetPoint(1,16.513,1.293083);
   gre->SetPointError(1,0.495,0.0460401);
   gre->SetPoint(2,13.457,1.304803);
   gre->SetPointError(2,0.404,0.05230559);
   gre->SetPoint(3,11.507,1.236256);
   gre->SetPointError(3,0.345,0.05387998);
   gre->SetPoint(4,10.08,1.181518);
   gre->SetPointError(4,0.303,0.06111949);
   gre->SetPoint(5,8.447,1.14442);
   gre->SetPointError(5,0.254,0.06173533);
   gre->SetPoint(6,6.724,1.061994);
   gre->SetPointError(6,0.207,0.06539327);
   gre->SetPoint(7,5.398,0.9947729);
   gre->SetPointError(7,0.173,0.07209286);
   gre->SetPoint(8,3.897,0.8612063);
   gre->SetPointError(8,0.143,0.07964043);
   gre->SetPoint(9,2.261,0.6109683);
   gre->SetPointError(9,0.117,0.08064464);
   
   TH1F *Graph_gr26 = new TH1F("Graph_gr26","Graph",100,0.1651,23.9119);
   Graph_gr26->SetMinimum(0.4423734);
   Graph_gr26->SetMaximum(1.497776);
   Graph_gr26->SetDirectory(0);
   Graph_gr26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr26->SetLineColor(ci);
   Graph_gr26->GetXaxis()->SetLabelFont(42);
   Graph_gr26->GetXaxis()->SetLabelOffset(-0.012);
   Graph_gr26->GetXaxis()->SetLabelSize(0.05891884);
   Graph_gr26->GetXaxis()->SetTitleSize(0.06481072);
   Graph_gr26->GetXaxis()->SetTickLength(0.03652968);
   Graph_gr26->GetXaxis()->SetTitleOffset(1.0075);
   Graph_gr26->GetXaxis()->SetTitleFont(42);
   Graph_gr26->GetYaxis()->SetLabelFont(42);
   Graph_gr26->GetYaxis()->SetLabelOffset(0.01);
   Graph_gr26->GetYaxis()->SetLabelSize(0.05891884);
   Graph_gr26->GetYaxis()->SetTitleSize(0.06481072);
   Graph_gr26->GetYaxis()->SetTitleOffset(1.305);
   Graph_gr26->GetYaxis()->SetTitleFont(42);
   Graph_gr26->GetZaxis()->SetLabelFont(42);
   Graph_gr26->GetZaxis()->SetLabelSize(0.035);
   Graph_gr26->GetZaxis()->SetTitleSize(0.035);
   Graph_gr26->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr26);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph8");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(2.5);
   gre->SetPoint(0,45.15,1.634437);
   gre->SetPointError(0,0,0.01380664);
   gre->SetPoint(1,36.22,1.598517);
   gre->SetPointError(1,0,0.01338472);
   gre->SetPoint(2,30.46,1.515278);
   gre->SetPointError(2,0,0.01004333);
   gre->SetPoint(3,23.24,1.437351);
   gre->SetPointError(3,0,0.008378653);
   gre->SetPoint(4,16.08,1.34933);
   gre->SetPointError(4,0,0.01191149);
   gre->SetPoint(5,9.82,1.199197);
   gre->SetPointError(5,0,0.01276297);
   gre->SetPoint(6,4.41,0.9749779);
   gre->SetPointError(6,0,0.02376057);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Graph",100,0.336,49.224);
   Graph_Graph27->SetMinimum(0.8815148);
   Graph_Graph27->SetMaximum(1.717946);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph27->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph27->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph27);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph9");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#009900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(2.5);
   gre->SetPoint(0,45.15,1.634437);
   gre->SetPointError(0,1,0.05533158);
   gre->SetPoint(1,36.22,1.598517);
   gre->SetPointError(1,0.8,0.05238352);
   gre->SetPoint(2,30.46,1.515278);
   gre->SetPointError(2,0.67,0.04885546);
   gre->SetPoint(3,23.24,1.437351);
   gre->SetPointError(3,0.51,0.04438052);
   gre->SetPoint(4,16.08,1.34933);
   gre->SetPointError(4,0.35,0.04256179);
   gre->SetPoint(5,9.82,1.199197);
   gre->SetPointError(5,0.21,0.04188516);
   gre->SetPoint(6,4.41,0.9749779);
   gre->SetPointError(6,0.1,0.04626576);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Graph",100,0.126,50.334);
   Graph_Graph28->SetMinimum(0.8526066);
   Graph_Graph28->SetMaximum(1.765874);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph28->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph28->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph28);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(5);
   gre->SetName("gr");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = 959;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,17.47,1.655138);
   gre->SetPointError(0,0.016,0.05280702);
   gre->SetPoint(1,12.481,1.403763);
   gre->SetPointError(1,0.01,0.05388463);
   gre->SetPoint(2,8.99,1.122898);
   gre->SetPointError(2,0,0.03588551);
   gre->SetPoint(3,6.057,1.028638);
   gre->SetPointError(3,0,0.06510759);
   gre->SetPoint(4,2.886,0.6357901);
   gre->SetPointError(4,0,0.06646742);
   
   TH1F *Graph_gr29 = new TH1F("Graph_gr29","Graph",100,1.426,18.946);
   Graph_gr29->SetMinimum(0.4554605);
   Graph_gr29->SetMaximum(1.821807);
   Graph_gr29->SetDirectory(0);
   Graph_gr29->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr29->SetLineColor(ci);
   Graph_gr29->GetXaxis()->SetLabelFont(42);
   Graph_gr29->GetXaxis()->SetLabelOffset(-0.012);
   Graph_gr29->GetXaxis()->SetLabelSize(0.05891884);
   Graph_gr29->GetXaxis()->SetTitleSize(0.06481072);
   Graph_gr29->GetXaxis()->SetTickLength(0.03652968);
   Graph_gr29->GetXaxis()->SetTitleOffset(1.0075);
   Graph_gr29->GetXaxis()->SetTitleFont(42);
   Graph_gr29->GetYaxis()->SetLabelFont(42);
   Graph_gr29->GetYaxis()->SetLabelOffset(0.01);
   Graph_gr29->GetYaxis()->SetLabelSize(0.05891884);
   Graph_gr29->GetYaxis()->SetTitleSize(0.06481072);
   Graph_gr29->GetYaxis()->SetTitleOffset(1.305);
   Graph_gr29->GetYaxis()->SetTitleFont(42);
   Graph_gr29->GetZaxis()->SetLabelFont(42);
   Graph_gr29->GetZaxis()->SetLabelSize(0.035);
   Graph_gr29->GetZaxis()->SetTitleSize(0.035);
   Graph_gr29->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr29);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("gr");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = 960;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(34);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,17.47,1.655138);
   gre->SetPointError(0,0.524,0.06092083);
   gre->SetPoint(1,12.481,1.403763);
   gre->SetPointError(1,0.375,0.08228634);
   gre->SetPoint(2,8.99,1.122898);
   gre->SetPointError(2,0.271,0.0602907);
   gre->SetPoint(3,6.057,1.028638);
   gre->SetPointError(3,0.19,0.09928777);
   gre->SetPoint(4,2.886,0.6357901);
   gre->SetPointError(4,0.135,0.09109225);
   
   TH1F *Graph_gr30 = new TH1F("Graph_gr30","Graph",100,1.2267,19.5183);
   Graph_gr30->SetMinimum(0.4275618);
   Graph_gr30->SetMaximum(1.833195);
   Graph_gr30->SetDirectory(0);
   Graph_gr30->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gr30->SetLineColor(ci);
   Graph_gr30->GetXaxis()->SetLabelFont(42);
   Graph_gr30->GetXaxis()->SetLabelOffset(-0.012);
   Graph_gr30->GetXaxis()->SetLabelSize(0.05891884);
   Graph_gr30->GetXaxis()->SetTitleSize(0.06481072);
   Graph_gr30->GetXaxis()->SetTickLength(0.03652968);
   Graph_gr30->GetXaxis()->SetTitleOffset(1.0075);
   Graph_gr30->GetXaxis()->SetTitleFont(42);
   Graph_gr30->GetYaxis()->SetLabelFont(42);
   Graph_gr30->GetYaxis()->SetLabelOffset(0.01);
   Graph_gr30->GetYaxis()->SetLabelSize(0.05891884);
   Graph_gr30->GetYaxis()->SetTitleSize(0.06481072);
   Graph_gr30->GetYaxis()->SetTitleOffset(1.305);
   Graph_gr30->GetYaxis()->SetTitleFont(42);
   Graph_gr30->GetZaxis()->SetLabelFont(42);
   Graph_gr30->GetZaxis()->SetLabelSize(0.035);
   Graph_gr30->GetZaxis()->SetTitleSize(0.035);
   Graph_gr30->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr30);
   
   gre->Draw("e5");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph10");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   ci = TColor::GetColor("#000000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,45.15,2.1191);
   gre->SetPointError(0,0,0.08664469);
   gre->SetPoint(1,36.22,2.161386);
   gre->SetPointError(1,0,0.08530867);
   gre->SetPoint(2,30.46,1.979704);
   gre->SetPointError(2,0,0.0759096);
   gre->SetPoint(3,23.24,1.835163);
   gre->SetPointError(3,0,0.06839501);
   gre->SetPoint(4,16.08,1.566165);
   gre->SetPointError(4,0,0.06152763);
   gre->SetPoint(5,9.82,1.477373);
   gre->SetPointError(5,0,0.07865782);
   gre->SetPoint(6,4.41,1.063984);
   gre->SetPointError(6,0,0.06587795);
   
   TH1F *Graph_Graph31 = new TH1F("Graph_Graph31","Graph",100,0.336,49.224);
   Graph_Graph31->SetMinimum(0.8732468);
   Graph_Graph31->SetMaximum(2.371554);
   Graph_Graph31->SetDirectory(0);
   Graph_Graph31->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31->SetLineColor(ci);
   Graph_Graph31->GetXaxis()->SetLabelFont(42);
   Graph_Graph31->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph31->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph31->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph31->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph31->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph31->GetXaxis()->SetTitleFont(42);
   Graph_Graph31->GetYaxis()->SetLabelFont(42);
   Graph_Graph31->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph31->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph31->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph31->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph31->GetYaxis()->SetTitleFont(42);
   Graph_Graph31->GetZaxis()->SetLabelFont(42);
   Graph_Graph31->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph31->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(7);
   gre->SetName("Graph11");
   gre->SetTitle("Graph");
   gre->SetFillStyle(0);

   gre->SetMarkerColor(429);
   gre->SetMarkerStyle(29);
   gre->SetMarkerSize(2);
   gre->SetPoint(0,45.15,2.1191);
   gre->SetPointError(0,1,0.1035078);
   gre->SetPoint(1,36.22,2.161386);
   gre->SetPointError(1,0.8,0.1078092);
   gre->SetPoint(2,30.46,1.979704);
   gre->SetPointError(2,0.67,0.1019948);
   gre->SetPoint(3,23.24,1.835163);
   gre->SetPointError(3,0.51,0.1108381);
   gre->SetPoint(4,16.08,1.566165);
   gre->SetPointError(4,0.35,0.1074264);
   gre->SetPoint(5,9.82,1.477373);
   gre->SetPointError(5,0.21,0.1114791);
   gre->SetPoint(6,4.41,1.063984);
   gre->SetPointError(6,0.1,0.1261208);
   
   TH1F *Graph_Graph32 = new TH1F("Graph_Graph32","Graph",100,0.126,50.334);
   Graph_Graph32->SetMinimum(0.8047296);
   Graph_Graph32->SetMaximum(2.402329);
   Graph_Graph32->SetDirectory(0);
   Graph_Graph32->SetStats(0);

   Graph_Graph32->SetLineColor(429);
   Graph_Graph32->GetXaxis()->SetLabelFont(42);
   Graph_Graph32->GetXaxis()->SetLabelOffset(-0.012);
   Graph_Graph32->GetXaxis()->SetLabelSize(0.05891884);
   Graph_Graph32->GetXaxis()->SetTitleSize(0.06481072);
   Graph_Graph32->GetXaxis()->SetTickLength(0.03652968);
   Graph_Graph32->GetXaxis()->SetTitleOffset(1.0075);
   Graph_Graph32->GetXaxis()->SetTitleFont(42);
   Graph_Graph32->GetYaxis()->SetLabelFont(42);
   Graph_Graph32->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph32->GetYaxis()->SetLabelSize(0.05891884);
   Graph_Graph32->GetYaxis()->SetTitleSize(0.06481072);
   Graph_Graph32->GetYaxis()->SetTitleOffset(1.305);
   Graph_Graph32->GetYaxis()->SetTitleFont(42);
   Graph_Graph32->GetZaxis()->SetLabelFont(42);
   Graph_Graph32->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph32->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph32->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph32);
   
   gre->Draw("e5");
    
    gre = new TGraphErrors(4);
    gre->SetName("GraphXiStarpPb");
    gre->SetTitle("GraphXiStarpPb");
    gre->SetFillColor(1);
    gre->SetLineColor(429);
    gre->SetLineWidth(2);
    gre->SetMarkerColor(429);
    gre->SetMarkerStyle(29);
    gre->SetMarkerSize(2);
    gre->SetPoint(0,35.6,1.527236);
    gre->SetPointError(0,0.8,0.03357191);
    gre->SetPoint(1,23.2,1.479764);
    gre->SetPointError(1,0.5,0.04180373);
    gre->SetPoint(2,16.1,1.272373);
    gre->SetPointError(2,0.4,0.03567718);
    gre->SetPoint(3,7.1,0.9507364);
    gre->SetPointError(3,0.2,0.02641355);
    
    TH1F *Graph_GraphXiStarpPb1 = new TH1F("Graph_GraphXiStarpPb1","GraphXiStarpPb",100,1.435105,3.589767);
    Graph_GraphXiStarpPb1->SetDirectory(0);
    Graph_GraphXiStarpPb1->SetStats(0);
    Graph_GraphXiStarpPb1->SetLineColor(429);
    Graph_GraphXiStarpPb1->GetXaxis()->SetLabelFont(42);
    Graph_GraphXiStarpPb1->GetXaxis()->SetLabelOffset(0.01);
    Graph_GraphXiStarpPb1->GetXaxis()->SetLabelSize(0.05);
    Graph_GraphXiStarpPb1->GetXaxis()->SetTitleSize(0.06);
    Graph_GraphXiStarpPb1->GetXaxis()->SetTitleFont(42);
    Graph_GraphXiStarpPb1->GetYaxis()->SetLabelFont(42);
    Graph_GraphXiStarpPb1->GetYaxis()->SetLabelOffset(0.01);
    Graph_GraphXiStarpPb1->GetYaxis()->SetLabelSize(0.05);
    Graph_GraphXiStarpPb1->GetYaxis()->SetTitleSize(0.06);
    Graph_GraphXiStarpPb1->GetYaxis()->SetTickLength(0.02);
    Graph_GraphXiStarpPb1->GetYaxis()->SetTitleFont(42);
    Graph_GraphXiStarpPb1->GetZaxis()->SetLabelFont(42);
    Graph_GraphXiStarpPb1->GetZaxis()->SetLabelOffset(0.01);
    Graph_GraphXiStarpPb1->GetZaxis()->SetLabelSize(0.05);
    Graph_GraphXiStarpPb1->GetZaxis()->SetTitleSize(0.06);
    Graph_GraphXiStarpPb1->GetZaxis()->SetTitleFont(42);
    gre->SetHistogram(Graph_GraphXiStarpPb1);
    
    gre->Draw("pz");
    TBox *box = new TBox(34.8,1.440784,36.4,1.613689);
        box->SetFillColor(429);
    box->SetFillStyle(0);
    box->SetLineColor(429);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(22.7,1.373718,23.7,1.585809);
        box->SetFillColor(429);
    box->SetFillStyle(0);
    box->SetLineColor(429);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(15.7,1.172783,16.5,1.371962);
        box->SetFillColor(429);
    box->SetFillStyle(0);
    box->SetLineColor(429);
    box->SetLineWidth(2);
    box->Draw();
    box = new TBox(6.9,0.8811664,7.3,1.020306);
        box->SetFillColor(429);
    box->SetFillStyle(0);
    box->SetLineColor(429);
    box->SetLineWidth(2);
    box->Draw();

    gre = new TGraphErrors(3);
    gre->SetName("RatioSigmaStarPionStat");
    gre->SetTitle("Graph");
    gre->SetFillColor(2);
    gre->SetFillStyle(0);
    gre->SetLineColor(809);
    gre->SetLineWidth(2);
    gre->SetMarkerColor(809);
    gre->SetMarkerStyle(29);
    gre->SetMarkerSize(2);
    gre->SetPoint(0,35.6,1.272727);
    gre->SetPointError(0,0.8,0.02272727);
    gre->SetPoint(1,19.7,1.272727);
    gre->SetPointError(1,0.5,0.02272727);
    gre->SetPoint(2,7.1,1);
    gre->SetPointError(2,0.2,0.02272727);
    gre->Draw("pz");
    
    gre = new TGraphErrors(3);
    gre->SetName("Graph0");
    gre->SetTitle("RatioSigmaStarPionSyst");
    gre->SetFillColor(2);
    gre->SetFillStyle(0);
    gre->SetLineColor(809);
    gre->SetLineWidth(2);
    gre->SetMarkerColor(809);
    gre->SetMarkerStyle(29);
    gre->SetMarkerSize(2);
    gre->SetPoint(0,35.6,1.272727);
    gre->SetPointError(0,0.8,0.1363636);
    gre->SetPoint(1,19.7,1.272727);
    gre->SetPointError(1,0.5,0.1590909);
    gre->SetPoint(2,7.1,1);
    gre->SetPointError(2,0.2,0.1818182);
    gre->Draw("pe2");

   
   TLegend *leg = new TLegend(0.21,0.57,0.41,0.77,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph1"," p","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = 944;
   color = new TColor(ci, 0.8, 0, 0, " ", 0.5);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5"," #Lambda","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = 952;
   color = new TColor(ci, 0, 0, 1, " ", 0.5);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gr"," #Xi","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   ci = 956;
   color = new TColor(ci, 0, 0.6, 0, " ", 0.5);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(2.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_Graph31"," #Omega","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = 960;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(34);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
    
    entry=leg->AddEntry("NULL"," #Sigma^{#pm}(1385)","p");
    entry->SetLineColor(1);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    
    ci = 809;
    color = new TColor(ci, 0, 0, 0, " ", 0.5);
    entry->SetMarkerColor(ci);
    entry->SetMarkerStyle(29);
    entry->SetMarkerSize(2);
    entry->SetTextFont(42);
    leg->Draw();
    
    entry=leg->AddEntry("NULL"," #Xi^{0}(1530)","p");
    entry->SetLineColor(1);
    entry->SetLineStyle(1);
    entry->SetLineWidth(1);
    ci = 429;
    color = new TColor(ci, 0, 0, 0, " ", 0.5);
    entry->SetMarkerColor(ci);
    entry->SetMarkerStyle(29);
    entry->SetMarkerSize(2);
    entry->SetTextFont(42);
    leg->Draw();
    


    

   
   leg = new TLegend(0.21,0.79,0.41,0.94,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","ALICE","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gpp_dummy","pp, #sqrt{s} = 7 TeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = 963;
   color = new TColor(ci, 0, 0, 0, " ", 0.5);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gppb_dummy","p-Pb, #sqrt{s_{NN}} = 5.02 TeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
   can->Modified();
   can->cd();
   can->SetSelected(can);
}
