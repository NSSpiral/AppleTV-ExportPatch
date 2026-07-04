/* Runtime dump - GEOMapMatchRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapMatchRequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (GEOMapMatchRequester *)sharedRequester;

- (void)dealloc;
- (GEOMapMatchRequester *)init;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;

@end
