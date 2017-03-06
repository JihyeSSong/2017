// evolution of the PlotYieldRatios_KPK0SLXiOm_v2.C macro


const int n_particles = 8;
const int n_systems = 3;
const int n_htypes = 3; //3 types of histo: stat, tot syst e syst_unc
TGraphErrors *gr[n_particles][n_systems][n_htypes];
enum{lpi, lk, lp, lk0s, llam, lphi, lxi, lom};
enum{lpp, lppb, lpbpb};
enum{lstat, lsyst, lsyst_unc};
bool presence[n_particles][n_systems][n_htypes];
bool Cubrootcheck = kFALSE;

void DefinePresence(){
  
  for(int i_part=lpi+1; i_part<n_particles; i_part++)
    for(int i_system=0; i_system<n_systems; i_system++)
      for(int i_htype=0; i_htype<3; i_htype++) presence[i_part][i_system][i_htype] = kFALSE;
  
  //ad-hoc selection
    
  presence [lp]   [lppb] [lstat] 	= kTRUE;
  presence [lp]   [lppb] [lsyst_unc] 	= kTRUE;
    //presence [lk]   [lppb] [lsyst] 	= kTRUE;
    presence [lk0s] [lppb] [lsyst_unc] 	= kTRUE;
    presence [lk0s] [lppb] [lstat] 	= kTRUE;
    presence [llam] [lppb] [lsyst_unc] 	= kTRUE;
    presence [llam] [lppb] [lstat] 	= kTRUE;
    //presence [lphi] [lppb] [lsyst_unc] 	= kTRUE;
    //presence [lphi] [lppb] [lstat] 	= kTRUE;
    presence [lxi]  [lppb] [lsyst_unc] 	= kTRUE;
    presence [lxi]  [lppb] [lstat] 	= kTRUE;
    presence [lom]  [lppb] [lsyst_unc] 	= kTRUE;
    presence [lom]  [lppb] [lstat] 	= kTRUE;
    
    //presence [lp]   [lpp] [lsyst_unc] 	= kTRUE;
    //presence [lp]   [lpp] [lstat] 	= kTRUE;
    //presence [lk]   [lpp] [lsyst] 	= kTRUE;
    //presence [lk]   [lpp] [lstat] 	= kTRUE;
    //presence [lphi] [lpp] [lsyst] 	= kTRUE;
    //presence [lphi] [lpp] [lstat] 	= kTRUE;
    presence [lk0s] [lpp] [lsyst_unc] 	= kTRUE;
    presence [lk0s] [lpp] [lstat] 	= kTRUE;
    presence [llam] [lpp] [lsyst_unc] 	= kTRUE;
    presence [llam] [lpp] [lstat] 	= kTRUE;
    //presence [lxi]  [lpp] [lsyst] 	= kTRUE;
    presence [lxi]  [lpp] [lsyst_unc] 	= kTRUE;
    presence [lxi]  [lpp] [lstat] 	= kTRUE;
    //presence [lom]  [lpp] [lsyst] 	= kTRUE;
    presence [lom]  [lpp] [lsyst_unc] 	= kTRUE;
    presence [lom]  [lpp] [lstat] 	= kTRUE;

}

void ScalingPlot(bool CubicRootx=kFALSE){
  
  Cubrootcheck=CubicRootx;
  
  //style
    gROOT->LoadMacro("LoadPlotsStyle.C");
    LoadPlotsStyle(3);
  
  //BuildGraphs();
  DefinePresence();
//   TFile *fin = new TFile("IdentifiedParticlesRatioPlots_pp_pA_AA.root","read");
//   TFile *fin = new TFile("IdentifiedParticlesRatioPlots_pp_pA_AA_FINAL.root","read");
  TFile *fin = new TFile("IdentifiedParticlesRatioPlots_pp_pA_AA_iterative.root","read");
  fin->cd();
  for(int i_part=lpi+1; i_part<n_particles; i_part++){
    for(int i_system=0; i_system<n_systems; i_system++){
      for(int i_htype=0; i_htype<3; i_htype++){
        if(presence[i_part][i_system][i_htype]) gr[i_part][i_system][i_htype] = (TGraphErrors*)fin->Get(Form("gr[%d][%d][%d]",i_part,i_system,i_htype));
      }
    }
  }
  fin->Close();
  
  //calculating pp INEL ratios and errors
    double MByields[n_particles],	MByields_estat[n_particles],		MByields_esyst[n_particles];
    double MBrattpi[n_particles],	MBrattpi_estat[n_particles],		MBrattpi_esyst[n_particles];
    
//     //INEL case
//     MByields[lpi]  = 4.49; 	MByields_estat[lpi]  = 0.00; 		MByields_esyst[lpi]  = 0.20;
//     MByields[llam] = 0.1516; 	MByields_estat[llam] = 0.0003; 		MByields_esyst[llam] = 0.0184;
//     MByields[lxi]  = 0.0158; 	MByields_estat[lxi]  = 0.0001; 		MByields_esyst[lxi]  = 0.0014;
//     MByields[lom]  = 0.00135; 	MByields_estat[lom]  = 0.00004; 	MByields_esyst[lom]  = 0.00017;
//     MByields[lphi] = 0.0320; 	MByields_estat[lphi] = 0.0004; 		MByields_esyst[lphi] = 0.0040;
//     MByields[lp]   = 0.247; 	MByields_estat[lp]   = 0.000; 		MByields_esyst[lp]   = 0.018;
//     MByields[lk]   = 0.572; 	MByields_estat[lk]   = 0.000; 		MByields_esyst[lk]   = 0.032;
//     MByields[lk0s] = 2*0.2802; 	MByields_estat[lk0s] = 2*0.0002; 	MByields_esyst[lk0s] = 0.03; // from david's note aliceinfo.cern.ch/Notes/node/32
    
    //INEL>0 case
    MByields[lpi]  = 5.9065; 	MByields_estat[lpi]  = 0.00037; 	MByields_esyst[lpi]  = 0.28054;
    MByields[llam] = 0.2016; 	MByields_estat[llam] = 0.0002; 		MByields_esyst[llam] = 0.0141;
    MByields[lxi]  = 0.0218; 	MByields_estat[lxi]  = 0.000086; 	MByields_esyst[lxi]  = 0.001639;
    MByields[lom]  = 0.0019; 	MByields_estat[lom]  = 0.00004; 	MByields_esyst[lom]  = 0.000192;
/*to be updated*/    MByields[lphi] = 0.0320; 	MByields_estat[lphi] = 0.0004; 		MByields_esyst[lphi] = 0.0040;
    MByields[lp]   = 0.3217; 	MByields_estat[lp]   = 0.00011; 		MByields_esyst[lp]   = 0.023;
    MByields[lk]   = 0.7526; 	MByields_estat[lk]   = 0.000205; 		MByields_esyst[lk]   = 0.048;
    MByields[lk0s] = 2*0.3684; 	MByields_estat[lk0s] = 2*0.0002; 	MByields_esyst[lk0s] = 0.0210;
    
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      MBrattpi[i_part] = MByields[i_part] / MByields[lpi];
      MBrattpi_estat[i_part] = ErrRat(MByields[i_part],MByields_estat[i_part],MByields[lpi],MByields_estat[lpi]);
      MBrattpi_esyst[i_part] = ErrRat(MByields[i_part],MByields_esyst[i_part],MByields[lpi],MByields_esyst[lpi]);
    }
  
  //normalizing to ppMB ratio
    double x=0, y=0, e_x=0, e_y=0;
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  for(int i_point=0; i_point<gr[i_part][i_system][i_htype]->GetN(); i_point++){
              gr[i_part][i_system][i_htype]->GetPoint(i_point,x,y);
              e_x=gr[i_part][i_system][i_htype]->GetErrorX(i_point);
              e_y=gr[i_part][i_system][i_htype]->GetErrorY(i_point);
              gr[i_part][i_system][i_htype]->SetPointError(i_point,e_x,e_y/MBrattpi[i_part]);
              gr[i_part][i_system][i_htype]->SetPoint(i_point,x,y/MBrattpi[i_part]);
          }
        }
      }
    }

  //change to Power(x,1./3) if required
    if(CubicRootx){
      for(int i_part=lpi+1; i_part<n_particles; i_part++){
        for(int i_system=0; i_system<n_systems; i_system++){
	  for(int i_htype=0; i_htype<3; i_htype++){
	    if(!presence[i_part][i_system][i_htype]) continue;
	    for(int i_point=0; i_point<gr[i_part][i_system][i_htype]->GetN(); i_point++){
              gr[i_part][i_system][i_htype]->GetPoint(i_point,x,y);
              e_x=gr[i_part][i_system][i_htype]->GetErrorX(i_point);
	      e_y=gr[i_part][i_system][i_htype]->GetErrorY(i_point);
	      e_x = e_x/3*TMath::Power(x,-2./3);
              gr[i_part][i_system][i_htype]->SetPointError(i_point,e_x,e_y);
              gr[i_part][i_system][i_htype]->SetPoint(i_point,TMath::Power(x,1./3),y);
            }
          }
        }
      }
    }
    

  //formatting graphs
    //
    float scalefactor[n_particles] = {1,1,1,1,1,1,1,1};
    float gralpha[n_systems] = {0.5, 1., 1.};
    //			                         lk,      lp,         lk0s,   llam,     lphi,    lxi,    lom};
    int grcol[n_systems][n_particles] =    { {0, kViolet+1, kOrange+1, kRed+1, kBlue, kBlack,  kGreen+2, kBlack},  //pp
                                             {0, kViolet+1, kOrange+1, kRed+1, kBlue, kGray+2, kGreen+2, kBlack},  //pPb
					     {0, kBlack,  kBlack,     kBlack, kBlack,   kBlack,  kBlack, kBlack}   //PbPb
					   };
    //    int grmarker[n_systems][n_particles] = { {0, 20, 33, 29, 34, 34, 21, 20},  //pp
    //                                             {0, 24, 27, 30, 28, 28, 25, 24},  //pPb
    int grmarker[n_systems][n_particles] = { {0, 20, 20, 20, 21, 20, 33, 34},  //pp
                                             {0, 27, 27, 24, 25, 27, 27, 28},  //pPb
					     {0, 20,      20,         20,     20,       20,      20,     20}   //PbPb
					   };
    //  float grmarsiz[n_systems][n_particles] = { {0, 2, 3, 3, 2.5, 2.5, 2, 2},  //pp
    //                                             {0, 2, 3, 3, 2.5, 2.5, 2, 2},  //pPb
  float grmarsiz[n_systems][n_particles] = { {0, 2, 2, 2, 2, 2, 2.5, 2},  //pp
                                             {0, 2, 2, 2, 2, 2, 2.5, 2},  //pPb
					     {0,  1,       1,          1,      1,        1,       1,      1}   //PbPb
					   };
