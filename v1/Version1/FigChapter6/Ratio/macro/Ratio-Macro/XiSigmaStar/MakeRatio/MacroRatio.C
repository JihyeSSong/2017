// this is macro to get the ratio of integrated yield
void MacroRatio(){

    //XiStar
   // double XiStardNdY[4] = {26.8, 17.6, 10.7, 3.7}; // No VXS
   // double XiStardNdY_stat[4] = {0.6, 0.5, 0.4, 0.1};
   // double XiStardNdY_sys[4] = {2.7, 2.0, 1.3, 0.4};
    
    
 //   double XiStardNdY[4] = {26.8, 17.6, 10.7, 3.4};
 //   double XiStardNdY_stat[4] = {0.6, 0.5, 0.4, 0.1};
 //   double XiStardNdY_sys[4] = {2.7, 2.0, 1.3, 0.5};
    
    double XiStardNdY[4] = {27.3, 17.7, 10.7, 3.6};
    double XiStardNdY_stat[4] = {0.6, 0.5, 0.3, 0.1};
   // double XiStardNdY_sys[4] = {2.8, 2.4, 1.6, 0.5};
    double XiStardNdY_sys[4] = {1.4, 1.6, 1.1, 0.3};//multiplicity dependent



    
    //Xi
    double XidNdY[4] = {90.5, 55.8, 37.1, 13.9};// (Xi^+ + Xi^-)/2.
    double XidNdY_stat[4] = {0.9, 0.5, 0.4, 0.2};
    double XidNdY_sys[4] = {6.6, 4.1, 2.9, 1.2};

    
    
    double XiStarToXi[4];
    double XiStarToXi_stat[4];
    double XiStarToXi_sys[4];

    for(int ixi=0; ixi<4; ixi++){
        XiStarToXi[ixi]=XiStardNdY[ixi]/XidNdY[ixi];
         XiStarToXi_stat[ixi] = sqrt(pow(XiStardNdY_stat[ixi]/XidNdY[ixi],2) + pow(XiStardNdY[ixi]*XidNdY_stat[ixi]/pow(XidNdY[ixi],2),2));
         XiStarToXi_sys[ixi] = sqrt(pow(XiStardNdY_sys[ixi]/XidNdY[ixi],2) + pow(XiStardNdY[ixi]*XidNdY_sys[ixi]/pow(XidNdY[ixi],2),2));
        cout<< "cent " << ixi << " ,   Xi*/Xi    = " <<XiStarToXi[ixi]<<endl;
        cout<< "cent " << ixi << " ,   Xi*/Xi  Stat    = " <<XiStarToXi_stat[ixi]<<endl;
        cout<< "cent " << ixi << " ,   Xi*/Xi  Sys     = " <<XiStarToXi_sys[ixi]<<endl;
    }
    

    
    //Pion
    double PiondNdY[4] = {16250.4, 10874.0, 7645.0, 3442.3};// (Pion^+ + Pion^-)/2.
    double PiondNdY_stat[4] = {6.9, 3.4, 2.9, 1.8};
    double PiondNdY_sys[4] = {779.0, 505.1, 354.1, 158.8};
    
    
    
    double XiStarToPion[4];
    double XiStarToPion_stat[4];
    double XiStarToPion_sys[4];
    
    for(int iPion=0; iPion<4; iPion++){
        XiStarToPion[iPion]=XiStardNdY[iPion]/PiondNdY[iPion];
        XiStarToPion_stat[iPion] = sqrt(pow(XiStardNdY_stat[iPion]/PiondNdY[iPion],2) + pow(XiStardNdY[iPion]*PiondNdY_stat[iPion]/pow(PiondNdY[iPion],2),2));
        XiStarToPion_sys[iPion] = sqrt(pow(XiStardNdY_sys[iPion]/PiondNdY[iPion],2) + pow(XiStardNdY[iPion]*PiondNdY_sys[iPion]/pow(PiondNdY[iPion],2),2));
        cout<< "cent " << iPion << " ,   Xi*/Pion    = " <<XiStarToPion[iPion]<<endl;
        cout<< "cent " << iPion << " ,   Xi*/Pion  Stat    = " <<XiStarToPion_stat[iPion]<<endl;
        cout<< "cent " << iPion << " ,   Xi*/Pion  Sys     = " <<XiStarToPion_sys[iPion]<<endl;
    }
    

    
    //Double ratio
    double RdNdY[4] = {0.00167996, 0.00162774, 0.00139961, 0.00104581};// Ratios .
    double RdNdY_stat[4] = {3.69291e-05, 4.59841e-05, 3.92449e-05, 2.90555e-05};
    double RdNdY_sys[4] = {0.000117931, 0.000165429, 0.000157814, 9.96138e-05};
    
    // pion in pp
    
    double RatioXiStarToPion[4];
    double RatioXiStarToPion_stat[4];
    double RatioXiStarToPion_sys[4];
    
    for(int ir=0; ir<4; ir++){
        RatioXiStarToPion[ir]=RdNdY[ir]/0.00114;
        RatioXiStarToPion_stat[ir] = sqrt(pow(RdNdY_stat[ir]/0.00114,2) + pow(RdNdY[ir]*1.55902004454342967e-05/pow(0.00114,2),2));
        RatioXiStarToPion_sys[ir] = sqrt(pow(RdNdY_sys[ir]/0.00114,2) + pow(RdNdY[ir]*8.90868596881959910e-05/pow(0.00114,2),2));
        cout<< "cent " << ir << " ,   Ratio Xi*/Pion to pp    = " <<RatioXiStarToPion[ir]<<endl;
        cout<< "cent " << ir << " ,   RatioXi*/Pion to pp Stat    = " <<RatioXiStarToPion_stat[ir]<<endl;
        cout<< "cent " << ir << " ,   RatioXi*/Pion to pp Sys     = " <<RatioXiStarToPion_sys[ir]<<endl;
    }

    
    
    
    
}
