/* Runtime dump - ICCameraDevice
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraDevice : ICDevice
{
    void * _cameraProperties;
}

@property unsigned int estimatedNumberOfDownloadableItems;
@property unsigned int contentCatalogPercentCompleted;
@property char ejectable;
@property char locked;
@property char allowsSyncingClock;
@property (readonly) NSArray * mediaFiles;
@property (readonly) char batteryLevelAvailable;
@property (readonly) unsigned int batteryLevel;
@property (readonly) double timeOffset;
@property unsigned int numberOfDownloadableItems;
@property char accessRestrictedAppleDevice;
@property (readonly) NSArray * notifyArray;
@property (readonly) NSArray * contents;
@property (copy) NSString * volumePath;
@property char beingEjected;

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)dealloc;
- (ICCameraDevice *)init;
- (NSString *)description;
- (char)isLocked;
- (NSArray *)contents;
- (double)timeOffset;
- (void)setLocked:(char)arg0;
- (unsigned int)batteryLevel;
- (void)cancelDownload;
- (void)requestCloseSession;
- (void)handleCommandCompletionNotification:(NSNotification *)arg0;
- (void)handleImageCaptureEventNotification:(NSNotification *)arg0;
- (void)setVolumePath:(NSString *)arg0;
- (NSString *)volumePath;
- (void)setEjectable:(char)arg0;
- (char)beingEjected;
- (void)setBeingEjected:(char)arg0;
- (NSArray *)notifyArray;
- (char)allowsSyncingClock;
- (void)setAllowsSyncingClock:(char)arg0;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg0;
- (char)batteryLevelAvailable;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned int)arg0;
- (unsigned int)numberOfDownloadableItems;
- (void)setNumberOfDownloadableItems:(unsigned int)arg0;
- (double)downloadCancelTimestamp;
- (NSObject<OS_dispatch_queue> *)generalQ;
- (NSObject<OS_dispatch_semaphore> *)deviceQSemaphore;
- (void)setAccessRestrictedAppleDevice:(char)arg0;
- (char)isAccessRestrictedAppleDevice;
- (void)receivedDeviceCommandCompletion;
- (void)decrementNumberOfDownloadableItems;
- (void)decrementEstimatedNumberOfDownloadableItems;
- (void)incrementEstimatedNumberOfDownloadableItems;
- (void)incrementNumberOfDownloadableItems;
- (void)addFolder:(ExFATCameraFolder *)arg0;
- (char)isEjectable;
- (void)addObjectToNotifyArray:(NSArray *)arg0;
- (void)clearNotifyArray;
- (void)notifyDelegateOfAddedItem:(NSObject *)arg0;
- (void)notifyDelegateOfAddedItems:(NSArray *)arg0;
- (void)pendNotifyingDelegateOfAddedItem:(NSObject *)arg0;
- (NSObject *)filesOfType:(NSObject *)arg0;
- (void)requestSyncClock;
- (void)removeFolder:(ExFATCameraFolder *)arg0;
- (void)addToThumbnailFetchQ:(id)arg0;
- (void)addToMetadataFetchQ:(id)arg0;
- (void)requestEject;
- (unsigned int)estimatedNumberOfDownloadableItems;
- (unsigned int)contentCatalogPercentCompleted;
- (void)requestOpenSession;
- (void)requestDownloadFile:(NSString *)arg0 options:(NSDictionary *)arg1 downloadDelegate:(NSObject *)arg2 didDownloadSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)requestDeleteFiles:(id)arg0;
- (NSArray *)mediaFiles;
- (void)finalize;

@end