//   float grmarsiz[n_systems][n_particles] = { {0,  1,     1.4,          1.4,    1.4,        1,       1,      1},  //pp
//                                              {0,  1,     1.4,          1.4,    1.4,        1,       1,      1},  //pPb
// 					     {0,  1,       1,          1,      1,        1,       1,      1}   //PbPb
// 					   };
    char drawop[n_htypes][10] = {"P","e5","e5"};

    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  ScaleGraph(i_part,scalefactor[i_part]);
	  gr[i_part][i_system][i_htype]->SetLineColor(grcol[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetMarkerColor(grcol[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetMarkerColorAlpha(grcol[i_system][i_part], gralpha[i_system]);
	  gr[i_part][i_system][i_htype]->SetMarkerStyle(grmarker[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetMarkerSize(grmarsiz[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetFillStyle(0);
	  gr[i_part][i_system][i_htype]->SetFillColor(0);
	  gr[i_part][i_system][i_htype]->SetLineWidth(1);
	}
      }
    }
  
  
  //fitting to guide the eye
    TF1 *f_eye = new TF1("f_eye","[0]*log(x) + [1]",5.964,50);
    f_eye->SetLineWidth(2);
    TF1 *f_eyeplot[n_particles];
    
    //this graph is dummy. "includes" the pp reference in order to have all curves coming from 1 point
      TGraphErrors *gr_pp = new TGraphErrors(1);
      gr_pp->SetPoint(0,5.964,1);
      gr_pp->SetPointError(0,1e-5,1e-5);
    
    TMultiGraph *mgr[n_particles];
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      mgr[i_part] = new TMultiGraph();
      mgr[i_part]->Add(gr_pp);
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  mgr[i_part]->Add(gr[i_part][i_system][i_htype]);
	}
      }
      if(presence[i_part][lpp][lstat] && presence[i_part][lppb][lstat]) {
	mgr[i_part]->Fit(f_eye,"QRI0");
	f_eyeplot[i_part] = new TF1(Form("f_eyeplot[%d]",i_part),"[0]*log(x) + [1]",5.6,50);
	f_eyeplot[i_part]->SetParameters(f_eye->GetParameter(0),f_eye->GetParameter(1));
      }
    }
  
  
  //canvasing
    TCanvas *can = new TCanvas("can","can",1.5*400,1.5*650*0.5475);
//     can->SetMargin(0.13,0.01,0.13,0.01);
    if(!CubicRootx) can->SetLogx();
//     can->SetTicks(1,1);
    
    if(!CubicRootx) TH1D *frame = new TH1D("frame","",1,2.,50.);
    else TH1D *frame = new TH1D("frame","",1,1,4);
    //frame->GetYaxis()->SetRangeUser(0.5,2.5);
    frame->GetYaxis()->SetRangeUser(0.4,2.3);
    frame->GetYaxis()->SetNdivisions(509);
//     frame->GetYaxis()->SetTitle("[(h+#bar{h})/(#pi^{-}+#pi^{+})]^{system} / [(h+#bar{h})/(#pi^{-}+#pi^{+})]^{pp}_{INEL}");
    frame->GetYaxis()->SetTitle("(h/#pi) / (h/#pi)^{pp}_{INEL>0}");
    if(!CubicRootx) frame->GetXaxis()->SetTitle("#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|< 0.5}");
    else frame->GetXaxis()->SetTitle("[#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|< 0.5}]^{1/3}");
    frame->GetXaxis()->SetLabelOffset(-0.025/2);
    //frame->GetXaxis()->SetTitleOffset(1.2);
    //frame->GetYaxis()->SetTitleSize(0.04);
    //frame->GetYaxis()->SetTitleOffset(1.55);
    //frame->GetXaxis()->SetTitleSize(0.04);
    //frame->GetYaxis()->SetLabelSize(0.035);
    //frame->GetXaxis()->SetLabelSize(0.035);
    frame->Draw();
    
    TLine *l_one = new TLine(2,1,50,1);
    l_one->SetLineWidth(1);
    l_one->SetLineStyle(3);
    l_one->SetLineColor(kBlack);
    l_one->Draw();
  //return;
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
//       if(presence[i_part][lpp][lstat] && presence[i_part][lppb][lstat]) f_eyeplot[i_part]->Draw("same");
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  if (i_part == lp) continue;
	  gr[i_part][i_system][i_htype]->Draw(drawop[i_htype]);
	}
      }
    }

  //legend
    char ratnames[n_particles][50] = {""," K"," p"," K^{0}_{S}"," #Lambda"," #phi"," #Xi"," #Omega"};
    
    //TLegend *leg_pp = new TLegend(0.22,0.90,0.70,0.96);
    TLegend *leg_pp = new TLegend(0.21,0.55+0.02,0.41,0.75+0.02);
    //    leg_pp->SetNColumns(2);
    leg_pp->SetTextSize(0.04);
    leg_pp->SetTextFont(42);
    //leg_pp->SetNColumns(5);
    //leg_pp->SetHeader("#scale[0.9]{ALICE pp #sqrt{s} = 7 TeV}");
    //    leg_pp->SetHeader("#scale[0.9]{#splitline{ALICE pp}{#sqrt{s} = 7 TeV}}");
    leg_pp->SetFillStyle(0);
    leg_pp->SetBorderSize(0);
    //    leg_pp->AddEntry(gr[lp][lpp][lsyst],ratnames[lp],"p"); //ad-hoc, remove when unc-syst will be available for p
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      if(!presence[i_part][lpp][lsyst_unc]) continue;
      leg_pp->AddEntry(gr[i_part][lpp][lsyst_unc],ratnames[i_part],"p");
    }
    
    //TLegend *leg_pPb = new TLegend(0.22,0.82,0.70,0.88);
    TLegend *leg_pPb = new TLegend(0.4,0.62,0.47,0.92);
    leg_pPb->SetTextSize(0.04/0.5475/1.55);
    leg_pPb->SetTextFont(42);
    //leg_pPb->SetNColumns(5);
    //leg_pPb->SetHeader("#scale[0.9]{ALICE p-Pb #sqrt{s_{NN}} = 5.02 TeV}");
    leg_pPb->SetHeader("#scale[1]{#splitline{ALICE p-Pb}{#sqrt{s_{NN}} = 5.02 TeV}}");
    leg_pPb->SetFillStyle(0);
    leg_pPb->SetBorderSize(0);
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      if(!presence[i_part][lppb][lsyst_unc]) continue;
      leg_pPb->AddEntry(gr[i_part][lppb][lsyst_unc],ratnames[i_part],"p");
    }
    
    leg_pp->Draw();
    //    leg_pPb->Draw();

    TLegend *leg = new TLegend(0.21,0.80-0.01,0.41,0.95-0.01);
    leg->SetTextSize(0.04);
    leg->SetTextFont(42);
    leg->SetFillStyle(0);
    leg->SetBorderSize(0);
    leg->AddEntry((TObject *)NULL, "ALICE", "");
    TGraphErrors *gpp_dummy = (TGraphErrors *)gr[lk0s][lpp][lstat]->Clone("gpp_dummy");
    TGraphErrors *gppb_dummy = (TGraphErrors *)gr[lk0s][lppb][lstat]->Clone("gppb_dummy");
    gpp_dummy->SetMarkerColorAlpha(kBlack, 0.5);
    gppb_dummy->SetMarkerColor(kBlack);

    leg->AddEntry(gpp_dummy,"pp, #sqrt{s} = 7 TeV","p");
    leg->AddEntry(gppb_dummy,"p-Pb, #sqrt{s_{NN}} = 5.02 TeV","p");
    leg->Draw();

    
  //writings
