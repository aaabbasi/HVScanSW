{
  std::string macroPath = gROOT->GetMacroPath();
  macroPath += ":";
  macroPath += gSystem->ExpandPathName("$CMSSW_RELEASE_BASE/src/PhysicsTools/Utilities/macros");
  macroPath += ":";
  macroPath += gSystem->ExpandPathName("$CMSSW_BASE/src/PhysicsTools/Utilities/macros");
  gROOT->SetMacroPath(macroPath.c_str());
  gSystem->AddIncludePath("$CMSSW_RELEASE_BASE/src");
  gSystem->AddIncludePath("$CMSSW_BASE/src");
//  gROOT->ProcessLine(".L setTDRStyle2.C");
  gROOT->ProcessLine(".L tdrStyle.C");
//  gSystem->Load("libFWCoreFWLite");
//  AutoLibraryLoader::enable();
  setTDRStyle();
}
