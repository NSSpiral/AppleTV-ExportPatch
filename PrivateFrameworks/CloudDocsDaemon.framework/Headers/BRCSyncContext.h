/* Runtime dump - BRCSyncContext
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncContext : NSObject <BRCLowDiskDelegate>
{
    CKContainer * _ckContainer;
    NSString * _contextIdentifier;
    CDAttribute * _duetAttribute;
    CDBudget * _energyBudget;
    CDBudget * _dataBudget;
    NSString * _admissionTicket;
    char _isInLowDisk;
    char _isShared;
    char _isCancelled;
    BRCAccountSession * _session;
    BRCThrottleBase * _readerThrottle;
    BRCThrottleBase * _applyThrottle;
    BRCThrottleBase * _downloadThrottle;
    BRCThrottleBase * _uploadThrottle;
    BRCTransferStream * _uploader;
    BRCTransferStream * _downloader;
}

@property (readonly, nonatomic) BRCAccountSession * session;
@property (readonly, nonatomic) NSString * contextIdentifier;
@property (readonly, nonatomic) BRCUserDefaults * defaults;
@property (readonly, nonatomic) char isShared;
@property (readonly, nonatomic) CKContainer * ckContainer;
@property (readonly, nonatomic) BRCTransferStream * uploader;
@property (readonly, nonatomic) BRCTransferStream * downloader;
@property (readonly, nonatomic) NSString * admissionTicket;
@property (readonly, nonatomic) CDBudget * energyBudget;
@property (readonly, nonatomic) CDBudget * dataBudget;
@property (readonly, nonatomic) BRCThrottleBase * readerThrottle;
@property (readonly, nonatomic) BRCThrottleBase * applyThrottle;
@property (readonly, nonatomic) BRCThrottleBase * uploadThrottle;
@property (readonly, nonatomic) BRCThrottleBase * downloadThrottle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)contextIdentifierForZone:(NSObject *)arg0;

- (void)cancel;
- (NSString *)description;
- (void)addOperation:(NSObject *)arg0;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)setupIfNeeded;
- (BRCAccountSession *)session;
- (char)isShared;
- (BRCThrottleBase *)applyThrottle;
- (NSString *)contextIdentifier;
- (BRCTransferStream *)downloader;
- (BRCThrottleBase *)downloadThrottle;
- (CKContainer *)ckContainer;
- (BRCSyncContext *)initWithZone:(NSObject *)arg0;
- (void)notifyDuetFromAccessByBundleID:(NSObject *)arg0;
- (BRCTransferStream *)uploader;
- (void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(char)arg1;
- (BRCUserDefaults *)defaults;
- (BRCThrottleBase *)uploadThrottle;
- (BRCThrottleBase *)readerThrottle;
- (BRCSyncContext *)initWithSession:(BRCAccountSession *)arg0 contextIdentifier:(NSString *)arg1 isShared:(char)arg2;
- (void)_setupDuetIfNeeded;
- (char)allowsCellularAccess;
- (NSString *)admissionTicket;
- (CDBudget *)energyBudget;
- (CDBudget *)dataBudget;

@end