//     TLatex lat;
//     lat.SetNDC();
//     lat.SetTextAlign(12);
//     lat.SetTextSize(0.04);
//     lat.DrawLatex(0.18,0.93,"#scale[0.95]{ALICE Preliminary       |y|<0.5");

    
    MinuitFit(CubicRootx);
    
    if(CubicRootx) can->SaveAs("img_ScalingPlot_cubicrootx.pdf");
//     else can->SaveAs("img_ScalingPlot.pdf");
//     else can->SaveAs("img_ScalingPlot_FINAL.pdf");
    else can->SaveAs("img_ScalingPlot_iterative.pdf");


    ScalingPlot_COURIER(CubicRootx);
}

void ScalingPlot_COURIER(bool CubicRootx=kFALSE){
  
  Cubrootcheck=CubicRootx;
  
  //style
    gROOT->LoadMacro("LoadPlotsStyle.C");
    LoadPlotsStyle(3);
  
  //BuildGraphs();
  DefinePresence();
  presence [lp]   [lpp] [lsyst_unc] 	= kTRUE;
  presence [lp]   [lpp] [lstat] 	= kTRUE;
  
//   TFile *fin = new TFile("IdentifiedParticlesRatioPlots_pp_pA_AA.root","read");
//   TFile *fin = new TFile("IdentifiedParticlesRatioPlots_pp_pA_AA_FINAL.root","read");
  TFile *fin = new TFile("IdentifiedParticlesRatioPlots_pp_pA_AA_iterative.root","read");
  fin->cd();
  for(int i_part=lpi+1; i_part<n_particles; i_part++){
    for(int i_system=0; i_system<n_systems; i_system++){
      for(int i_htype=0; i_htype<3; i_htype++){
        if(presence[i_part][i_system][i_htype]) gr[i_part][i_system][i_htype] = (TGraphErrors*)fin->Get(Form("gr[%d][%d][%d]",i_part,i_system,i_htype));
      }
    }
  }
  fin->Close();
  
  //calculating pp INEL ratios and errors
    double MByields[n_particles],	MByields_estat[n_particles],		MByields_esyst[n_particles];
    double MBrattpi[n_particles],	MBrattpi_estat[n_particles],		MBrattpi_esyst[n_particles];
    
//     //INEL case
//     MByields[lpi]  = 4.49; 	MByields_estat[lpi]  = 0.00; 		MByields_esyst[lpi]  = 0.20;
//     MByields[llam] = 0.1516; 	MByields_estat[llam] = 0.0003; 		MByields_esyst[llam] = 0.0184;
//     MByields[lxi]  = 0.0158; 	MByields_estat[lxi]  = 0.0001; 		MByields_esyst[lxi]  = 0.0014;
//     MByields[lom]  = 0.00135; 	MByields_estat[lom]  = 0.00004; 	MByields_esyst[lom]  = 0.00017;
//     MByields[lphi] = 0.0320; 	MByields_estat[lphi] = 0.0004; 		MByields_esyst[lphi] = 0.0040;
//     MByields[lp]   = 0.247; 	MByields_estat[lp]   = 0.000; 		MByields_esyst[lp]   = 0.018;
//     MByields[lk]   = 0.572; 	MByields_estat[lk]   = 0.000; 		MByields_esyst[lk]   = 0.032;
//     MByields[lk0s] = 2*0.2802; 	MByields_estat[lk0s] = 2*0.0002; 	MByields_esyst[lk0s] = 0.03; // from david's note aliceinfo.cern.ch/Notes/node/32

    //INEL>0 case
    MByields[lpi]  = 5.9065; 	MByields_estat[lpi]  = 0.00037; 	MByields_esyst[lpi]  = 0.28054;
    MByields[llam] = 0.2016; 	MByields_estat[llam] = 0.0002; 		MByields_esyst[llam] = 0.0141;
    MByields[lxi]  = 0.0218; 	MByields_estat[lxi]  = 0.000086; 	MByields_esyst[lxi]  = 0.001639;
    MByields[lom]  = 0.0019; 	MByields_estat[lom]  = 0.00004; 	MByields_esyst[lom]  = 0.000192;
/*to be updated*/    MByields[lphi] = 0.0320; 	MByields_estat[lphi] = 0.0004; 		MByields_esyst[lphi] = 0.0040;
    MByields[lp]   = 0.3217; 	MByields_estat[lp]   = 0.00011; 		MByields_esyst[lp]   = 0.023;
    MByields[lk]   = 0.7526; 	MByields_estat[lk]   = 0.000205; 		MByields_esyst[lk]   = 0.048;
    MByields[lk0s] = 2*0.3684; 	MByields_estat[lk0s] = 2*0.0002; 	MByields_esyst[lk0s] = 0.0210;
    
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      MBrattpi[i_part] = MByields[i_part] / MByields[lpi];
      MBrattpi_estat[i_part] = ErrRat(MByields[i_part],MByields_estat[i_part],MByields[lpi],MByields_estat[lpi]);
      MBrattpi_esyst[i_part] = ErrRat(MByields[i_part],MByields_esyst[i_part],MByields[lpi],MByields_esyst[lpi]);
    }
  
  //normalizing to ppMB ratio
    double x=0, y=0, e_x=0, e_y=0;
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  for(int i_point=0; i_point<gr[i_part][i_system][i_htype]->GetN(); i_point++){
              gr[i_part][i_system][i_htype]->GetPoint(i_point,x,y);
              e_x=gr[i_part][i_system][i_htype]->GetErrorX(i_point);
              e_y=gr[i_part][i_system][i_htype]->GetErrorY(i_point);
              gr[i_part][i_system][i_htype]->SetPointError(i_point,e_x,e_y/MBrattpi[i_part]);
              gr[i_part][i_system][i_htype]->SetPoint(i_point,x,y/MBrattpi[i_part]);
          }
        }
      }
    }

  //change to Power(x,1./3) if required
    if(CubicRootx){
      for(int i_part=lpi+1; i_part<n_particles; i_part++){
        for(int i_system=0; i_system<n_systems; i_system++){
	  for(int i_htype=0; i_htype<3; i_htype++){
	    if(!presence[i_part][i_system][i_htype]) continue;
	    for(int i_point=0; i_point<gr[i_part][i_system][i_htype]->GetN(); i_point++){
              gr[i_part][i_system][i_htype]->GetPoint(i_point,x,y);
              e_x=gr[i_part][i_system][i_htype]->GetErrorX(i_point);
	      e_y=gr[i_part][i_system][i_htype]->GetErrorY(i_point);
	      e_x = e_x/3*TMath::Power(x,-2./3);
              gr[i_part][i_system][i_htype]->SetPointError(i_point,e_x,e_y);
              gr[i_part][i_system][i_htype]->SetPoint(i_point,TMath::Power(x,1./3),y);
            }
          }
        }
      }
    }
    

  //formatting graphs
    //
    float scalefactor[n_particles] = {1,1,1,1,1,1,1,1};
    float gralpha[n_systems] = {0.5, 1., 1.};
    //			                         lk,      lp,         lk0s,   llam,     lphi,    lxi,    lom};
    int grcol[n_systems][n_particles] =    { {0, kViolet+1, kRed+1, kRed+1, kBlue, kBlack,  kGreen+2, kBlack},  //pp
                                             {0, kViolet+1, kRed+1, kRed+1, kBlue, kGray+2, kGreen+2, kBlack},  //pPb
					     {0, kBlack,  kBlack,     kBlack, kBlack,   kBlack,  kBlack, kBlack}   //PbPb
					   };
    //    int grmarker[n_systems][n_particles] = { {0, 20, 33, 29, 34, 34, 21, 20},  //pp
    //                                             {0, 24, 27, 30, 28, 28, 25, 24},  //pPb
    int grmarker[n_systems][n_particles] = { {0, 20, 20, 20, 21, 20, 33, 34},  //pp
                                             {0, 27, 24, 24, 25, 27, 27, 28},  //pPb
					     {0, 20,      20,         20,     20,       20,      20,     20}   //PbPb
					   };
    //  float grmarsiz[n_systems][n_particles] = { {0, 2, 3, 3, 2.5, 2.5, 2, 2},  //pp
    //                                             {0, 2, 3, 3, 2.5, 2.5, 2, 2},  //pPb
  float grmarsiz[n_systems][n_particles] = { {0, 2, 2, 2, 2, 2, 2.5, 2},  //pp
                                             {0, 2, 2, 2, 2, 2, 2.5, 2},  //pPb
					     {0,  1,       1,          1,      1,        1,       1,      1}   //PbPb
					   };
