{
   TCanvas* c1 = new TCanvas();
   c1->Divide(1,3,0.0001,0.0001);

   TH1F *h1 = new TH1F("h1","h1",300,0,300);
   h1->GetXaxis()->SetTimeFormat("#splitline{%y-%m-%d}{%H-%M-%S}");
   h1->GetXaxis()->SetTimeDisplay(kTRUE);

   c1->cd(1);
   h1->Draw();

   TH1F *h2 = h1->Clone();
   TDatime now(time(NULL));
   h2->GetXaxis()->SetTimeOffset(now.Convert());

   c1->cd(2);
   h2->Draw();

   TH1F *h3 = h1->Clone();
   TDatime now(time(NULL));
   h3->GetXaxis()->SetTimeOffset(now.Convert(),"GMT");

   c1->cd(3);
   h3->Draw();
}
