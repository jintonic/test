{
	gROOT->Reset();

	TFile *f1 = new TFile("test.root","recreate");
	TH1F* h1 = new TH1F("h1","h1",100,0,100);
	h1->Fill(1);
	if (h1) {
		cout<<"before close"<<endl;
	}
	f1->Close();
	if (h1) {
		cout<<h1<<endl;
		cout<<"after close"<<endl;
	}
}
