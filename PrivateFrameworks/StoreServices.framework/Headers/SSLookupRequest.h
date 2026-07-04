/* Runtime dump - SSLookupRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext * _authenticationContext;
    int _personalizationStyle;
    SSLookupProperties * _properties;
    int _resultFilters;
}

@property (copy, nonatomic) NSString * keyProfile;
@property (nonatomic) int localizationStyle;
@property (copy, nonatomic) SSAuthenticationContext * authenticationContext;
@property (nonatomic) char authenticatesIfNeeded;
@property (nonatomic) int personalizationStyle;
@property (nonatomic) int resultFilters;
@property (readonly, copy, nonatomic) SSLookupProperties * _lookupProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SSLookupRequest *)initWithLocation:(NSObject *)arg0;
- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)startWithCompletionBlock:(id /* block */)arg0;
- (void)setLocalizationStyle:(int)arg0;
- (id)valueForRequestParameter:(id)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSLookupRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSLookupRequest *)init;
- (char)start;
- (SSAuthenticationContext *)authenticationContext;
- (void)setKeyProfile:(NSString *)arg0;
- (void)setPersonalizationStyle:(int)arg0;
- (void)setValue:(NSObject *)arg0 forRequestParameter:(id)arg1;
- (void)startWithLookupBlock:(id /* block */)arg0;
- (NSString *)keyProfile;
- (int)localizationStyle;
- (char)authenticatesIfNeeded;
- (void)setAuthenticatesIfNeeded:(char)arg0;
- (SSLookupProperties *)_lookupProperties;
- (void)_setTimeoutInterval:(id)arg0;
- (int)personalizationStyle;
- (int)resultFilters;
- (void)setResultFilters:(int)arg0;

@end
