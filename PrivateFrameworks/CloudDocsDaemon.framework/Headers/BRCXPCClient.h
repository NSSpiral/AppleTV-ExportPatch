/* Runtime dump - BRCXPCClient
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient>
{
    BRCAccountSession * _session;
    char _dieOnInvalidate;
    char _isForeground;
    char _invalidated;
    char _entitlementsCached;
    char _isProxyEntitled;
    char _isSharingPrivateInterfaceEntitled;
    char _hasCloudServices;
    int _clientPid;
    NSString * _debugIdentifier;
    NSCountedSet * _containers;
    NSString * _applicationIdenfier;
    NSString * _defaultContainerID;
    NSSet * _entitledContainerIDs;
    NSOperationQueue * _acceptOperationQueue;
    NSMutableDictionary * _runningAcceptOperations;
    char _isUsingUbiquity;
    NSXPCConnection * _connection;
}

@property (readonly, nonatomic) NSString * defaultContainerID;
@property (readonly, nonatomic) NSSet * entitledContainerIDs;
@property (readonly, nonatomic) NSString * bundleID;
@property (nonatomic) char isUsingUbiquity;
@property (readonly, nonatomic) char hasPrivateSharingInterfaceEntitlement;
@property (readonly, weak, nonatomic) NSXPCConnection * connection;
@property (readonly, nonatomic) char dieOnInvalidate;
@property (retain, nonatomic) BRCAccountSession * session;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * identifier;

- (NSString *)description;
- (void)invalidate;
- (NSString *)identifier;
- (char)cloudEnabledStatus;
- (void).cxx_destruct;
- (NSXPCConnection *)connection;
- (BRCAccountSession *)session;
- (void)addContainer:(NSObject *)arg0;
- (char)hasPrivateSharingInterfaceEntitlement;
- (void)removeContainer:(NSObject *)arg0;
- (NSSet *)entitledContainerIDs;
- (void)setSession:(BRCAccountSession *)arg0;
- (BRCXPCClient *)initWithConnection:(NSXPCConnection *)arg0 session:(BRCAccountSession *)arg1;
- (char)dieOnInvalidate;
- (NSString *)bundleID;
- (char)isUsingUbiquity;
- (void)_stopMonitoringProcess;
- (void)_startMonitoringProcessIfNeeded;
- (void)process:(int)arg0 didBecomeForeground:(char)arg1;
- (char)_hasPrivateIPCEntitlementForSelector:(SEL)arg0 error:(id *)arg1;
- (char)_isContainerAccessAllowed;
- (char)_hasAccessToContainerID:(NSObject *)arg0 error:(id *)arg1;
- (char)_canCreateContainerWithID:(int)arg0 error:(id *)arg1;
- (char)_isContainerProxyWithError:(id *)arg0;
- (void)accessLogicalOrPhysicalURL:(NSURL *)arg0 needsWrite:(char)arg1 asynchronously:(char)arg2 handler:(id /* block */)arg3;
- (char)_entitlementBooleanValueForKey:(NSString *)arg0;
- (char)_cloudEnabledStatusForContainerIDs:(id)arg0 bundleID:(NSString *)arg1 auditToken:(struct ?)arg2;
- (char)_isContainerProxyEntitled;
- (char)_cloudEnabledPrecheckStatusForContainerIDs:(id)arg0 bundleID:(NSString *)arg1;
- (char)isSandboxed;
- (NSString *)_entitlementValueForKey:(NSString *)arg0 ofClass:(Class)arg1;
- (char)canAccessPath:(char *)arg0 needsWrite:(char)arg1;
- (void)_startDownloadItemsAtURLs:(id)arg0 pos:(unsigned int)arg1 options:(unsigned int)arg2 error:(NSError *)arg3 reply:(id /* block */)arg4;
- (NSObject *)setupPrivateContainer:(NSObject *)arg0 root:(NSObject *)arg1 error:(id *)arg2;
- (char)canAccessPhysicalURL:(NSURL *)arg0;
- (NSURL *)issueContainerExtensionForURL:(NSURL *)arg0 error:(id *)arg1;
- (char)cloudEnabledStatusForPID:(int)arg0;
- (void)__cacheEntitlements;
- (NSString *)defaultContainerID;
- (id)_containerIDsForPid:(int)arg0;
- (id)copyContainerIDsForPid:(int)arg0 error:(id *)arg1;
- (void)_addExternalDocumentReferenceTo:(id)arg0 underParent:(NSObject *)arg1 forceReparent:(char)arg2 reply:(id /* block */)arg3;
- (void)_setupContainerID:(NSObject *)arg0 andSendReply:(id /* block */)arg1;
- (id)_disabledBundleIDs;
- (char)_cloudSyncTCCDisabledForContainerMeta:(id)arg0 disabledBundleIDs:(id)arg1;
- (void)setIsUsingUbiquity:(char)arg0;

@end
