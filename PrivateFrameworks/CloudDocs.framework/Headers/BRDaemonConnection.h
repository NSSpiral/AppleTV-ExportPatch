/* Runtime dump - BRDaemonConnection
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRDaemonConnection : NSXPCConnection
{
    NSUUID * _uuid;
    char _isUsingTokenService;
}

+ (void)initialize;
+ (BRDaemonConnection *)defaultConnection;
+ (NSURLConnection *)secondaryConnection;
+ (NSURL *)homeDirectoryURL;
+ (NSURL *)mobileDocumentsURL;
+ (NSURL *)cloudDocsAppSupportURL;
+ (NSURL *)cloudDocsCachesURL;
+ (BRDaemonConnection *)t_connectionForUUID:(id)arg0;
+ (void)t_setDefaultConnection:(NSURLConnection *)arg0;
+ (void)invalidateCachedURLProperties;
+ (void)t_setMobileDocumentsURL:(NSURL *)arg0;

- (void)dealloc;
- (BRDaemonConnection *)initUsingUserLocalDaemonTokenService;
- (struct BRXPCSyncProxy *)syncTokenProxy;
- (struct BRXPCSyncProxy *)syncProxy;
- (void)_setupAndResume;
- (BRDaemonConnection *)initUsingUserLocalDaemon;

@end
