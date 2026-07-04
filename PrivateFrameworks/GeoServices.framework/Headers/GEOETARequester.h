/* Runtime dump - GEOETARequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (GEOETARequester *)sharedRequester;

- (void)dealloc;
- (GEOETARequester *)init;
- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)_startRequest:(NSURLRequest *)arg0 provider:(NSObject *)arg1 isRequestUpdate:(char)arg2 connectionProperties:(struct ? *)arg3 willSendRequest:(struct ?)arg4 finished:(id /* block */)arg5 networkActivity:(/* block */ id)arg6 error:(NSError *)arg7;
- (void)startRequest:(NSURLRequest *)arg0 connectionProperties:(struct ? *)arg1 willSendRequest:(struct ?)arg2 finished:(id /* block */)arg3 networkActivity:(/* block */ id)arg4 error:(NSError *)arg5;
- (void)updateRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;
- (void)startSimpleETARequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 networkActivity:(/* block */ id)arg2 error:(NSError *)arg3;

@end
