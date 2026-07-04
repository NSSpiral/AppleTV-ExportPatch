/* Runtime dump - GEOAddressCorrectionRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionRequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (GEOAddressCorrectionRequester *)sharedRequester;

- (void)dealloc;
- (GEOAddressCorrectionRequester *)init;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startAddressCorrectionInitRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startAddressCorrectionUpdateRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;

@end