//   float grmarsiz[n_systems][n_particles] = { {0,  1,     1.4,          1.4,    1.4,        1,       1,      1},  //pp
//                                              {0,  1,     1.4,          1.4,    1.4,        1,       1,      1},  //pPb
// 					     {0,  1,       1,          1,      1,        1,       1,      1}   //PbPb
// 					   };
    char drawop[n_htypes][10] = {"P","e5","e5"};

    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  ScaleGraph(i_part,scalefactor[i_part]);
	  gr[i_part][i_system][i_htype]->SetLineColor(grcol[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetMarkerColor(grcol[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetMarkerColorAlpha(grcol[i_system][i_part], gralpha[i_system]);
	  gr[i_part][i_system][i_htype]->SetMarkerStyle(grmarker[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetMarkerSize(grmarsiz[i_system][i_part]);
	  gr[i_part][i_system][i_htype]->SetFillStyle(0);
	  gr[i_part][i_system][i_htype]->SetFillColor(0);
	  gr[i_part][i_system][i_htype]->SetLineWidth(1);
	}
      }
    }
  
  
  //fitting to guide the eye
    TF1 *f_eye = new TF1("f_eye","[0]*log(x) + [1]",5.964,50);
    f_eye->SetLineWidth(2);
    TF1 *f_eyeplot[n_particles];
    
    //this graph is dummy. "includes" the pp reference in order to have all curves coming from 1 point
      TGraphErrors *gr_pp = new TGraphErrors(1);
      gr_pp->SetPoint(0,5.964,1);
      gr_pp->SetPointError(0,1e-5,1e-5);
    
    TMultiGraph *mgr[n_particles];
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      mgr[i_part] = new TMultiGraph();
      mgr[i_part]->Add(gr_pp);
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  mgr[i_part]->Add(gr[i_part][i_system][i_htype]);
	}
      }
      if(presence[i_part][lpp][lstat] && presence[i_part][lppb][lstat]) {
	mgr[i_part]->Fit(f_eye,"QRI0");
	f_eyeplot[i_part] = new TF1(Form("f_eyeplot[%d]",i_part),"[0]*log(x) + [1]",5.6,50);
	f_eyeplot[i_part]->SetParameters(f_eye->GetParameter(0),f_eye->GetParameter(1));
      }
    }
  
  
  //canvasing
    TCanvas *can = new TCanvas("can","can",1.5*400,1.5*650*0.5475);
//     can->SetMargin(0.13,0.01,0.13,0.01);
    if(!CubicRootx) can->SetLogx();
//     can->SetTicks(1,1);
    
    if(!CubicRootx) TH1D *frame = new TH1D("frame","",1,2.,50.);
    else TH1D *frame = new TH1D("frame","",1,1,4);
    //frame->GetYaxis()->SetRangeUser(0.5,2.5);
    frame->GetYaxis()->SetRangeUser(0.4,2.3);
    frame->GetYaxis()->SetNdivisions(509);
