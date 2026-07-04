/* Runtime dump - PLCPLStatus
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLStatus : NSObject <CPLStatusDelegate>
{
    id _progressSubscriber;
    NSProgress * _progress;
    CPLStatus * _cplStatus;
    char _isCPLDataClassEnabled;
    char _isCPLDataClassEnabledValid;
    unsigned int _syncProgressState;
    <PLCPLStatusDelegate> * _delegate;
    unsigned int _numberOfImagesToUpload;
    unsigned int _numberOfVideosToUpload;
    unsigned int _numberOfImagesToDownload;
    unsigned int _numberOfVideosToDownload;
    unsigned int _numberOfPushedAsset;
    unsigned int _numberOfPulledAssets;
    unsigned int _totalAssetsOnServer;
    double _syncProgress;
}

@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) char isExceedingQuota;
@property (readonly, nonatomic) char isSyncing;
@property (readonly, nonatomic) char isConnecting;
@property (readonly, nonatomic) char isPreparing;
@property (readonly, nonatomic) char hasExitedCPL;
@property (readonly, nonatomic) double syncProgress;
@property (readonly, retain, nonatomic) NSDate * lastSuccessfulSyncDate;
@property (readonly, retain, nonatomic) NSDate * exitDeleteTime;
@property (nonatomic) <PLCPLStatusDelegate> * delegate;
@property (readonly, nonatomic) unsigned int numberOfImagesToUpload;
@property (readonly, nonatomic) unsigned int numberOfVideosToUpload;
@property (readonly, nonatomic) unsigned int numberOfImagesToDownload;
@property (readonly, nonatomic) unsigned int numberOfVideosToDownload;
@property (readonly, nonatomic) unsigned int numberOfPushedAsset;
@property (readonly, nonatomic) unsigned int numberOfPulledAssets;
@property (readonly, nonatomic) unsigned int totalAssetsOnServer;
@property (readonly, nonatomic) char diskIsLowOnSpace;
@property (retain, nonatomic) NSProgress * progress;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setUploadCountsForImages:(unsigned int)arg0 videos:(unsigned int)arg1;
+ (void)setDownloadCountsForImages:(unsigned int)arg0 videos:(unsigned int)arg1;
+ (void)setPushedAssetCount:(unsigned int)arg0;
+ (void)_prepareQueue;
+ (NSString *)readPListWithFilename:(NSString *)arg0;
+ (void)writeDict:(id)arg0 withFilename:(NSString *)arg1;
+ (void)_setPulledItemsCount:(unsigned int)arg0;

- (void)dealloc;
- (void)setDelegate:(<PLCPLStatusDelegate> *)arg0;
- (PLCPLStatus *)init;
- (<PLCPLStatusDelegate> *)delegate;
- (char)isEnabled;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)_setProgress:(NSProgress *)arg0;
- (NSProgress *)progress;
- (void)_setup;
- (unsigned int)diskSpaceLevel;
- (unsigned int)numberOfImagesToUpload;
- (unsigned int)numberOfVideosToUpload;
- (unsigned int)numberOfVideosToDownload;
- (NSDate *)lastSuccessfulSyncDate;
- (char)isExceedingQuota;
- (char)_loadUploadCounts;
- (char)_loadDownloadCounts;
- (void)_subscribeToProgress;
- (void)accountStoreDidChange:(NSDictionary *)arg0;
- (void)_networkReachabilityChanged:(NSNotification *)arg0;
- (void)_calculateTotalAssetsOnServer;
- (void)_calculateNumberOfPulledAssets;
- (void)_loadPulledItemsCount;
- (NSDate *)exitDeleteTime;
- (void)_teardown;
- (void)_updateSyncProgress;
- (void)_setSyncProgress:(double)arg0;
- (void)_unsubscribeFromProgress;
- (void)statusDidChange:(NSDictionary *)arg0;
- (char)diskIsLowOnSpace;
- (char)isSyncing;
- (char)isConnecting;
- (char)isPreparing;
- (char)hasExitedCPL;
- (double)syncProgress;
- (unsigned int)numberOfImagesToDownload;
- (unsigned int)numberOfPushedAsset;
- (unsigned int)numberOfPulledAssets;
- (unsigned int)totalAssetsOnServer;

@end
