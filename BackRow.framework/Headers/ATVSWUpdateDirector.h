/* Runtime dump - ATVSWUpdateDirector
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class ATVRebootWaitController, ATVSWUpdateEngine;
@interface ATVSWUpdateDirector : BRSingleton
{
    ATVSWUpdateEngine * _engine;
    ATVRebootWaitController * _dialog;
    char _airPlayEnabledBeforeUpdate;
    NSCountedSet * _holdOffTokens;
}

+ (ATVSWUpdateDirector *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)startUpdateCheckForAutoApply;
- (void)_updateCheckFinished:(id)arg0;
- (void)_updateDownloadFinished:(id)arg0;
- (void)_updateApplyStarted:(id)arg0;
- (void)_updateApplyFailed:(id)arg0;
- (void)_updateApplySucceeded:(id)arg0;
- (void)_playbackInitiated:(id)arg0;
- (void)_stopBackgroundProcessing:(id)arg0;
- (void)_resumeBackgroundProcessing:(id)arg0;
- (void)_slowUpdateTimeout:(id)arg0;
- (void)_redownloadStarted:(id)arg0;
- (char)areUpdateChecksHeldOff;
- (char)_showSeedOptions;
- (NSObject *)_readMAServerURLForType:(NSObject *)arg0;
- (char)isAtHomeSeedUser;
- (void)startManualUpdateCheck:(char)arg0;
- (void)startBackgroundUpdateCheck;
- (void)startRestore;
- (void)startDownloadAndApply;
- (char)isUpdateCheckInProgress;
- (char)isUpdateDownloadQueued;
- (char)isUpdateDownloadInProgress;
- (void)holdOffUpdateChecksFor:(id)arg0;
- (void)releaseHoldOffUpdateChecksFor:(id)arg0;
- (void)_showDownloadAndApplyConfirmationDialog:(char)arg0;
- (NSError *)_errorWithTextForError:(NSError *)arg0;
- (void)_showNoUpdatesDialog:(char)arg0;
- (void)_showApplyConfirmationDialogAutoTriggered:(char)arg0 redownloading:(char)arg1 forLargeUpdate:(char)arg2;
- (void)_setStep2ImagePath;
- (char)_setServerURLForType:(NSObject *)arg0;
- (void)_writeMAServerURL:(NSURL *)arg0 forType:(NSObject *)arg1;
- (char)_setAppleConnectID;
- (char)_setAdvancedOptions;
- (char)_setPersonalizationServerURL;
- (void)dealloc;
- (ATVSWUpdateDirector *)init;
- (void).cxx_destruct;
- (void)cancelUpdates;

@end
