/* Runtime dump - IDSRemoteURLConnection
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRemoteURLConnection : NSObject
{
    NSURLRequest * _request;
    NSString * _bundleIdentifierForDataUsage;
    id _block;
    NSObject<OS_xpc_object> * _connection;
    char _cancelled;
    char _loading;
    char _forceCellularIfPossible;
    int _retries;
    char _requiresIDSHost;
}

@property char requiresIDSHost;
@property char forceCellularIfPossible;
@property (retain) NSString * bundleIdentifierForDataUsage;

- (char)_disconnect;
- (void)cancel;
- (void)dealloc;
- (void)load;
- (char)_connect;
- (void)setRequiresIDSHost:(char)arg0;
- (char)requiresIDSHost;
- (void)_disconnected;
- (NSString *)bundleIdentifierForDataUsage;
- (char)forceCellularIfPossible;
- (IDSRemoteURLConnection *)initWithURLRequest:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)setForceCellularIfPossible:(char)arg0;
- (void)setBundleIdentifierForDataUsage:(NSString *)arg0;

@end
