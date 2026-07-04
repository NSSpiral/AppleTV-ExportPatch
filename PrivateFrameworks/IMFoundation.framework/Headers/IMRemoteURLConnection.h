/* Runtime dump - IMRemoteURLConnection
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteURLConnection : NSObject
{
    NSURLRequest * _request;
    NSString * _bundleIdentifierForDataUsage;
    id _block;
    NSObject<OS_xpc_object> * _connection;
    char _cancelled;
    char _loading;
    char _forceCellularIfPossible;
    char _requireIDSHost;
    int _retries;
}

@property char requireIDSHost;
@property char forceCellularIfPossible;
@property (retain) NSString * bundleIdentifierForDataUsage;

- (char)_disconnect;
- (void)cancel;
- (void)dealloc;
- (void)load;
- (char)_connect;
- (void)_disconnected;
- (NSString *)bundleIdentifierForDataUsage;
- (char)requireIDSHost;
- (char)forceCellularIfPossible;
- (IMRemoteURLConnection *)initWithURLRequest:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)setForceCellularIfPossible:(char)arg0;
- (void)setBundleIdentifierForDataUsage:(NSString *)arg0;
- (void)setRequireIDSHost:(char)arg0;

@end
