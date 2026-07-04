/* Runtime dump - GEORPLegacyProblemRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPLegacyProblemRequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (GEORPLegacyProblemRequester *)sharedRequester;

- (void)dealloc;
- (GEORPLegacyProblemRequester *)init;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startSubmissionRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)startStatusRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)startNotificationAvailabilityRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;

@end
