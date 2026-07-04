/* Runtime dump - GEODirectionsProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsProvider : NSObject
{
    char _isLoading;
    int _requestType;
    id _finishedHandler;
    id _errorHandler;
}

@property (nonatomic) char isLoading;
@property (copy, nonatomic) id finishedHandler;
@property (copy, nonatomic) id errorHandler;

- (void)dealloc;
- (char)isLoading;
- (void)startRequest:(NSURLRequest *)arg0 finished:(id /* block */)arg1 error:(/* block */ id)arg2;
- (void)cancelRequest;
- (void)setIsLoading:(char)arg0;
- (void)setFinishedHandler:(id /* block */)arg0;
- (void)setErrorHandler:(id /* block */)arg0;
- (void)startProviderWithRequest:(NSURLRequest *)arg0;
- (void)cancelProviderRequest;
- (id /* block */)finishedHandler;
- (void)requestCompleted;
- (id /* block */)errorHandler;
- (void)providerReceivedError:(NSError *)arg0 problemDetails:(struct ? *)arg1;
- (void)providerReceivedErrorCode:(int)arg0 userInfo:(NSDictionary *)arg1 problemDetails:(struct ? *)arg2;
- (void)providerReceivedResponse:(NSURLResponse *)arg0;
- (void)providerDidCancel;

@end