//     frame->GetYaxis()->SetTitle("[(h+#bar{h})/(#pi^{-}+#pi^{+})]^{system} / [(h+#bar{h})/(#pi^{-}+#pi^{+})]^{pp}_{INEL}");
    frame->GetYaxis()->SetTitle("(h/#pi) / (h/#pi)^{pp}_{INEL>0}");
    if(!CubicRootx) frame->GetXaxis()->SetTitle("#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|< 0.5}");
    else frame->GetXaxis()->SetTitle("[#LTd#it{N}_{ch}/d#it{#eta}#GT_{|#it{#eta}|< 0.5}]^{1/3}");
    frame->GetXaxis()->SetLabelOffset(-0.025/2);
    //frame->GetXaxis()->SetTitleOffset(1.2);
    //frame->GetYaxis()->SetTitleSize(0.04);
    //frame->GetYaxis()->SetTitleOffset(1.55);
    //frame->GetXaxis()->SetTitleSize(0.04);
    //frame->GetYaxis()->SetLabelSize(0.035);
    //frame->GetXaxis()->SetLabelSize(0.035);
    frame->Draw();
    
    TLine *l_one = new TLine(2,1,50,1);
    l_one->SetLineWidth(1);
    l_one->SetLineStyle(3);
    l_one->SetLineColor(kBlack);
    l_one->Draw();
  //return;
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
//       if(presence[i_part][lpp][lstat] && presence[i_part][lppb][lstat]) f_eyeplot[i_part]->Draw("same");
      for(int i_system=0; i_system<n_systems; i_system++){
	for(int i_htype=0; i_htype<3; i_htype++){
	  if(!presence[i_part][i_system][i_htype]) continue;
	  if (i_part == lk0s) continue;
	  gr[i_part][i_system][i_htype]->Draw(drawop[i_htype]);
	}
      }
    }

  //legend
    char ratnames[n_particles][50] = {""," K"," p"," K^{0}_{S}"," #Lambda"," #phi"," #Xi"," #Omega"};
    
    //TLegend *leg_pp = new TLegend(0.22,0.90,0.70,0.96);
    TLegend *leg_pp = new TLegend(0.21,0.55+0.02,0.41,0.75+0.02);
    //    leg_pp->SetNColumns(2);
    leg_pp->SetTextSize(0.04);
    leg_pp->SetTextFont(42);
    //leg_pp->SetNColumns(5);
    //leg_pp->SetHeader("#scale[0.9]{ALICE pp #sqrt{s} = 7 TeV}");
    //    leg_pp->SetHeader("#scale[0.9]{#splitline{ALICE pp}{#sqrt{s} = 7 TeV}}");
    leg_pp->SetFillStyle(0);
    leg_pp->SetBorderSize(0);
    //    leg_pp->AddEntry(gr[lp][lpp][lsyst],ratnames[lp],"p"); //ad-hoc, remove when unc-syst will be available for p
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      if(!presence[i_part][lpp][lsyst_unc]) continue;
      if(i_part==lk0s) continue;
      leg_pp->AddEntry(gr[i_part][lpp][lsyst_unc],ratnames[i_part],"p");
    }
    
    //TLegend *leg_pPb = new TLegend(0.22,0.82,0.70,0.88);
    TLegend *leg_pPb = new TLegend(0.4,0.62,0.47,0.92);
    leg_pPb->SetTextSize(0.04/0.5475/1.55);
    leg_pPb->SetTextFont(42);
    //leg_pPb->SetNColumns(5);
    //leg_pPb->SetHeader("#scale[0.9]{ALICE p-Pb #sqrt{s_{NN}} = 5.02 TeV}");
    leg_pPb->SetHeader("#scale[1]{#splitline{ALICE p-Pb}{#sqrt{s_{NN}} = 5.02 TeV}}");
    leg_pPb->SetFillStyle(0);
    leg_pPb->SetBorderSize(0);
    for(int i_part=lpi+1; i_part<n_particles; i_part++){
      if(!presence[i_part][lppb][lsyst_unc]) continue;
      leg_pPb->AddEntry(gr[i_part][lppb][lsyst_unc],ratnames[i_part],"p");
    }
    
    leg_pp->Draw();
    //    leg_pPb->Draw();

    TLegend *leg = new TLegend(0.21,0.80-0.01,0.41,0.95-0.01);
    leg->SetTextSize(0.04);
    leg->SetTextFont(42);
    leg->SetFillStyle(0);
    leg->SetBorderSize(0);
    leg->AddEntry((TObject *)NULL, "ALICE", "");
    TGraphErrors *gpp_dummy = (TGraphErrors *)gr[lp][lpp][lstat]->Clone("gpp_dummy");
    TGraphErrors *gppb_dummy = (TGraphErrors *)gr[lp][lppb][lstat]->Clone("gppb_dummy");
    gpp_dummy->SetMarkerColorAlpha(kBlack, 0.5);
    gppb_dummy->SetMarkerColor(kBlack);

    leg->AddEntry(gpp_dummy,"pp, #sqrt{s} = 7 TeV","p");
    leg->AddEntry(gppb_dummy,"p-Pb, #sqrt{s_{NN}} = 5.02 TeV","p");
    leg->Draw();

    
  //writings
//     TLatex lat;
//     lat.SetNDC();
//     lat.SetTextAlign(12);
//     lat.SetTextSize(0.04);
//     lat.DrawLatex(0.18,0.93,"#scale[0.95]{ALICE Preliminary       |y|<0.5");

    
    //MinuitFit(CubicRootx);
    
    if(CubicRootx) can->SaveAs("img_ScalingPlot_COURIER_cubicrootx.pdf");
//     else can->SaveAs("img_ScalingPlot.pdf");
//     else can->SaveAs("img_ScalingPlot_FINAL.pdf");
    else can->SaveAs("img_ScalingPlot_COURIER.pdf");
    
}


Double_t ErrRat ( Double_t A, Double_t Aerr, Double_t B, Double_t Berr ){
  //Error in a Ratio
        if(B!=0){
                Double_t errorfromtop = Aerr*Aerr / (B*B) ;
                Double_t errorfrombottom = ((A*A)/(B*B*B*B)) * Berr * Berr;
                return TMath::Sqrt( errorfromtop + errorfrombottom );
        }
        return 1;
}

Double_t ErrRatSyst ( Double_t A, Double_t Aerr, Double_t B, Double_t Berr ){
  //Error in a Ratio
        if(B!=0){
                Double_t errorfromA = Aerr/A*Aerr/A ;
                Double_t errorfromB = Berr/B*Berr/B;
                return TMath::Sqrt( errorfromA + errorfromB )*A/B;
        }
        return 1;
}

//-----------------------------------------------------
// TMinuit part
//-----------------------------------------------------
//   double x_vals[4]={1,2,3,4};
//   double x_errs[4]={0.1,0.1,0.1,0.1};
//   double y_vals[4]={1,2,3.5,3.9};
//   double y_errs[4]={0.1,0.1,0.1,0.1};
  double x_vals_om[20];
  double x_errs_om[20];
  double y_vals_om[20];
  double y_errs_om[20];
  int totpoints_om = 0;
  double x_vals_xi[20];
  double x_errs_xi[20];
  double y_vals_xi[20];
  double y_errs_xi[20];
  int totpoints_xi = 0;
  double x_vals_la[20];
  double x_errs_la[20];
  double y_vals_la[20];
  double y_errs_la[20];
  int totpoints_la = 0;
  double x_vals_k0[20];
  double x_errs_k0[20];
  double y_vals_k0[20];
  double y_errs_k0[20];
  int totpoints_k0 = 0;
  double x_vals_p[20];
  double x_errs_p[20];
  double y_vals_p[20];
  double y_errs_p[20];
  int totpoints_p = 0;
  
