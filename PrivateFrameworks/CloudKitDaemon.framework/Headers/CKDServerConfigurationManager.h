/* Runtime dump - CKDServerConfigurationManager
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDServerConfigurationManager : NSObject
{
    char _usesBackgroundSession;
    char _allowsCellularAccess;
    NSOperationQueue * _configurationQueue;
    NSMutableDictionary * _containerOperations;
    CKDServerConfiguration * _globalConfiguration;
    CKDGlobalConfigurationOperation * _globalConfigurationOp;
    NSOperationQueue * _containerSpecificInfoQueue;
    NSMutableDictionary * _containerSpecificInfos;
    NSMutableDictionary * _containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> * _queue;
    int _iCloudEnvNotifToken;
}

@property (nonatomic) char usesBackgroundSession;
@property (nonatomic) char allowsCellularAccess;
@property (retain, nonatomic) NSOperationQueue * configurationQueue;
@property (retain, nonatomic) NSMutableDictionary * containerOperations;
@property (retain, nonatomic) CKDServerConfiguration * globalConfiguration;
@property (retain, nonatomic) CKDGlobalConfigurationOperation * globalConfigurationOp;
@property (retain, nonatomic) NSOperationQueue * containerSpecificInfoQueue;
@property (retain, nonatomic) NSMutableDictionary * containerSpecificInfos;
@property (retain, nonatomic) NSMutableDictionary * containerSpecificInfoOperations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (nonatomic) int iCloudEnvNotifToken;

+ (void)expireGlobalConfiguration;
+ (void)expireConfigurationForContext:(NSObject *)arg0;
+ (CKDServerConfigurationManager *)sharedManagerUsingBackgroundSession:(char)arg0 allowsCellularAccess:(char)arg1;

- (void)dealloc;
- (CKDServerConfigurationManager *)init;
- (void).cxx_destruct;
- (char)usesBackgroundSession;
- (void)setUsesBackgroundSession:(char)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)allowsCellularAccess;
- (void)setAllowsCellularAccess:(char)arg0;
- (void)configurationForContext:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)publicURLForServerType:(int)arg0 context:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)containerScopedUserIDForContext:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (CKDServerConfiguration *)globalConfiguration;
- (void)_behaviorOptionsChanged:(NSNotification *)arg0;
- (void)_dropAllConfigurations;
- (CKDGlobalConfigurationOperation *)globalConfigurationOp;
- (void)setGlobalConfiguration:(CKDServerConfiguration *)arg0;
- (void)setGlobalConfigurationOp:(CKDGlobalConfigurationOperation *)arg0;
- (NSOperationQueue *)configurationQueue;
- (NSNumber *)_uniqueStringForContainerAndAccount:(NSObject *)arg0;
- (NSMutableDictionary *)containerSpecificInfoOperations;
- (NSMutableDictionary *)containerSpecificInfos;
- (NSOperationQueue *)containerSpecificInfoQueue;
- (void)fetchGlobalConfigWithContext:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)fetchContainerSpecificInfoForContext:(NSObject *)arg0 needUserID:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)_expireGlobalConfiguration;
- (void)_expireConfigurationForContext:(NSObject *)arg0;
- (void)setConfigurationQueue:(NSOperationQueue *)arg0;
- (NSMutableDictionary *)containerOperations;
- (void)setContainerOperations:(NSMutableDictionary *)arg0;
- (void)setContainerSpecificInfoQueue:(NSOperationQueue *)arg0;
- (void)setContainerSpecificInfos:(NSMutableDictionary *)arg0;
- (void)setContainerSpecificInfoOperations:(NSMutableDictionary *)arg0;
- (int)iCloudEnvNotifToken;
- (void)setICloudEnvNotifToken:(int)arg0;

@end
