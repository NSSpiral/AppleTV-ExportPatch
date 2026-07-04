/* Runtime dump - GEOLocationShiftRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftRequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
    NSMapTable * _providers;
}

+ (GEOLocationShiftRequester *)sharedRequester;

- (void)dealloc;
- (GEOLocationShiftRequester *)init;
- (void)registerProvider:(Class)arg0;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (Class)classForProviderID:(short)arg0;

@end
