#include <TTree.h>
#include <TFile.h>

class pos : public TNamed
{
  public:
    pos(){x=0;y=0;};
    pos(const char* name, const char* title)
      :x(0),y(0),TNamed(name,title){;};
    ~pos(){;};

    Float_t x;
    Float_t y;
};
class hit : public TNamed
{
  public:
    hit(){x=0;y=0;};
    hit(const char* name, const char* title)
      :firstPos(0),secondPos(0),TNamed(name,title){;};
    ~hit(){;};

    pos* firstPos;
    pos* secondPos;
};
class vertex : public TNamed
{
  public:
    vertex(){x=0;y=0;};
    vertex(const char* name, const char* title)
      :x(0),y(0),TNamed(name,title){;};
    ~vertex(){;};

    Float_t x;
    Float_t y;
};
class event : public TNamed
{
  public:
    event(){oneVertex=0;oneHit=0;};
    event(const char* name, const char* title)
      :oneVertex(0),oneHit(0),TNamed(name,title){;};
    ~event(){;};

    vertex* oneVertex;
    hit* oneHit;
};

splitBranch()
{
  pos* pos1 = new pos();
  pos1->x =3;
  pos1->y =3;

  pos* pos2 = new pos();
  pos2->x =8;
  pos2->y =5;

  hit* aHit = new hit();
  vertex* aVertex = new vertex();

  aHit->firstPos = pos1;
  aHit->secondPos = pos2;

  aVertex->x = 5;
  aVertex->y = 8;

  event* aEvent = new event();
  aEvent->oneVertex = aVertex;
  aEvent->oneHit = aHit;

  TTree tree("tree","a test tree");

  tree.Branch("nosplit branch", "event", &aEvent,32000,0);
  tree.Branch("split level 1", "event", &aEvent,32000,1);
  tree.Branch("split level 2", "event", &aEvent,32000,2);
  tree.Branch("split level 3", "event", &aEvent,32000,3);

  tree.Fill();

  TFile out("test.root","recreate");
  tree.Write();
  out.Close();

  TFile in("test.root","read");
  TTree* inTree=new TTree();
  in.GetObject("tree",&inTree);

  if(inTree == 0)
    cout<<"wrong!"<<endl;
  else
    inTree->Show();
}

