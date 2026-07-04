/* Runtime dump - SSVLoadNearbyAppsOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLoadNearbyAppsOperation : NSOperation
{
    NSString * _baseURLString;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CLLocation * _location;
    NSMutableDictionary * _parameters;
    id _responseBlock;
    NSString * _storeFrontSuffix;
    NSString * _userAgent;
}

@property (readonly) CLLocation * location;
@property (copy) NSString * pointOfInterestIdentifier;
@property (copy) NSString * pointOfInterestProviderIdentifier;
@property (copy) NSString * pointOfInterestProviderURL;
@property (copy) id responseBlock;
@property (copy) NSString * storeFrontSuffix;
@property (copy) NSString * userAgent;

- (void)setResponseBlock:(id /* block */)arg0;
- (id /* block */)responseBlock;
- (CLLocation *)location;
- (void)main;
- (void).cxx_destruct;
- (void)setUserAgent:(NSString *)arg0;
- (NSString *)userAgent;
- (NSString *)storeFrontSuffix;
- (void)setStoreFrontSuffix:(NSString *)arg0;
- (NSString *)_storeFrontSuffix;
- (NSURLRequest *)_lookupWithRequest:(NSURLRequest *)arg0 error:(id *)arg1;
- (SSVLoadNearbyAppsOperation *)initWithBaseURL:(NSURL *)arg0 location:(CLLocation *)arg1;
- (NSString *)pointOfInterestIdentifier;
- (NSString *)pointOfInterestProviderIdentifier;
- (NSString *)pointOfInterestProviderURL;
- (void)setPointOfInterestIdentifier:(NSString *)arg0;
- (void)setPointOfInterestProviderIdentifier:(NSString *)arg0;
- (void)setPointOfInterestProviderURL:(NSString *)arg0;

@end
