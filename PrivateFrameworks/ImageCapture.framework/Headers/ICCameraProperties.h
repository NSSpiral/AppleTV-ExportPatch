/* Runtime dump - ICCameraProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraProperties : NSObject
{
    NSString * _volumePath;
    char _ejectable;
    char _beingEjected;
    char _locked;
    char _allowsSyncingClock;
    unsigned int _contentCatalogPercentCompleted;
    char _batteryLevelAvailable;
    unsigned int _batteryLevel;
    NSMutableArray * _contents;
    NSMutableArray * _mediaFiles;
    NSMutableArray * _notifyArray;
    NSMutableArray * _toBeNotifiedAddedItems;
    int _contentsLock;
    int _mediaFilesLock;
    double _timeOffset;
    unsigned int _estimatedNumberOfDownloadableItems;
    unsigned int _numberOfDownloadableItems;
    char _contentReceived;
    double _downloadCancelTimestamp;
    NSObject<OS_dispatch_queue> * _thumbnailFetchQ;
    NSObject<OS_dispatch_queue> * _metadataFetchQ;
    NSObject<OS_dispatch_queue> * _downloadQ;
    NSObject<OS_dispatch_queue> * _generalQ;
    NSObject<OS_dispatch_semaphore> * _deviceQSemaphore;
    char _accessRestrictedAppleDevice;
}

@property (retain) NSString * volumePath;
@property char ejectable;
@property char beingEjected;
@property char locked;
@property char allowsSyncingClock;
@property unsigned int contentCatalogPercentCompleted;
@property char batteryLevelAvailable;
@property unsigned int batteryLevel;
@property (retain) NSMutableArray * contents;
@property (retain) NSMutableArray * mediaFiles;
@property (retain) NSMutableArray * toBeNotifiedAddedItems;
@property (retain) NSMutableArray * notifyArray;
@property int mediaFilesLock;
@property int contentsLock;
@property double timeOffset;
@property unsigned int estimatedNumberOfDownloadableItems;
@property unsigned int numberOfDownloadableItems;
@property char contentReceived;
@property double downloadCancelTimestamp;
@property NSObject<OS_dispatch_queue> * thumbnailFetchQ;
@property NSObject<OS_dispatch_queue> * metadataFetchQ;
@property NSObject<OS_dispatch_queue> * downloadQ;
@property NSObject<OS_dispatch_queue> * generalQ;
@property NSObject<OS_dispatch_semaphore> * deviceQSemaphore;
@property char accessRestrictedAppleDevice;

- (void)dealloc;
- (NSMutableArray *)contents;
- (double)timeOffset;
- (void)setContents:(NSMutableArray *)arg0;
- (void)setTimeOffset:(double)arg0;
- (void)setLocked:(char)arg0;
- (unsigned int)batteryLevel;
- (void)setVolumePath:(NSString *)arg0;
- (void)setMediaFiles:(NSMutableArray *)arg0;
- (void)setToBeNotifiedAddedItems:(NSMutableArray *)arg0;
- (void)setNotifyArray:(NSMutableArray *)arg0;
- (void)lockMediaFiles;
- (void)unlockMediaFiles;
- (void)lockContents;
- (void)unlockContents;
- (NSString *)volumePath;
- (char)ejectable;
- (void)setEjectable:(char)arg0;
- (char)beingEjected;
- (void)setBeingEjected:(char)arg0;
- (NSMutableArray *)notifyArray;
- (char)allowsSyncingClock;
- (void)setAllowsSyncingClock:(char)arg0;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg0;
- (char)batteryLevelAvailable;
- (void)setBatteryLevelAvailable:(char)arg0;
- (NSMutableArray *)toBeNotifiedAddedItems;
- (int)mediaFilesLock;
- (void)setMediaFilesLock:(int)arg0;
- (int)contentsLock;
- (void)setContentsLock:(int)arg0;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned int)arg0;
- (unsigned int)numberOfDownloadableItems;
- (void)setNumberOfDownloadableItems:(unsigned int)arg0;
- (char)contentReceived;
- (void)setContentReceived:(char)arg0;
- (double)downloadCancelTimestamp;
- (void)setDownloadCancelTimestamp:(double)arg0;
- (NSObject<OS_dispatch_queue> *)thumbnailFetchQ;
- (void)setThumbnailFetchQ:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)metadataFetchQ;
- (void)setMetadataFetchQ:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)downloadQ;
- (void)setDownloadQ:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)generalQ;
- (void)setGeneralQ:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_semaphore> *)deviceQSemaphore;
- (void)setDeviceQSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (char)accessRestrictedAppleDevice;
- (void)setAccessRestrictedAppleDevice:(char)arg0;
- (char)locked;
- (unsigned int)estimatedNumberOfDownloadableItems;
- (unsigned int)contentCatalogPercentCompleted;
- (NSMutableArray *)mediaFiles;
- (void)setBatteryLevel:(unsigned int)arg0;
- (void)finalize;

@end
