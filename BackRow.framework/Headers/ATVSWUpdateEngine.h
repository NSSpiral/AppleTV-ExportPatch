/* Runtime dump - ATVSWUpdateEngine
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRStateMachine;
@interface ATVSWUpdateEngine : NSObject
{
    BRStateMachine * _stateMachine;
    char _processStartedWithAutoCheck;
    char _processStartedForRestore;
    char _processStartedForRedownload;
    char _assetIsLarge;
    char _failedToClearDownloadSpaceOnPriorAttempt;
    NSString * _step2ImagePath;
    NSDate * _downloadStartTime;
    NSError * _msuProgressError;
    ASAsset * _asset;
    MSUUpdateBrainAssetLoader * _brainLoader;
    ASAssetQuery * _query;
    NSTimer * _slowUpdateTimer;
    char _cancelMSUOperation;
}

- (void)processEvent:(NSObject *)arg0;
- (char)isChecking;
- (char)isDownloadQueued;
- (void)setStep2ImagePath:(NSString *)arg0;
- (void)_registerHandlers;
- (void)_storeURLBagLoaded:(id)arg0;
- (void)_purgePreviousAssets;
- (void)_performCheck;
- (void)_clearAssetDownloadSpace;
- (void)_cancelUpdatePreDownload;
- (void)_downloadAsset;
- (void)_cancelUpdateDuringDownload;
- (void)_clearBrainDownloadSpace;
- (void)_recheckForNewerUpdate;
- (void)_cancelUpdateDuringApply;
- (NSError *)_resultUserInfoWithError:(NSError *)arg0;
- (void)_downloadBrain;
- (void)_clearVerifyAndUnarchiveSpace;
- (void)_verifyAndUnarchiveUpdate;
- (void)_clearPrepareAndApplySpace;
- (void)_cancelAndRebootDuringVerifyUnarchive;
- (void)_prepareAndApplyUpdate;
- (void)_cancelAndRebootDuringApply;
- (char)_goodTimeToDownloadUpdate;
- (void)_determineAssetToApplyAsync:(id)arg0;
- (NSDictionary *)spaceCheckOptions;
- (void)_handleProgressCallbackWithState:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_handleBrainDownloadProgressCallbackWithState:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_startSlowUpdateTimer;
- (void)_stopSlowUpdateTimer;
- (void)_prepareAndApplyUpdateThreaded;
- (void)_handleProgressCallbackError:(NSError *)arg0 inState:(NSObject *)arg1;
- (void)_handleProgressCallbackQueuedWithState:(NSObject *)arg0;
- (void)_handleProgressCallbackDownloadingWithState:(NSObject *)arg0;
- (void)_handleProgressCallbackPausedWithState:(NSObject *)arg0;
- (void)_handleProgressCallbackVerifyExtractWithState:(NSObject *)arg0;
- (void)_cleanUpAsset;
- (void)_assetCleanupHandler:(id /* block */)arg0;
- (void)_forceRebootAfterCancel;
- (void)_slowUpdateTimerFired:(id)arg0;
- (char)_shouldCancelMSUOperation;
- (void)_updateProgressStatus:(id)arg0;
- (void)dealloc;
- (ATVSWUpdateEngine *)init;
- (void).cxx_destruct;
- (char)isDownloading;

@end