double FuncForm_om(Double_t *xp, Double_t *par) 
{
   Double_t x=*xp;
   //return 1+par[0]*TMath::Power(x,3*par[1]);
   //return 1./TMath::Power(5.9,3*par[0])*TMath::Power(x,3*par[0]);
   //return 3*par[0]*TMath::Log(x) + 1- 3*par[0]*TMath::Log(5.9);
   if(!Cubrootcheck) return TMath::Power(3, par[1])*par[0]*TMath::Log(x) + 1- TMath::Power(3, par[1])*par[0]*TMath::Log(5.964/*6.1*/);
   else return 1+par[0]*TMath::Power(3, par[1])*(x-TMath::Power(5.964/*6.1*/,1./3));
   //else return 1+TMath::Power(par[0],3)*(x-TMath::Power(5.964,1./3));
}

double MinFunc_om(int &npar, double *gin, double *par, int iflag)
{
  
  //calculate chisquare
   double chisq = 0;
   for (int i=0; i<totpoints_om; i++) {
     double delta  = (y_vals_om[i]-FuncForm_om(&x_vals_om[i],par))/y_errs_om[i];
     chisq += delta*delta;
   }
   return chisq;
  
}

double FuncForm_xi(Double_t *xp, Double_t *par) 
{
   Double_t x=*xp;
   //return 1+par[0]*TMath::Power(x,2*par[1]);
   //return 1./TMath::Power(5.9,2*par[0])*TMath::Power(x,2*par[0]);
   if(!Cubrootcheck) return TMath::Power(2, par[1])*par[0]*TMath::Log(x) + 1- TMath::Power(2, par[1])*par[0]*TMath::Log(5.964/*6.1*/);
   else return 1+par[0]*TMath::Power(2, par[1])*(x-TMath::Power(5.964/*6.1*/,1./3));
   //else return 1+TMath::Power(par[0],2)*(x-TMath::Power(5.964,1./3));
}

double MinFunc_xi(int &npar, double *gin, double *par, int iflag)
{

  //calculate chisquare
   double chisq = 0;
   for (int i=0; i<totpoints_xi; i++) {
     double delta  = (y_vals_xi[i]-FuncForm_xi(&x_vals_xi[i],par))/y_errs_xi[i];
     chisq += delta*delta;
   }
   return chisq;
  
}

double FuncForm_la(Double_t *xp, Double_t *par) 
{
   Double_t x=*xp;
   //return 1+par[0]*TMath::Power(x,1*par[1]);
   //return 1./TMath::Power(5.9,1*par[0])*TMath::Power(x,1*par[0]);
   if(!Cubrootcheck) return TMath::Power(1, par[1])*par[0]*TMath::Log(x) + 1- TMath::Power(1, par[1])*par[0]*TMath::Log(5.964/*6.1*/);
   else return 1+par[0]*TMath::Power(1, par[1])*(x-TMath::Power(5.964/*6.1*/,1./3));
   //else return 1+TMath::Power(par[0],1)*(x-TMath::Power(5.964,1./3));
}

double MinFunc_la(int &npar, double *gin, double *par, int iflag)
{
  
  //calculate chisquare
   double chisq = 0;
   for (int i=0; i<totpoints_la; i++) {
     double delta  = (y_vals_la[i]-FuncForm_la(&x_vals_la[i],par))/y_errs_la[i];
     chisq += delta*delta;
   }
   return chisq;
  
}

double FuncForm_k0(Double_t *xp, Double_t *par) 
{
   Double_t x=*xp;
   //return 1+par[0]*TMath::Power(x,1*par[1]);
   //return 1./TMath::Power(5.9,1*par[0])*TMath::Power(x,1*par[0]);
   if(!Cubrootcheck) return TMath::Power(1, par[1])*par[0]*TMath::Log(x) + 1- TMath::Power(1, par[1])*par[0]*TMath::Log(5.964/*6.1*/);
   else return 1+par[0]*TMath::Power(1, par[1])*(x-TMath::Power(5.964/*6.1*/,1./3));
   //else return 1+TMath::Power(par[0],1)*(x-TMath::Power(5.964,1./3));
}

double MinFunc_k0(int &npar, double *gin, double *par, int iflag)
{
  
  //calculate chisquare
   double chisq = 0;
   for (int i=0; i<totpoints_k0; i++) {
     double delta  = (y_vals_k0[i]-FuncForm_k0(&x_vals_k0[i],par))/y_errs_k0[i];
     chisq += delta*delta;
   }
   return chisq;
  
}

double FuncForm_p(Double_t *xp, Double_t *par) 
{
   Double_t x=*xp;
   return par[0];
//    return par[0]+par[1]*x;
}

double MinFunc_p(int &npar, double *gin, double *par, int iflag)
{
  
  //calculate chisquare
   double chisq = 0;
   for (int i=0; i<totpoints_p; i++) {
     double delta  = (y_vals_p[i]-FuncForm_p(&x_vals_p[i],par))/y_errs_p[i];
     chisq += delta*delta;
   }
   return chisq;
  
}

void TotalFunc(Int_t &npar, Double_t *gin, Double_t &f, Double_t *par, Int_t iflag){
  f = MinFunc_om(npar,gin,par, iflag)+MinFunc_xi(npar,gin,par, iflag)+MinFunc_la(npar,gin,par, iflag)+MinFunc_k0(npar,gin,par, iflag)/*+MinFunc_p(npar,gin,par, iflag)*/;
}

