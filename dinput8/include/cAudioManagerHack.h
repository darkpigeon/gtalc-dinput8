#pragma once

#include "vcclasses.h"

class cAudioManagerHack : public cAudioManager
{
public:
	static bool initialise();

	bool ProcessFrontEndHack(unsigned char);
	static void ProcessFrontEndHackProxy();
	void ProcessLoopingScriptObjectHack(unsigned char);
	static void SetupSuspectLastSeenReportHackProxy(void);
	static int SetupSuspectLastSeenReportHack(int model);
	void ProcessCraneAndBridge(void);
	void ProcessBridgeMotor(void);                           // cAudioManager::ProcessBridgeMotor
	void ProcessBridgeWarning(void);                         // cAudioManager::ProcessBridgeWarning
	void ProcessBridgeOneShots(void);                        // cAudioManager::ProcessBridgeOneShots
	void ProcessCinemaScriptObject(unsigned int);            // cAudioManager::ProcessCinemaScriptObject
	void ProcessLaunderetteScriptObject(unsigned int);       // cAudioManager::ProcessLaunderetteScriptObject
	void ProcessSawMillScriptObject(unsigned int);           // cAudioManager::ProcessSawMillScriptObject
	void ProcessAirportScriptObject(unsigned int);           // cAudioManager::ProcessAirportScriptObject
	void ProcessHomeScriptObject(unsigned int);              // cAudioManager::ProcessHomeScriptObject
	void ProcessPoliceCellBeatingScriptObject(unsigned int); // cAudioManager::ProcessPoliceCellBeatingScriptObject
	static void DisplayRadioStationNameHack(float, float, wchar_t *);
	static void InitialiseHack(void);
	static void ProcessVehicleSirenOrAlarmHack(void);
	unsigned int GetPedCommentSfxHack(CPed *, unsigned short);
	unsigned int GetCopTalkSfx(CPed *, unsigned short);
	unsigned int GetSwatTalkSfx(CPed*, unsigned short);
	unsigned int GetFBITalkSfx(CPed*, unsigned short);
	unsigned int GetArmyTalkSfx(CPed*, unsigned short);
	unsigned int GetPlayerTalkSfx(CPed *, unsigned short);
	unsigned int GetMedicTalkSfx(CPed *, unsigned short);
	unsigned int GetFiremanTalkSfx(CPed *, unsigned short);
	unsigned int GetNormalMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetAsianTaxiDriverTalkSfx(CPed *, unsigned short);
	unsigned int GetPimpTalkSfx(CPed *, unsigned short);
	unsigned int GetMafiaTalkSfx(CPed *, unsigned short);
	unsigned int GetTriadTalkSfx(CPed *, unsigned short);
	unsigned int GetDiabloTalkSfx(CPed *, unsigned short);
	unsigned int GetYakuzaTalkSfx(CPed *, unsigned short);
	unsigned int GetYardieTalkSfx(CPed *, unsigned short);
	unsigned int GetColombianTalkSfx(CPed *, unsigned short);
	unsigned int GetHoodTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackCriminalTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteCriminalTalkSfx(CPed *, unsigned short);
	unsigned int GetSpecialCharacterTalkSfx(CPed *, unsigned short);
	unsigned int GetCasualMaleOldTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackProjectMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteFatMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackFatMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackCasualFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteCasualFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetFemaleNo3TalkSfx(CPed *, unsigned short);
	unsigned int GetBlackFatFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteFatFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackFemaleProstituteTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteFemaleProstituteTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackProjectFemaleOldTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackProjectFemaleYoungTalkSfx(CPed *, unsigned short);
	unsigned int GetChinatownMaleOldTalkSfx(CPed *, unsigned short);
	unsigned int GetChinatownMaleYoungTalkSfx(CPed *, unsigned short);
	unsigned int GetChinatownFemaleOldTalkSfx(CPed *, unsigned short);
	unsigned int GetChinatownFemaleYoungTalkSfx(CPed *, unsigned short);
	unsigned int GetLittleItalyMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetLittleItalyFemaleOldTalkSfx(CPed *, unsigned short);
	unsigned int GetLittleItalyFemaleYoungTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteDockerMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackDockerMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetScumMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetScumFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteWorkerMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackWorkerMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBusinessMaleYoungTalkSfx(CPed *, unsigned short);
	unsigned int GetBusinessMaleOldTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteBusinessFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackBusinessFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetSupermodelMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetSupermodelFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetStewardMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetStewardFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetFanMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetFanFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetHospitalMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetHospitalFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetWhiteConstructionWorkerTalkSfx(CPed *, unsigned short);
	unsigned int GetBlackConstructionWorkerTalkSfx(CPed *, unsigned short);
	unsigned int GetShopperFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetStudentMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetStudentFemaleTalkSfx(CPed *, unsigned short);
	unsigned int GetCasualMaleYoungTalkSfx(CPed *, unsigned short);
	unsigned int GetEightBallTalkSfx(CPed *, unsigned short);
	unsigned int GetSalvatoreTalkSfx(CPed *, unsigned short);
	unsigned int GetMistyTalkSfx(CPed *, unsigned short);
	unsigned int GetBomberTalkSfx(CPed *, unsigned short);
	unsigned int GetSecurityGuardTalkSfx(CPed *, unsigned short);
	unsigned int GetChunkyTalkSfx(CPed *, unsigned short);
	unsigned int GetViceWhiteTalkSfx(CPed *, unsigned short);
	unsigned int GetViceBlackTalkSfx(CPed *, unsigned short);
	unsigned int GetGenericMaleTalkSfx(CPed *, unsigned short);
	unsigned int GetGenericFemaleTalkSfx(CPed *, unsigned short);
	static void QuietHelicopter1();
	static void QuietHelicopter2();
	static void QuietHelicopter3();
	static void QuietHelicopter4();
};
