/* Runtime dump - CoreDAVGetAccountPropertiesTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate>
{
    NSURL * _principalURL;
    NSString * _displayName;
    NSURL * _resourceID;
    NSSet * _emailAddresses;
    NSSet * _collections;
    NSSet * _principalSearchProperties;
    char _isExpandPropertyReportSupported;
    char _fetchPrincipalSearchProperties;
    char _shouldIgnoreHomeSetOnDifferentHost;
    NSMutableSet * _redirectHistory;
}

@property (readonly, nonatomic) NSURL * principalURL;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSURL * resourceID;
@property (readonly, nonatomic) NSSet * emailAddresses;
@property (readonly, nonatomic) NSSet * collections;
@property (readonly, nonatomic) NSSet * principalSearchProperties;
@property (readonly, nonatomic) char isExpandPropertyReportSupported;
@property (nonatomic) char fetchPrincipalSearchProperties;
@property (nonatomic) <CoreDAVGetAccountPropertiesTaskGroupDelegate> * delegate;
@property (nonatomic) char shouldIgnoreHomeSetOnDifferentHost;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSSet *)collections;
- (NSURL *)resourceID;
- (void)dealloc;
- (NSString *)description;
- (NSString *)displayName;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg0;
- (NSSet *)homeSet;
- (CoreDAVGetAccountPropertiesTaskGroup *)initWithAccountInfoProvider:(NSDictionary *)arg0 taskManager:(<CoreDAVTaskManager> *)arg1;
- (void)taskGroupWillCancelWithError:(NSError *)arg0;
- (void)propFindTask:(NSObject *)arg0 parsedResponses:(id)arg1 error:(NSError *)arg2;
- (void)startTaskGroup;
- (char)shouldIgnoreHomeSetOnDifferentHost;
- (char)forceOptionsRequest;
- (void)processPrincipalHeaders:(NSDictionary *)arg0;
- (char)fetchPrincipalSearchProperties;
- (void)coaxServerForPrincipalHeaders;
- (void)_taskCompleted:(id)arg0 withError:(NSError *)arg1;
- (void)searchPropertySetTask:(NSObject *)arg0 completetWithPropertySearchSet:(NSSet *)arg1 error:(NSError *)arg2;
- (char)isExpandPropertyReportSupported;
- (void)setFetchPrincipalSearchProperties:(char)arg0;
- (NSSet *)principalSearchProperties;
- (void)setShouldIgnoreHomeSetOnDifferentHost:(char)arg0;
- (NSURL *)principalURL;
- (NSSet *)emailAddresses;

@end
