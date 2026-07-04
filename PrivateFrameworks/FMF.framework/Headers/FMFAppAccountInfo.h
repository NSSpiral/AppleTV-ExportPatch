/* Runtime dump - FMFAppAccountInfo
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFAppAccountInfo : NSObject
{
    NSString * _dsid;
    NSString * _username;
    NSString * _appServerHost;
    NSString * _appAuthToken;
    int _appAuthTokenStatus;
    NSString * _legacyDsid;
    NSString * _legacyUsername;
}

@property (retain, nonatomic) NSString * dsid;
@property (retain, nonatomic) NSString * username;
@property (retain, nonatomic) NSString * appServerHost;
@property (retain, nonatomic) NSString * appAuthToken;
@property (nonatomic) int appAuthTokenStatus;
@property (retain, nonatomic) NSString * legacyDsid;
@property (retain, nonatomic) NSString * legacyUsername;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)dsid;
- (void)setDsid:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSString *)appAuthToken;
- (int)appAuthTokenStatus;
- (NSString *)appServerHost;
- (NSString *)legacyDsid;
- (NSString *)legacyUsername;
- (void)setAppServerHost:(NSString *)arg0;
- (void)setAppAuthToken:(NSString *)arg0;
- (void)setAppAuthTokenStatus:(int)arg0;
- (void)setLegacyDsid:(NSString *)arg0;
- (void)setLegacyUsername:(NSString *)arg0;
- (NSString *)username;

@end
