/* Runtime dump - CKOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperation : NSOperation
{
    char _allowsCellularAccess;
    char _isExecuting;
    char _isFinished;
    char _isDiscretionary;
    CKContainer * _container;
    CKPlaceholderOperation * _placeholderOperation;
    NSString * _operationID;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _sectionID;
    NSString * _parentSectionID;
    id _context;
    CKTimeLogger * _timeLogger;
    NSArray * _requestUUIDs;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSString * _deviceIdentifier;
    NSObject<OS_dispatch_source> * _timeoutSource;
    int _usesBackgroundSessionOverride;
}

@property (retain, nonatomic) CKContainer * container;
@property (nonatomic) char usesBackgroundSession;
@property (nonatomic) char allowsCellularAccess;
@property (retain, nonatomic) CKPlaceholderOperation * placeholderOperation;
@property (retain, nonatomic) NSString * operationID;
@property (nonatomic) char isExecuting;
@property (nonatomic) char isFinished;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * callbackQueue;
@property (retain, nonatomic) NSString * sectionID;
@property (readonly, nonatomic) NSString * parentSectionID;
@property (readonly, nonatomic) id context;
@property (retain, nonatomic) CKTimeLogger * timeLogger;
@property (nonatomic) char isDiscretionary;
@property (retain, nonatomic) NSArray * requestUUIDs;
@property (readonly, nonatomic) CKOperationInfo * operationInfo;
@property (retain, nonatomic) NSString * sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString * sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString * deviceIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * timeoutSource;
@property (nonatomic) int usesBackgroundSessionOverride;

- (char)isDiscretionary;
- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)setSectionID:(NSString *)arg0;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (void)setPlaceholderOperation:(CKPlaceholderOperation *)arg0;
- (CKPlaceholderOperation *)placeholderOperation;
- (NSObject<OS_dispatch_source> *)timeoutSource;
- (void)setTimeoutSource:(NSObject<OS_dispatch_source> *)arg0;
- (void)_uninstallTimeoutSource;
- (void)_installTimeoutSource;
- (void)processOperationResult:(NSObject *)arg0;
- (void)setIsDiscretionary:(char)arg0;
- (void)cancel;
- (void)dealloc;
- (CKOperation *)init;
- (NSString *)description;
- (NSString *)context;
- (void)setContainer:(CKContainer *)arg0;
- (CKContainer *)container;
- (void)start;
- (void)main;
- (void).cxx_destruct;
- (char)isFinished;
- (char)isExecuting;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (char)usesBackgroundSession;
- (void)setUsesBackgroundSession:(char)arg0;
- (NSString *)operationID;
- (char)isConcurrent;
- (NSError *)error;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (MSMediaStreamDaemon *)daemon;
- (void)setSourceApplicationBundleIdentifier:(NSString *)arg0;
- (void)setSourceApplicationSecondaryIdentifier:(NSString *)arg0;
- (char)allowsCellularAccess;
- (void)setAllowsCellularAccess:(char)arg0;
- (NSString *)sourceApplicationBundleIdentifier;
- (NSString *)sourceApplicationSecondaryIdentifier;
- (NSString *)sectionID;
- (void)finishWithError:(NSError *)arg0;
- (void)setOperationID:(NSString *)arg0;
- (CKTimeLogger *)timeLogger;
- (NSString *)CKPropertiesDescription;
- (void)setTimeLogger:(CKTimeLogger *)arg0;
- (NSString *)parentSectionID;
- (int)usesBackgroundSessionOverride;
- (NSString *)deviceIdentifier;
- (NSArray *)requestUUIDs;
- (void)setUsesBackgroundSessionOverride:(int)arg0;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)_finishInternalOnCallbackQueueWithError:(NSError *)arg0;
- (void)setIsFinished:(char)arg0;
- (void)setRequestUUIDs:(NSArray *)arg0;
- (CKOperationInfo *)operationInfo;
- (Class)operationInfoClass;
- (void)setError:(NSError *)arg0;
- (void)setIsExecuting:(char)arg0;

@end
