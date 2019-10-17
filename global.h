// The global variables are defined in this file
const int NumberOfChannels=1280;
const int NumberOfChannelsView0=320;
const int NumberOfChannelsView1=960;
const int NumberOfTicks=1667;
const int ADCRange=4096;
const int NMaxNumberOfTicksInAllChannels = NumberOfChannels*NumberOfTicks;

const int NMaxHitsPerEvent=100000;
const int NMaxClustersPerEvent=10000;
const int NMaxTracksPerEvent=1000;
const int NViews=2;
const int NMaxTracksPerEventTimesNViews=NMaxTracksPerEvent*NViews;

int NChannelView0=320;
int NChannelView1=960;

double driftvelocity=0.16*1000;  //cm/mus

double ADC2CHARGE = 67.; //to be confirmed
double ADC2CHARGEView0 = 67.; //to be confirmed
double ADC2CHARGEView1 = 67.; //to be confirmed

//Track selection cuts
int TrackXUpperCut=48; //cm
int TrackXLowerCut=-48; //cm
int TrackZLowerCut=52; //cm
int TrackZUpperCut=248; //cm

int dQdsBins = 100;

int dQdsRange=5000/ADC2CHARGE;
