/* Runtime dump - SWCManager
 * Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

@interface SWCManager : NSObject <NSXPCListenerDelegate, SWCXPCServer>
{
    NSMutableArray * _database;
    NSXPCListener * _xpcListener;
    NSMutableArray * _netRequests;
    NSObject<OS_dispatch_source> * _retryTimer;
    NSObject<OS_dispatch_source> * _recheckTimer;
    NSMutableArray * _xpcRequests;
    char _started;
    char _verifyEV;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SWCManager *)init;
- (void)stop;
- (void)start;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(char)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)_connectionInvalidated:(id)arg0;
- (void)_scheduleRetries;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;
- (void)removeBundleID:(NSObject *)arg0;
- (void)checkService:(NSString *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2 reply:(id /* block */)arg3;
- (void)getInfoForService:(NSString *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2 reply:(id /* block */)arg3;
- (void)addService:(NSString *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2 reply:(id /* block */)arg3;
- (void)removeService:(NSString *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2 reply:(id /* block */)arg3;
- (void)setService:(NSString *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2 mask:(unsigned int)arg3 flags:(unsigned int)arg4 reply:(id /* block */)arg5;
- (void)addAllAppsWithReply:(id /* block */)arg0;
- (void)logControl:(NSString *)arg0 reply:(id /* block */)arg1;
- (void)show:(NSString *)arg0 reply:(id /* block */)arg1;
- (long)_ensureDatabaseLoaded;
- (void)_retryDownloads;
- (void)_completeAppsRequestForURLConnection:(NSURLConnection *)arg0 status:(long)arg1 services:(NSSet *)arg2;
- (void)_sanitizeDatabase;
- (long)_saveDatabase;
- (void)_schedulePeriodicRechecks;
- (void)addBundleID:(NSObject *)arg0;
- (NSObject *)_appEntitlementsByID:(NSObject *)arg0;
- (void)_parseServiceDomainString:(NSString *)arg0 legacy:(char)arg1 service:(id *)arg2 domain:(id *)arg3;
- (NSObject *)_findService:(NSObject *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2;
- (long)_startAppsRequestForDomain:(NSString *)arg0;
- (void)_performPeriodicRechecks;
- (long)_verifyTrust:(struct __SecTrust *)arg0;
- (NSURLConnection *)_findAppRequestForURLConnection:(NSURLConnection *)arg0;
- (long)_addService:(NSObject *)arg0 app:(NSString *)arg1 domain:(NSString *)arg2;
- (void)addAllApps;
- (NSObject *)_installedAppByID:(NSObject *)arg0;
- (void)connection:(NSURLConnection *)arg0 willSendRequestForAuthenticationChallenge:(NSObject *)arg1;

@end
