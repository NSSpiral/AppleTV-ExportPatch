/* Runtime dump - GEOURLConnectionSession
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLConnectionSession : NSObject
{
    struct __CFURLConnectionSession * _connectionSession;
    NSMapTable * _connectionDelegates;
    NSLock * _delegateMapLock;
}

- (void)dealloc;
- (GEOURLConnectionSession *)initPersistentSessionWithTimeout:(int)arg0 loadWidth:(int)arg1;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(NSString *)arg0;
- (struct _CFURLConnection *)newCFURLConnectionWithRequest:(struct _CFURLRequest *)arg0 delegate:(NSObject *)arg1;
- (void)removeDelegateForConnection:(struct _CFURLConnection *)arg0;
- (void)_createConnectionSessionWithPurgeTimeout:(int)arg0 loadWidth:(int)arg1;
- (NSURLConnection *)_delegateForConnection:(struct _CFURLConnection *)arg0;

@end
