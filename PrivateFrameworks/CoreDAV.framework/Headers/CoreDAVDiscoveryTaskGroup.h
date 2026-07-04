/* Runtime dump - CoreDAVDiscoveryTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate>
{
    NSString * _requiredComplianceClass;
    NSArray * _httpPorts;
    NSArray * _httpsPorts;
    NSString * _httpServiceString;
    NSString * _httpsServiceString;
    NSString * _wellKnownPath;
    NSArray * _potentialContextPaths;
    NSMutableArray * _discoveries;
    char _didReceiveAuthenticationError;
    char _shouldBailEarly;
    <CoreDAVAccountInfoProvider> * _discoveredAccountInfo;
}

@property (nonatomic) <CoreDAVDiscoveryTaskGroupDelegate> * delegate;
@property (nonatomic) char didReceiveAuthenticationError;
@property (nonatomic) char shouldBailEarly;
@property (retain, nonatomic) <CoreDAVAccountInfoProvider> * discoveredAccountInfo;
@property (retain, nonatomic) NSString * wellKnownPath;
@property (retain, nonatomic) NSArray * potentialContextPaths;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (CoreDAVDiscoveryTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 taskManager:(<CoreDAVTaskManager> *)arg1;
- (void)taskGroupWillCancelWithError:(NSError *)arg0;
- (void)startTaskGroup;
- (void)cancelTaskGroup;
- (void)syncAway;
- (CoreDAVDiscoveryTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 taskManager:(NSObject *)arg1 httpPorts:(NSArray *)arg2 httpsPorts:(NSArray *)arg3 httpServiceString:(NSString *)arg4 httpsServiceString:(NSString *)arg5 wellKnownPath:(NSString *)arg6 potentialContextPaths:(NSArray *)arg7 requiredComplianceClass:(NSString *)arg8;
- (void)startSRVLookup:(id)arg0 serviceString:(NSString *)arg1;
- (NSString *)wellKnownPath;
- (id)allDiscoveryPorts:(id)arg0 withScheme:(NSString *)arg1;
- (void)startWellKnownLocationTask:(NSObject *)arg0 withURL:(NSString *)arg1;
- (id)setupDiscoveries:(id)arg0 withSchemes:(NSArray *)arg1;
- (void)startPropfindTask:(NSObject *)arg0;
- (NSArray *)allDiscoveryPaths:(NSArray *)arg0;
- (NSArray *)potentialContextPaths;
- (void)completeDiscovery:(id)arg0 error:(NSError *)arg1;
- (NSDictionary *)propFindProperties;
- (void)startWellKnownFallbackHeadTask:(NSObject *)arg0 withURL:(NSString *)arg1;
- (void)noteDefinitiveAuthFailureFromTask:(NSObject *)arg0;
- (void)propFindTaskFinished:(id)arg0;
- (NSURLSessionTask *)extractPrincipalURLFromPropFindTask:(NSObject *)arg0 error:(id *)arg1;
- (void)srvLookupTask:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setDidReceiveAuthenticationError:(char)arg0;
- (void)completeOptionsTask:(NSObject *)arg0 error:(NSError *)arg1;
- (void)startOptionsTask:(NSObject *)arg0;
- (void)getDiscoveryStatus:(id)arg0 priorFailed:(id *)arg1 subsequentFailed:(id *)arg2 priorIncomplete:(id *)arg3 subsequentIncomplete:(id *)arg4 priorSuccess:(id *)arg5 subsequentSuccess:(id *)arg6;
- (char)shouldBailEarly;
- (void)setDiscoveredAccountInfo:(<CoreDAVAccountInfoProvider> *)arg0;
- (<CoreDAVAccountInfoProvider> *)discoveredAccountInfo;
- (void)setShouldBailEarly:(char)arg0;
- (void)addToDiscoveryArray:(id *)arg0 discovery:(GKDiscovery *)arg1;
- (void)optionsTask:(NSObject *)arg0 error:(NSError *)arg1;
- (CoreDAVDiscoveryTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 taskManager:(NSObject *)arg1 httpPorts:(NSArray *)arg2 httpsPorts:(NSArray *)arg3 httpServiceString:(NSString *)arg4 httpsServiceString:(NSString *)arg5 wellKnownPaths:(NSArray *)arg6 requiredComplianceClass:(NSString *)arg7;
- (NSDictionary *)cleanedStringsFromResponseHeaders:(NSDictionary *)arg0 forHeader:(char)arg1;
- (char)didReceiveAuthenticationError;
- (void)setWellKnownPath:(NSString *)arg0;
- (void)setPotentialContextPaths:(NSArray *)arg0;

@end
