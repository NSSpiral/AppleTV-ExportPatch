/* Runtime dump - QLThreadInvoker
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThreadInvoker : NSObject
{
    NSURLConnection * _connection;
    NSData * _data;
    NSError * _error;
}

- (QLThreadInvoker *)initWithConnection:(NSURLConnection *)arg0 data:(NSData *)arg1 error:(NSError *)arg2;
- (void)connectionDidReceiveDataLengthReceived:(id)arg0;
- (void)dealloc;
- (void)connectionDidReceiveData:(NSData *)arg0;
- (void)connectionDidFailWithError:(NSError *)arg0;

@end
