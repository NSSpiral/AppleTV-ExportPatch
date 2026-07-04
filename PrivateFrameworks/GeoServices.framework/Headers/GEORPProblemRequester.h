/* Runtime dump - GEORPProblemRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemRequester : GEOServiceRequester

+ (GEORPProblemRequester *)sharedInstance;
+ (unsigned int)_urlType;

- (void)cancelRequest:(_UIAsyncInvocation *)arg0;
- (void)startWithRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (NSURLResponse *)_validateResponse:(NSURLResponse *)arg0;

@end
