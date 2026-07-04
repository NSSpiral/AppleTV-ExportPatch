/* Runtime dump - CKDQueuedFetch
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedFetch : NSObject
{
    char _isFinished;
    char _allowsCellularAccess;
    id _completionHandler;
    CKDDatabaseOperation * _fetchOp;
    NSMutableDictionary * _completionHandlersByItemID;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSString * _deviceIdentifier;
    NSDate * _startDate;
    NSDate * _lastRequestDate;
    CKDClientContext * _context;
    NSOperationQueue * _operationQueue;
    int _scope;
    int _usesBackgroundSession;
    int _qos;
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (readonly, nonatomic) char shouldStart;
@property (nonatomic) char isFinished;
@property (copy, nonatomic) id completionHandler;
@property (retain, nonatomic) CKDDatabaseOperation * fetchOp;
@property (retain, nonatomic) NSMutableDictionary * completionHandlersByItemID;
@property (retain, nonatomic) NSString * sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString * sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSString * deviceIdentifier;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * lastRequestDate;
@property (weak, nonatomic) CKDClientContext * context;
@property (weak, nonatomic) NSOperationQueue * operationQueue;
@property (nonatomic) int scope;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) int usesBackgroundSession;
@property (nonatomic) int qos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * callbackQueue;

- (NSString *)description;
- (CKDClientContext *)context;
- (void)setContext:(CKDClientContext *)arg0;
- (id /* block */)completionHandler;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (void)setScope:(int)arg0;
- (int)scope;
- (void)start;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (char)isFinished;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (int)usesBackgroundSession;
- (void)setUsesBackgroundSession:(int)arg0;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setSourceApplicationBundleIdentifier:(NSString *)arg0;
- (void)setSourceApplicationSecondaryIdentifier:(NSString *)arg0;
- (char)allowsCellularAccess;
- (void)setAllowsCellularAccess:(char)arg0;
- (NSOperationQueue *)operationQueue;
- (NSString *)sourceApplicationBundleIdentifier;
- (NSString *)sourceApplicationSecondaryIdentifier;
- (NSString *)CKPropertiesDescription;
- (NSString *)deviceIdentifier;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (void)setIsFinished:(char)arg0;
- (void)addCallbackForItemWithID:(int)arg0 callback:(id /* block */)arg1;
- (void)setLastRequestDate:(NSDate *)arg0;
- (CKOperationInfo *)operationInfo;
- (id)allItemIDs;
- (void)performCallbacksForItemWithID:(int)arg0 withItem:(NSObject *)arg1 error:(NSError *)arg2;
- (void)finishFetchOperationWithError:(NSError *)arg0;
- (Class)operationInfoClass;
- (NSObject *)fetchOperation;
- (NSMutableDictionary *)completionHandlersByItemID;
- (NSObject *)callbacksForItemWithID:(int)arg0;
- (void)removeCallbacksForItemWithID:(int)arg0;
- (NSDate *)lastRequestDate;
- (int)numberOfCallbacks;
- (int)qos;
- (void)setFetchOp:(CKDDatabaseOperation *)arg0;
- (CKDDatabaseOperation *)fetchOp;
- (CKDQueuedFetch *)initWithOperation:(NSObject *)arg0 context:(CKDClientContext *)arg1 operationQueue:(NSOperationQueue *)arg2;
- (char)canBeUsedForOperation:(NSObject *)arg0;
- (char)shouldStart;
- (void)setCompletionHandlersByItemID:(NSMutableDictionary *)arg0;
- (void)setQos:(int)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
