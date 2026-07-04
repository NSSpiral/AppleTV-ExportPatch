/* Runtime dump - GEOETAProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAProvider : NSObject

- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)cancelRequest;
- (void)startRequest:(NSURLRequest *)arg0 connectionProperties:(struct ? *)arg1 willSendRequest:(struct ?)arg2 finished:(id /* block */)arg3 error:(/* block */ id)arg4;
- (void)updateRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)startSimpleETARequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;

@end
