/* Runtime dump - GEOURLSessionConnection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLSessionConnection : NSObject
{
    struct _CFURLConnection * _cfConnection;
    id _delegate;
    GEOURLConnectionSession * _connectionSession;
}

- (void)cancel;
- (void)dealloc;
- (GEOURLSessionConnection *)initWithCFRequest:(struct _CFURLRequest *)arg0 delegate:(NSObject *)arg1 usingSession:(NSObject *)arg2;
- (void)connectionDidReceiveResponse:(struct _CFURLResponse *)arg0;
- (void)connectionDidReceiveData:(NSData *)arg0;
- (void)connectionDidFinishLoading;
- (void)connectionDidFailWithError:(NSError *)arg0;
- (void)connectionDidTerminate;

@end