void MinuitFit(bool isCubicRootx=kFALSE){
  
  SetDatapoints(isCubicRootx);
  
  const int npars = 2;
  //const int npars = 1;
  TMinuit *gMinuit = new TMinuit(npars);
  gMinuit->SetFCN(TotalFunc);
  gMinuit->SetPrintLevel(3);
   Double_t arglist[10];
   Int_t ierflg = 0;

   arglist[0] = 1;
   //gMinuit->mnexcm("SET ERR", arglist ,1,ierflg);

  // Set starting values and step sizes for parameters
   static Double_t vstart[npars] = {0.5, 2.};
   static Double_t step[npars]   = {0.01, 0.01};
   //static Double_t vstart[npars] = {0.5};
   //static Double_t step[npars]   = {0.01};
   gMinuit->mnparm(0, "a", vstart[0], step[0], 0,0,ierflg);
   gMinuit->mnparm(1, "b", vstart[1], step[1], 0,0,ierflg);

   //gMinuit->FixParameter(1);

   
  // Now ready for minimization step
   arglist[0] = 500;
   arglist[1] = 1.;
   gMinuit->mnexcm("MIGRAD", arglist ,2,ierflg);
  
   Double_t amin,edm,errdef;
   Int_t nvpar,nparx,icstat;
   gMinuit->mnstat(amin,edm,errdef,nvpar,nparx,icstat);
   printf("chi2 = %.2f\n",amin);
   printf("ndf = %d\n", totpoints_om + totpoints_xi + totpoints_la + totpoints_k0 - npars);
   printf("Nom = %d\n", totpoints_om);
   printf("Nxi = %d\n", totpoints_xi);
   printf("Nla = %d\n", totpoints_la);
   printf("Nk0 = %d\n", totpoints_k0);
   Int_t iuext;
   TString chnam;   // The name of the parameter
   Double_t val;    // The current (external) value of the parameter 
   Double_t errl;   // The current estimate of the parameter uncertainty  
   Double_t xlolim; // The lower bound (or zero if no limits)
   Double_t xuplim; // The upper bound (or zero if no limits)
   Int_t iuint;     // The internal parameter number 
   Int_t i = 0;
   //Double_t currentPar[npars] = {0,0};
   Double_t currentPar[npars] = {0};
   for (i=0; i< npars;i++) {
      gMinuit->mnpout(i, chnam, currentPar[i], errl, xlolim, xuplim, iuint);
   }
   //draw funcs
    TF1 *fun_1=new TF1("fun_1",FuncForm_om,/*5.964*/0,100,2); 	
    //fun_1->SetNpx(5000);
    fun_1->SetLineColor(kBlack);
    fun_1->SetLineWidth(3);
    fun_1->SetLineStyle(2);
    fun_1->SetParameters(currentPar);
    fun_1->Draw("same");
    TF1 *fun_2=new TF1("fun_2",FuncForm_xi,/*5.964*/0,100,2); 	
    //fun_2->SetNpx(5000);
    fun_2->SetLineColor(kGreen+2);
    fun_2->SetLineWidth(3);
    fun_2->SetLineStyle(2);
    fun_2->SetParameters(currentPar);
    fun_2->Draw("same");
    TF1 *fun_3=new TF1("fun_3",FuncForm_la,/*5.964*/0,100,2); 	
    //fun_3->SetNpx(5000);
    fun_3->SetLineColor(kBlue);
    fun_3->SetLineWidth(3);
    fun_3->SetLineStyle(2);
    fun_3->SetParameters(currentPar);
    fun_3->Draw("same");
    TF1 *fun_4=new TF1("fun_4",FuncForm_k0,/*5.964*/0,100,2); 	
    //fun_4->SetNpx(5000);
    fun_4->SetLineColor(kRed+1);
    fun_4->SetLineWidth(3);
    fun_4->SetLineStyle(3);
    fun_4->SetParameters(currentPar);
    fun_4->Draw("same");
    
    TF1 *fun_5=new TF1("fun_5",FuncForm_p,0,100,2); 	
    //fun_5->SetNpx(5000);
    fun_5->SetParameters(currentPar);
    fun_5->SetLineColor(kMagenta);
    fun_5->SetLineWidth(1);
    fun_5->SetLineStyle(2);
    fun_5->Draw("same");

    /* R+suppress
  TLegend *leg_fit = new TLegend(0.47,0.19,0.87,0.29);
  leg_fit->SetFillColor(0);
  leg_fit->SetLineWidth(0);
  leg_fit->SetLineColor(0);
  leg_fit->SetTextFont(42);
  leg_fit->SetTextSize(0.04/0.5475/1.55);
  //leg_fit->AddEntry(fun_1,"#scale[0.9]{#splitline{Global fit y=S^{2}[#it{a}log(x)+#it{b}]}{forcing y=1 in x_{0-100%}}}","l");
  leg_fit->AddEntry(fun_1,"#scale[0.9]{Global fit}","l");
  //  leg_fit->Draw();
  */
  
}

