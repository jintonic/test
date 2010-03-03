{
   TCanvas *c1 = new TCanvas("c1","c1",0,0,1200,800);

   cout<<"Canvas \t"<<"Left \t"<<"Bottom \t"<<"Right \t"<<"Top"<<endl;
   cout<<c1->GetName()<<" \t"
      <<c1->GetLeftMargin()<<" \t"
      <<c1->GetBottomMargin()<<" \t"
      <<c1->GetRightMargin()<<" \t"
      <<c1->GetTopMargin()<<endl;

//   c1->SetMargin(0.3,0.3,0.2,0.2);

   cout<<c1->GetName()<<" \t"
      <<c1->GetLeftMargin()<<" \t"
      <<c1->GetBottomMargin()<<" \t"
      <<c1->GetRightMargin()<<" \t"
      <<c1->GetTopMargin()<<endl;

   c1->Divide(3,2,0.00001,0.000001);
   //c1->Divide(3,2,0.0,0.0);

   cout<<"c1 div \t"
      <<c1->GetLeftMargin()<<" \t"
      <<c1->GetBottomMargin()<<" \t"
      <<c1->GetRightMargin()<<" \t"
      <<c1->GetTopMargin()<<endl;

   TH1F *h1 = new TH1F("h1","",100,-3,3);
   h1->FillRandom("gaus",10000);
   h1->SetTitle("Gaussian");
   h1->GetXaxis()->SetTitle("Energy [keV]");
   h1->GetYaxis()->SetTitle("Entries/ 1 keV");

   TLegend* leg = new TLegend(0.6, 0.7, 0.8, 0.8);
   leg->AddEntry(h1,"gaus","l");
   //leg->SetFillColor(0);
   //leg->SetTextFont(132);

   for (Int_t i=1; i<=6; i++){
      c1->cd(i);
      //gPad->SetMargin(0,0,0,0);
      //gPad->SetTopMargin(0);
      //gPad->SetRightMargin(0);
      h1->Draw();
      h1->Fit("gaus");
      leg->Draw();

      cout<<gPad->GetName()<<" \t"
      <<gPad->GetLeftMargin()<<" \t"
      <<gPad->GetBottomMargin()<<" \t"
      <<gPad->GetRightMargin()<<" \t"
      <<gPad->GetTopMargin()<<endl;
   }

   cout<<c1->GetName()<<" \t"
      <<c1->GetLeftMargin()<<" \t"
      <<c1->GetBottomMargin()<<" \t"
      <<c1->GetRightMargin()<<" \t"
      <<c1->GetTopMargin()<<endl;

 }
