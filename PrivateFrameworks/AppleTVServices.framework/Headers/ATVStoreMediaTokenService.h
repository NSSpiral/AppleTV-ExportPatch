/* Runtime dump - ATVStoreMediaTokenService
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreMediaTokenService : NSObject
{
    NSString * _tokenFilePath;
    ATVStoreMediaToken * _cachedMediaToken;
    NSString * _clientIdentifier;
    NSString * _clientVersion;
}

@property (readonly, nonatomic) NSString * clientIdentifier;
@property (readonly, nonatomic) NSString * clientVersion;
@property (readonly, nonatomic) NSString * tokenFilePath;
@property (retain, nonatomic) ATVStoreMediaToken * cachedMediaToken;

- (NSString *)clientIdentifier;
- (void).cxx_destruct;
- (NSString *)_readMediaToken;
- (void)_writeMediaToken:(NSString *)arg0;
- (ATVStoreMediaToken *)cachedMediaToken;
- (void)setCachedMediaToken:(ATVStoreMediaToken *)arg0;
- (char)_isGoodToken:(NSString *)arg0;
- (void)_refreshMediaTokenIfNeeded:(id)arg0;
- (void)_getTokenFromServer:(NSObject *)arg0;
- (char)_shouldRefreshToken:(NSString *)arg0;
- (double)_refreshPercentage;
- (double)_refreshTime;
- (NSURLRequest *)_tokenRequest;
- (NSDictionary *)_requestParameters;
- (NSURL *)_URLWithURL:(NSURL *)arg0 queryParmaters:(id)arg1;
- (NSDictionary *)_requestHeaders;
- (NSString *)clientVersion;
- (NSString *)tokenFilePath;
- (ATVStoreMediaTokenService *)initWithClientIdentifier:(NSString *)arg0 clientVersion:(NSString *)arg1;
- (void)invalidateMediaToken;
- (void)requestMediaTokenWithCompletion:(id /* block */)arg0;

@end
