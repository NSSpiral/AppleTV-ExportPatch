/* Runtime dump - SSVPlatformRequestOperation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlatformRequestOperation : NSOperation
{
    NSMutableDictionary * _additionalParameters;
    NSString * _caller;
    SSVPlatformContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _itemIdentifiers;
    NSString * _imageProfile;
    NSString * _keyProfile;
    int _personalizationStyle;
    id _responseBlock;
    NSString * _storeFrontSuffix;
    NSNumber * _timeoutInterval;
    NSString * _userAgent;
}

@property (copy) NSArray * itemIdentifiers;
@property (copy) NSString * imageProfile;
@property (copy) NSString * keyProfile;
@property int personalizationStyle;
@property (copy) NSString * storeFrontSuffix;
@property (copy) NSNumber * timeoutInterval;
@property (copy) id responseBlock;

- (void)setResponseBlock:(id /* block */)arg0;
- (id /* block */)responseBlock;
- (id)valueForRequestParameter:(id)arg0;
- (SSVPlatformRequestOperation *)init;
- (void)main;
- (void).cxx_destruct;
- (void)setTimeoutInterval:(NSNumber *)arg0;
- (NSNumber *)timeoutInterval;
- (void)setKeyProfile:(NSString *)arg0;
- (void)setPersonalizationStyle:(int)arg0;
- (void)setValue:(NSObject *)arg0 forRequestParameter:(id)arg1;
- (NSString *)storeFrontSuffix;
- (void)setStoreFrontSuffix:(NSString *)arg0;
- (NSURLRequest *)_lookupWithRequest:(NSURLRequest *)arg0 error:(id *)arg1;
- (NSString *)keyProfile;
- (int)personalizationStyle;
- (SSVPlatformRequestOperation *)initWithPlatformContext:(SSVPlatformContext *)arg0;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (void)_makeLookupRequestWithPersonalizationStyle:(int)arg0;
- (id)_callerValue;
- (NSArray *)itemIdentifiers;
- (NSString *)imageProfile;
- (NSString *)_URLBagContext;
- (void)_enumerateQueryParametersUsingBlock:(id /* block */)arg0;
- (void)setImageProfile:(NSString *)arg0;
- (void)setItemIdentifiers:(NSArray *)arg0;
- (void)_setCaller:(JSWTFMainThreadCaller *)arg0;
- (void)_setUserAgent:(id)arg0;

@end
