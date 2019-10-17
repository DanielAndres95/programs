// Example of an histogram of a MC sample
//based on the example given
// general header files:
#include "general_headers.h"



//inline bool ExistTest(const std::string& name) {
//   struct stat buffer;
//    return (stat (name.c_str(), &buffer) == 0);
//}

void data(){
    int NContour = 6;
    int EventToDisplay= 6;

    
    //Define some necessary constants (we don't know the size of the arrays stored in the ROOT file)\
    
#include "global.h"
    // load the root file, note that we do not want the loop file here
    TFile *rFile = new TFile("/.lsUsers/dan/CIEMAT/ROOT/ROOT_try/0-RecoFull-Parser.root", "READ");
    TTree *rTree = (TTree*)rFile->Get("analysistree/anatree"); //should always be the same
    int NEntries = (int)rTree->GetEntries();
    
# include"address.h"
    
    
    
    /////////// the new tree//////////
    
    ///variables for the new tree/// We use the global.h
    int NChannel = NumberOfChannels;
    int NTicks = NMaxNumberOfTicksInAllChannels;
    
    TFile* data = new TFile("data.root","RECREATE");
    TTree *t= new TTree("t","a simple Tree");
    
    t->Branch("NChannel",&NChannel,"NChannel/I");
    t->Branch("NTicks",&NTicks,"NTicks/I");
    t->Branch("Channel",&tRecoWaveform_Channel,"tRecoWaveform_Channel[NChannel]/I");
    t->Branch("Tick",&tRecoWaveform_Tick,"tRecoWaveform_Tick[NTicks]/I");
    t->Branch("ADC",&tRecoWaveform_ADC,"tRecoWaveform_ADC[NTicks]/F");
    for(int i=0; i<NEntries; i++) //Event loop
    {
        rTree->GetEntry(i);
        //we can also include some filters here in order to purify the data
        t->Fill();
    }
    t->Write();
    data->Close();
}



