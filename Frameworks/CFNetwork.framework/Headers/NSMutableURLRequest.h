/* Runtime dump - NSMutableURLRequest
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString * HTTPMethod;
@property (copy) NSDictionary * allHTTPHeaderFields;
@property (copy) NSData * HTTPBody;
@property (retain) NSInputStream * HTTPBodyStream;
@property char HTTPShouldHandleCookies;
@property char HTTPShouldUsePipelining;
@property (copy) NSURL * URL;
@property unsigned int cachePolicy;
@property double timeoutInterval;
@property (copy) NSURL * mainDocumentURL;
@property unsigned int networkServiceType;
@property char allowsCellularAccess;

+ (int)hashForPlayerID:(NSObject *)arg0;
+ (NSURL *)_gkHTTPRequestWithURL:(NSString *)arg0 method:(NSString *)arg1 postData:(NSData *)arg2;

- (void)setBuildVersion:(NSString *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (void)setPushToken:(NSData *)arg0;
- (void)setProtocolVersion:(NSString *)arg0;
- (void)setInternal:(char)arg0;
- (void)setPlayerID:(NSString *)arg0 hash:(int)arg1 authToken:(NSString *)arg2;
- (void)setGameDescriptor:(NSDictionary *)arg0;
- (void)setStoreMode:(id)arg0;
- (void)setDeviceUniqueID:(NSObject *)arg0;
- (void)setSAPSignature:(NSObject *)arg0;
- (void)setSAPversion:(id)arg0;
- (void)setProcessName:(NSString *)arg0;
- (void)setRestrictions:(SAUpdateRestrictions *)arg0;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(NSObject *)arg0 preferUsingPassword:(char)arg1;
- (void)aa_setBodyWithParameters:(NSDictionary *)arg0;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(NSObject *)arg0;
- (char)aa_addGrandSlamAuthorizationHeaderWithAccount:(NSObject *)arg0 grandslamToken:(NSString *)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg0;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceIDHeader;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(NSObject *)arg0;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addiTunesHeadersWithAccount:(NSObject *)arg0;
- (char)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg0;
- (void)_web_setHTTPContentType:(NSObject *)arg0;
- (void)_web_setHTTPReferrer:(id)arg0;
- (void)_web_setHTTPUserAgent:(id)arg0;
- (void)bindToCommand:(struct __CNPluginCommand *)arg0;
- (void)setMainDocumentURL:(NSURL *)arg0;
- (void)setNetworkServiceType:(unsigned int)arg0;
- (void)setBoundInterfaceIdentifier:(NSString *)arg0;
- (void)setHTTPContentType:(NSObject *)arg0;
- (void)setHTTPExtraCookies:(id)arg0;
- (void)setHTTPReferrer:(id)arg0;
- (void)setHTTPUserAgent:(id)arg0;
- (void)setRequestPriority:(unsigned int)arg0;
- (unsigned int)requestPriority;
- (void)setExpectedWorkload:(unsigned long long)arg0;
- (void)_setTimeWindowDelay:(double)arg0;
- (void)_setTimeWindowDuration:(double)arg0;
- (void)setContentDispositionEncodingFallbackArray:(NSArray *)arg0;
- (void)setCachePolicy:(unsigned int)arg0;
- (void)setHTTPShouldUsePipelining:(char)arg0;
- (NSMutableURLRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setURL:(NSString *)arg0;
- (void)setAllowsCellularAccess:(char)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void)setValue:(NSObject *)arg0 forHTTPHeaderField:(id)arg1;
- (void)setHTTPShouldHandleCookies:(char)arg0;
- (void)setHTTPBodyStream:(NSObject *)arg0;
- (void)setAllHTTPHeaderFields:(NSDictionary *)arg0;
- (void)setHTTPBody:(NSObject *)arg0;
- (void)setHTTPMethod:(NSString *)arg0;
- (void)addValue:(NSValue *)arg0 forHTTPHeaderField:(id)arg1;

@end
