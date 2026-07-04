/* Runtime dump - GEOServiceRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceRequester : NSObject
{
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
}

+ (NSString *)_debugRequestName;
+ (unsigned int)_urlType;
+ (NSNumber *)_serviceTypeNumber;
+ (int)_experimentType;
+ (int)_experimentDispatcherRequestTypeForRequest:(NSURLRequest *)arg0;
+ (char)shouldAttributeData;
+ (void)setAttributeData;

- (void)dealloc;
- (GEOServiceRequester *)init;
- (void)_startWithRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)_cancelRequest:(NSURLRequest *)arg0;
- (NSURLResponse *)_validateResponse:(NSURLResponse *)arg0;
- (void)_startWithRequest:(NSURLRequest *)arg0 traits:(NSArray *)arg1 completionHandler:(id /* block */)arg2;

@end
