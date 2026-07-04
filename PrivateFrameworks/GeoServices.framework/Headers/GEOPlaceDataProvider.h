/* Runtime dump - GEOPlaceDataProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataProvider : NSObject
{
    char _isLoading;
    id _finishedHandler;
    id _errorHandler;
}

@property (nonatomic) char isLoading;
@property (copy, nonatomic) id finishedHandler;
@property (copy, nonatomic) id errorHandler;

- (void)dealloc;
- (char)isLoading;
- (void)cancelRequest;
- (void)setIsLoading:(char)arg0;
- (void)setFinishedHandler:(id /* block */)arg0;
- (void)setErrorHandler:(id /* block */)arg0;
- (void)cancelProviderRequest;
- (id /* block */)finishedHandler;
- (void)requestCompleted;
- (id /* block */)errorHandler;
- (void)providerReceivedResponse:(NSURLResponse *)arg0;
- (void)providerDidCancel;
- (void)startProviderWithRequest:(NSURLRequest *)arg0 appIdentifier:(NSString *)arg1;
- (void)providerReceivedErrorCode:(int)arg0 userInfo:(NSDictionary *)arg1;
- (void)startRequest:(NSURLRequest *)arg0 appIdentifier:(NSString *)arg1 finished:(id /* block */)arg2 error:(/* block */ id)arg3;

@end
