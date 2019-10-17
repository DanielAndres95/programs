//Reco waveforms
int tRun;
int tSubrun;
int tEventNumberInRun;
int tEventTimeSeconds;
int tEventTimeNanoseconds;
char tIsData;

//Reco waveforms
int tRecoWaveform_NumberOfChannels;
int tRecoWaveform_NumberOfTicksInAllChannels;
int tRecoWaveform_Channel[NumberOfChannels];
int tRecoWaveform_NTicks[NumberOfChannels];
int tRecoWaveform_Tick[NMaxNumberOfTicksInAllChannels];
float tRecoWaveform_ADC[NMaxNumberOfTicksInAllChannels];

//Hit parameters
int tNumberOfHits;
float tHit_ChargeIntegral[NMaxHitsPerEvent];
short tHit_TrackID[NMaxHitsPerEvent];
short tHit_View[NMaxHitsPerEvent];

//Cluster parameters
short tNumberOfClusters;
short tCluster_NumberOfHits[NMaxClustersPerEvent];

//Track parameters
short tNumberOfTracks;

short tTrackID[NMaxTracksPerEvent];
short tTrack_NumberOfHits[NMaxTracksPerEvent];
float tTrack_Length_StraightLine[NMaxTracksPerEvent];
float tTrack_StartPoint_X[NMaxHitsPerEvent];
float tTrack_StartPoint_Y[NMaxHitsPerEvent];
float tTrack_StartPoint_Z[NMaxHitsPerEvent];
float tTrack_StartPoint_DistanceToBoundary[NMaxHitsPerEvent];
float tTrack_EndPoint_X[NMaxHitsPerEvent];
float tTrack_EndPoint_Y[NMaxHitsPerEvent];
float tTrack_EndPoint_Z[NMaxHitsPerEvent];
float tTrack_EndPoint_DistanceToBoundary[NMaxHitsPerEvent];
float tTrack_StartDirection_Theta[NMaxTracksPerEvent];
float tTrack_StartDirection_Phi[NMaxTracksPerEvent];
float tTrack_StartDirection_X[NMaxTracksPerEvent];
float tTrack_StartDirection_Y[NMaxTracksPerEvent];
float tTrack_StartDirection_Z[NMaxTracksPerEvent];
float tTrack_EndDirection_Theta[NMaxTracksPerEvent];
float tTrack_EndDirection_Phi[NMaxTracksPerEvent];
float tTrack_EndDirection_X[NMaxTracksPerEvent];
float tTrack_EndDirection_Y[NMaxTracksPerEvent];
float tTrack_EndDirection_Z[NMaxTracksPerEvent];

float tTrack_PitchInViews[NMaxTracksPerEventTimesNViews];
short tTrack_NumberOfHitsPerView[NMaxTracksPerEventTimesNViews];

float tTrack_Hit_X[NMaxHitsPerEvent];
float tTrack_Hit_Y[NMaxHitsPerEvent];
float tTrack_Hit_Z[NMaxHitsPerEvent];
float tTrack_Hit_ds_LocalTrackDirection[NMaxHitsPerEvent];
float tTrack_Hit_ds_3DPosition[NMaxHitsPerEvent];
short tTrack_Hit_View[NMaxHitsPerEvent];
float tTrack_Hit_ChargeSummedADC[NMaxHitsPerEvent];
float tTrack_Hit_ChargeIntegral[NMaxHitsPerEvent];

//Link branches in the ROOT file with parameters
//Metadata
rTree->SetBranchAddress("Run",&tRun);
rTree->SetBranchAddress("Subrun",&tSubrun);
rTree->SetBranchAddress("EventNumberInRun",&tEventNumberInRun);
rTree->SetBranchAddress("EventTimeSeconds",&tEventTimeSeconds);
rTree->SetBranchAddress("EventTimeNanoseconds",&tEventTimeNanoseconds);
rTree->SetBranchAddress("IsData",&tIsData);

//Reco waveforms
rTree->SetBranchAddress("RecoWaveforms_NumberOfChannels",&tRecoWaveform_NumberOfChannels);
rTree->SetBranchAddress("RecoWaveform_NumberOfTicksInAllChannels",&tRecoWaveform_NumberOfTicksInAllChannels);
rTree->SetBranchAddress("RecoWaveform_Channel",&tRecoWaveform_Channel);
rTree->SetBranchAddress("RecoWaveform_NTicks",&tRecoWaveform_NTicks);
rTree->SetBranchAddress("RecoWaveform_Tick",&tRecoWaveform_Tick);
rTree->SetBranchAddress("RecoWaveform_ADC",&tRecoWaveform_ADC);