void SetDatapoints(bool isCubicRootx=kFALSE){
  
  //first I set datapoints
  int npoints_pp_om = gr[lom][lpp][lstat]->GetN();
  int npoints_ppb_om= gr[lom][lppb][lstat]->GetN();
  totpoints_om = /*npoints_pp_om+npoints_ppb_om*/0;
  double xerrbuild_stat=0, yerrbuild_stat=0;
  double xerrbuild_syst=0, yerrbuild_syst=0;
  for(int i=0; i<npoints_pp_om; i++){
    gr[lom][lpp][lstat]->GetPoint(i,x_vals_om[totpoints_om],y_vals_om[totpoints_om]);
    xerrbuild_stat=gr[lom][lpp][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lom][lpp][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lom][lpp][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lom][lpp][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_om[totpoints_om] = TMath::Power(x_vals_om[totpoints_om],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_om[totpoints_om],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_om[totpoints_om],-2./3);
//     }
    x_errs_om[totpoints_om] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_om[totpoints_om] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_om[totpoints_om],x_errs_om[totpoints_om],y_vals_om[totpoints_om],y_errs_om[totpoints_om]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_om++;
  }
  for(int i=0; i<npoints_ppb_om; i++){
    gr[lom][lppb][lstat]->GetPoint(i,x_vals_om[totpoints_om],y_vals_om[totpoints_om]);
    //    if(x_vals_om[totpoints_om]<3.) continue;
    xerrbuild_stat=gr[lom][lppb][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lom][lppb][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lom][lppb][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lom][lppb][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_om[totpoints_om] = TMath::Power(x_vals_om[totpoints_om],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_om[totpoints_om],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_om[totpoints_om],-2./3);
//     }
    x_errs_om[totpoints_om] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_om[totpoints_om] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_om[totpoints_om],x_errs_om[totpoints_om],y_vals_om[totpoints_om],y_errs_om[totpoints_om]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_om++;
  } 
//   x_vals_om[totpoints_om] = 5.964; y_vals_om[totpoints_om] = 1.;
//   x_errs_om[totpoints_om] = 0.2; y_errs_om[totpoints_om] = 0.1;
//   totpoints_om++;
  
  
   int npoints_pp_xi = gr[lxi][lpp][lstat]->GetN();
  int npoints_ppb_xi= gr[lxi][lppb][lstat]->GetN();

  totpoints_xi = /*npoints_pp_xi+npoints_ppb_xi*/0;
  for(int i=0; i<npoints_pp_xi; i++){
    gr[lxi][lpp][lstat]->GetPoint(i,x_vals_xi[totpoints_xi],y_vals_xi[totpoints_xi]);
    //    if(x_vals_xi[totpoints_xi]<3.) continue;
    xerrbuild_stat=gr[lxi][lpp][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lxi][lpp][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lxi][lpp][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lxi][lpp][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_xi[totpoints_xi] = TMath::Power(x_vals_xi[totpoints_xi],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_xi[totpoints_xi],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_xi[totpoints_xi],-2./3);
//     }
    x_errs_xi[totpoints_xi] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_xi[totpoints_xi] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_xi[totpoints_xi],x_errs_xi[totpoints_xi],y_vals_xi[totpoints_xi],y_errs_xi[totpoints_xi]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_xi++;
  }
  for(int i=0; i<npoints_ppb_xi; i++){
    gr[lxi][lppb][lstat]->GetPoint(i,x_vals_xi[totpoints_xi],y_vals_xi[totpoints_xi]);
    //    if(x_vals_xi[totpoints_xi]<3.) continue;
    xerrbuild_stat=gr[lxi][lppb][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lxi][lppb][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lxi][lppb][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lxi][lppb][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_xi[totpoints_xi] = TMath::Power(x_vals_xi[totpoints_xi],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_xi[totpoints_xi],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_xi[totpoints_xi],-2./3);
//     }
    x_errs_xi[totpoints_xi] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_xi[totpoints_xi] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_xi[totpoints_xi],x_errs_xi[totpoints_xi],y_vals_xi[totpoints_xi],y_errs_xi[totpoints_xi]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_xi++;
  } 
//   x_vals_xi[totpoints_xi] = 5.964; y_vals_xi[totpoints_xi] = 1.;
//   x_errs_xi[totpoints_xi] = 0.2; y_errs_xi[totpoints_xi] = 0.1;
//   totpoints_xi++;
  

   
  int npoints_pp_la = gr[llam][lpp][lstat]->GetN();
  int npoints_ppb_la= gr[llam][lppb][lstat]->GetN();
  totpoints_la = /*npoints_pp_la+npoints_ppb_la*/0;
  for(int i=0; i<npoints_pp_la; i++){
    gr[llam][lpp][lstat]->GetPoint(i,x_vals_la[totpoints_la],y_vals_la[totpoints_la]);
    //    if(x_vals_la[totpoints_la]<3.) continue;
    xerrbuild_stat=gr[llam][lpp][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[llam][lpp][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[llam][lpp][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[llam][lpp][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_la[totpoints_la] = TMath::Power(x_vals_la[totpoints_la],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_la[totpoints_la],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_la[totpoints_la],-2./3);
//     }
    x_errs_la[totpoints_la] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_la[totpoints_la] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_la[totpoints_la],x_errs_la[totpoints_la],y_vals_la[totpoints_la],y_errs_la[totpoints_la]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_la++;
  }
  for(int i=0; i<npoints_ppb_la; i++){
    gr[llam][lppb][lstat]->GetPoint(i,x_vals_la[totpoints_la],y_vals_la[totpoints_la]);
    //    if(x_vals_la[totpoints_la]<3.) continue;
    xerrbuild_stat=gr[llam][lppb][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[llam][lppb][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[llam][lppb][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[llam][lppb][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_la[totpoints_la] = TMath::Power(x_vals_la[totpoints_la],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_la[totpoints_la],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_la[totpoints_la],-2./3);
//     }
    x_errs_la[totpoints_la] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_la[totpoints_la] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_la[totpoints_la],x_errs_la[totpoints_la],y_vals_la[totpoints_la],y_errs_la[totpoints_la]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_la++;
  } 
//   x_vals_la[totpoints_la] = 5.964; y_vals_la[totpoints_la] = 1.;
//   x_errs_la[totpoints_la] = 0.2; y_errs_la[totpoints_la] = 0.1;
//   totpoints_la++;
  
   
  int npoints_pp_k0 = gr[lk0s][lpp][lstat]->GetN();
  int npoints_ppb_k0= gr[lk0s][lppb][lstat]->GetN();
  totpoints_k0 = /*npoints_pp_k0+npoints_ppb_k0*/0;
  for(int i=0; i<npoints_pp_k0; i++){
    gr[lk0s][lpp][lstat]->GetPoint(i,x_vals_k0[totpoints_k0],y_vals_k0[totpoints_k0]);
    //    if(x_vals_k0[totpoints_k0]<3.) continue;
    xerrbuild_stat=gr[lk0s][lpp][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lk0s][lpp][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lk0s][lpp][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lk0s][lpp][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_k0[totpoints_k0] = TMath::Power(x_vals_k0[totpoints_k0],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_k0[totpoints_k0],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_k0[totpoints_k0],-2./3);
//     }
    x_errs_k0[totpoints_k0] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_k0[totpoints_k0] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_k0[totpoints_k0],x_errs_k0[totpoints_k0],y_vals_k0[totpoints_k0],y_errs_k0[totpoints_k0]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_k0++;
  }
  for(int i=0; i<npoints_ppb_k0; i++){
    gr[lk0s][lppb][lstat]->GetPoint(i,x_vals_k0[totpoints_k0],y_vals_k0[totpoints_k0]);
    //    if(x_vals_k0[totpoints_k0]<3.) continue;
    xerrbuild_stat=gr[lk0s][lppb][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lk0s][lppb][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lk0s][lppb][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lk0s][lppb][lsyst_unc]->GetErrorY(i);
//     if(isCubicRootx){
//       x_vals_k0[totpoints_k0] = TMath::Power(x_vals_k0[totpoints_k0],1./3);
//       xerrbuild_stat=xerrbuild_stat/3*TMath::Power(x_vals_k0[totpoints_k0],-2./3);
//       xerrbuild_syst=xerrbuild_syst/3*TMath::Power(x_vals_k0[totpoints_k0],-2./3);
//     }
    x_errs_k0[totpoints_k0] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_k0[totpoints_k0] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_k0[totpoints_k0],x_errs_k0[totpoints_k0],y_vals_k0[totpoints_k0],y_errs_k0[totpoints_k0]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_k0++;
  } 
//   x_vals_k0[totpoints_k0] = 5.964; y_vals_k0[totpoints_k0] = 1.;
//   x_errs_k0[totpoints_k0] = 0.2; y_errs_k0[totpoints_k0] = 0.1;
//   totpoints_k0++;
  
 return;
    
  int npoints_pp_p = gr[lp][lpp][lstat]->GetN();
  int npoints_ppb_p= gr[lp][lppb][lstat]->GetN();
  totpoints_p = /*npoints_pp_p+npoints_ppb_p*/0;
  for(int i=0; i<npoints_pp_p; i++){
    gr[lp][lpp][lstat]->GetPoint(i,x_vals_p[totpoints_p],y_vals_p[totpoints_p]);
    //    if(x_vals_p[totpoints_p]<3.) continue;
    xerrbuild_stat=gr[lp][lpp][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lp][lpp][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lp][lpp][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lp][lpp][lsyst_unc]->GetErrorY(i);
    x_errs_p[totpoints_p] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_p[totpoints_p] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_p[totpoints_p],x_errs_p[totpoints_p],y_vals_p[totpoints_p],y_errs_p[totpoints_p]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_p++;
  }
  for(int i=0; i<npoints_ppb_p; i++){
    gr[lp][lppb][lstat]->GetPoint(i,x_vals_p[totpoints_p],y_vals_p[totpoints_p]);
    //    if(x_vals_p[totpoints_p]<3.) continue;
    xerrbuild_stat=gr[lp][lppb][lstat]->GetErrorX(i);
    yerrbuild_stat=gr[lp][lppb][lstat]->GetErrorY(i);
    xerrbuild_syst=gr[lp][lppb][lsyst_unc]->GetErrorX(i);
    yerrbuild_syst=gr[lp][lppb][lsyst_unc]->GetErrorY(i);
    x_errs_p[totpoints_p] = TMath::Sqrt(xerrbuild_stat*xerrbuild_stat+xerrbuild_syst*xerrbuild_syst);
    y_errs_p[totpoints_p] = TMath::Sqrt(yerrbuild_stat*yerrbuild_stat+yerrbuild_syst*yerrbuild_syst);
    printf("%.4f+%.4f  -  %.4f pm %.4f     %.4f pm %.4f\n",yerrbuild_stat,yerrbuild_syst,x_vals_p[totpoints_p],x_errs_p[totpoints_p],y_vals_p[totpoints_p],y_errs_p[totpoints_p]);
    xerrbuild_stat=0; yerrbuild_stat=0;
    xerrbuild_syst=0; yerrbuild_syst=0;
    totpoints_p++;
  } 
//   x_vals_p[totpoints_p] = 5.964; y_vals_p[totpoints_p] = 1.;
//   x_errs_p[totpoints_p] = 0.1; y_errs_p[totpoints_p] = 0.01;
//   totpoints_p++;
  

  
  
  
}


void ScaleGraph(int part, float nscale){
  
  if((nscale-1)<1e-5) return;
  
  double x_point = 0;
  double x_error = 0;
  double y_point = 0;
  double y_error = 0;
  
  for(int i_system=0; i_system<n_systems; i_system++){
    for  (int i_htype=0; i_htype<3; i_htype++){
      if(!presence[part][i_system][i_htype]) continue;
      for(int ipoint=0; ipoint<gr[part][i_system][i_htype]->GetN(); ipoint++){
        gr[part][i_system][i_htype]->GetPoint(ipoint,x_point,y_point);
        x_error = gr[part][i_system][i_htype]->GetErrorX(ipoint);
        y_error = gr[part][i_system][i_htype]->GetErrorY(ipoint);
	gr[part][i_system][i_htype]->SetPoint(ipoint,x_point,y_point*nscale);
        if(!(part==llam && i_system==lpbpb)) gr[part][i_system][i_htype]->SetPointError(ipoint,x_error,y_error*nscale);
      }
    }    
  }
  
}

