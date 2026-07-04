/* Runtime dump - GEODirectionsRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (GEODirectionsRequester *)sharedRequester;

- (void)dealloc;
- (GEODirectionsRequester *)init;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;

@end
