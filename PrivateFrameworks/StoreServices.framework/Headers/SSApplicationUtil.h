/* Runtime dump - SSApplicationUtil
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSApplicationUtil : NSObject
{
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (SSApplicationUtil *)init;
- (void).cxx_destruct;
- (NSURLConnection *)_connection;
- (void)restartApplication:(id)arg0;

@end