//Hit parameters
rTree->SetBranchAddress("NumberOfHits",&tNumberOfHits);
rTree->SetBranchAddress("Hit_ChargeIntegral",&tHit_ChargeIntegral);
rTree->SetBranchAddress("Hit_TrackID",&tHit_TrackID);
rTree->SetBranchAddress("Hit_View",&tHit_View);
rTree->SetBranchAddress("Hit_TrackID",&tHit_TrackID);

//Cluster parameters
rTree->SetBranchAddress("NumberOfClusters",&tNumberOfClusters);
rTree->SetBranchAddress("Cluster_NumberOfHits",&tCluster_NumberOfHits);

//Track parameters
rTree->SetBranchAddress("NumberOfTracks",&tNumberOfTracks);
rTree->SetBranchAddress("TrackID",&tTrackID);
rTree->SetBranchAddress("Track_NumberOfHits",&tTrack_NumberOfHits);
rTree->SetBranchAddress("Track_Length_StraightLine",&tTrack_Length_StraightLine);

rTree->SetBranchAddress("Track_StartPoint_X",&tTrack_StartPoint_X);
rTree->SetBranchAddress("Track_StartPoint_Y",&tTrack_StartPoint_Y);
rTree->SetBranchAddress("Track_StartPoint_Z",&tTrack_StartPoint_Z);
rTree->SetBranchAddress("Track_StartPoint_DistanceToBoundary",&tTrack_StartPoint_DistanceToBoundary);
rTree->SetBranchAddress("Track_EndPoint_X",&tTrack_EndPoint_X);
rTree->SetBranchAddress("Track_EndPoint_Y",&tTrack_EndPoint_Y);
rTree->SetBranchAddress("Track_EndPoint_Z",&tTrack_EndPoint_Z);
rTree->SetBranchAddress("Track_EndPoint_DistanceToBoundary",&tTrack_EndPoint_DistanceToBoundary);

rTree->SetBranchAddress("Track_StartDirection_Theta",&tTrack_StartDirection_Theta);
rTree->SetBranchAddress("Track_StartDirection_Phi",&tTrack_StartDirection_Phi);
rTree->SetBranchAddress("Track_StartDirection_X",&tTrack_StartDirection_X);
rTree->SetBranchAddress("Track_StartDirection_Y",&tTrack_StartDirection_Y);
rTree->SetBranchAddress("Track_StartDirection_Z",&tTrack_StartDirection_Z);
rTree->SetBranchAddress("Track_EndDirection_Theta",&tTrack_EndDirection_Theta);
rTree->SetBranchAddress("Track_EndDirection_Phi",&tTrack_EndDirection_Phi);
rTree->SetBranchAddress("Track_EndDirection_X",&tTrack_EndDirection_X);
rTree->SetBranchAddress("Track_EndDirection_Y",&tTrack_EndDirection_Y);
rTree->SetBranchAddress("Track_EndDirection_Z",&tTrack_EndDirection_Z);


rTree->SetBranchAddress("Track_PitchInViews",&tTrack_PitchInViews);
rTree->SetBranchAddress("Track_NumberOfHitsPerView",&tTrack_NumberOfHitsPerView);

rTree->SetBranchAddress("Track_Hit_X",&tTrack_Hit_X);
rTree->SetBranchAddress("Track_Hit_Y",&tTrack_Hit_Y);
rTree->SetBranchAddress("Track_Hit_Z",&tTrack_Hit_Z);
rTree->SetBranchAddress("Track_Hit_ds_LocalTrackDirection",&tTrack_Hit_ds_LocalTrackDirection);
rTree->SetBranchAddress("Track_Hit_ds_3DPosition",&tTrack_Hit_ds_3DPosition);
rTree->SetBranchAddress("Track_Hit_View",&tTrack_Hit_View);
rTree->SetBranchAddress("Track_Hit_ChargeSummedADC",&tTrack_Hit_ChargeSummedADC);
rTree->SetBranchAddress("Track_Hit_ChargeIntegral",&tTrack_Hit_ChargeIntegral);
