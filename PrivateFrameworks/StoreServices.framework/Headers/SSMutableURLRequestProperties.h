/* Runtime dump - SSMutableURLRequestProperties
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property int allowedRetryCount;
@property unsigned int cachePolicy;
@property (copy) NSString * clientIdentifier;
@property long long expectedContentLength;
@property (copy) NSData * HTTPBody;
@property (copy) NSString * HTTPMethod;
@property char ITunesStoreRequest;
@property int machineDataStyle;
@property unsigned int networkServiceType;
@property double timeoutInterval;
@property (copy) NSString * URLBagKey;
@property (retain) NSURL * URL;
@property (copy) NSArray * userAgentComponents;
@property (copy) NSDictionary * HTTPHeaders;
@property (copy) NSDictionary * requestParameters;
@property char allowsBootstrapCellularData;
@property (copy) NSString * clientAuditBundleIdentifier;
@property (copy) NSData * clientAuditTokenData;
@property (retain) NSInputStream * HTTPBodyStream;
@property int KBSyncType;
@property char largeDownload;
@property char requiresCellularDataNetwork;
@property char requiresExtendedValidationCertificates;
@property char requiresHTTPS;
@property char shouldAddKBSyncData;
@property char shouldDecodeResponse;
@property char shouldDisableCellular;
@property char shouldDisableCellularFallback;
@property char shouldProcessProtocol;
@property char shouldSendSecureToken;
@property char shouldSetCookies;
@property int URLBagType;
@property (copy) id URLBagURLBlock;
@property (copy) NSArray * URLs;

+ (NSURL *)newForRadioRequestURL:(NSURL *)arg0;
+ (NSURL *)newForRadioRequestURL:(NSURL *)arg0 accountUniqueIdentifier:(NSNumber *)arg1;

- (void)setNetworkServiceType:(unsigned int)arg0;
- (void)setAllowedRetryCount:(int)arg0;
- (void)setCachePolicy:(unsigned int)arg0;
- (void)setITunesStoreRequest:(char)arg0;
- (void)setURLBagKey:(NSString *)arg0;
- (void)setRequestParameters:(NSDictionary *)arg0;
- (void)setShouldProcessProtocol:(char)arg0;
- (void)setKBSyncType:(int)arg0;
- (SSMutableURLRequestProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void)setClientIdentifier:(NSString *)arg0;
- (void)setURL:(NSURL *)arg0;
- (void)setURLs:(id)arg0;
- (void)setHTTPHeaders:(NSDictionary *)arg0;
- (void)setMachineDataStyle:(int)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void)setValue:(NSObject *)arg0 forHTTPHeaderField:(id)arg1;
- (void)setHTTPBodyStream:(NSObject *)arg0;
- (void)setHTTPBody:(NSObject *)arg0;
- (void)setValue:(NSObject *)arg0 forRequestParameter:(id)arg1;
- (void)setHTTPMethod:(NSString *)arg0;
- (void)setExpectedContentLength:(long long)arg0;
- (void)setAllowsBootstrapCellularData:(char)arg0;
- (void)setUserAgentComponents:(NSArray *)arg0;
- (void)setShouldDisableCellular:(char)arg0;
- (void)setShouldDisableCellularFallback:(char)arg0;
- (void)setLargeDownload:(char)arg0;
- (void)setMultiPartFormDataWithDictionary:(NSDictionary *)arg0;
- (void)setRequiresCellularDataNetwork:(char)arg0;
- (void)setRequiresExtendedValidationCertificates:(char)arg0;
- (void)setRequiresHTTPS:(char)arg0;
- (void)setShouldAddKBSyncData:(char)arg0;
- (void)setShouldDecodeResponse:(char)arg0;
- (void)setShouldSendSecureToken:(char)arg0;
- (void)setShouldSetCookies:(char)arg0;
- (void)setClientAuditBundleIdentifier:(NSString *)arg0;
- (void)setClientAuditTokenData:(NSData *)arg0;
- (void)setURLBagType:(int)arg0;
- (void)setURLBagURLBlock:(id /* block */)arg0;

@end
