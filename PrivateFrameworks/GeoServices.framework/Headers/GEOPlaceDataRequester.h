/* Runtime dump - GEOPlaceDataRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataRequester : GEOServiceRequester

+ (GEOPlaceDataRequester *)sharedInstance;
+ (unsigned int)_urlType;
+ (NSNumber *)_serviceTypeNumber;
+ (int)_experimentType;
+ (int)_experimentDispatcherRequestTypeForRequest:(NSURLRequest *)arg0;

- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startWithRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (NSURLResponse *)_validateResponse:(NSURLResponse *)arg0;

@end
