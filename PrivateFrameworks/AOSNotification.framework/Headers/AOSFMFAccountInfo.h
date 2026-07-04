/* Runtime dump - AOSFMFAccountInfo
 * Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSFMFAccountInfo : NSObject <NSSecureCoding>
{
    NSString * _dsid;
    NSString * _username;
    NSString * _appServerHost;
    NSString * _appAuthToken;
    NSDictionary * _additionalInfo;
    NSString * _aosServerHost;
    NSString * _aosServerProtocolScheme;
    NSString * _aosAPSEnvironment;
    NSString * _internalAuthToken;
    int _appAuthTokenStatus;
    NSString * _legacyDsid;
    NSString * _legacyUsername;
}

@property (retain, nonatomic) NSString * dsid;
@property (retain, nonatomic) NSString * username;
@property (retain, nonatomic) NSString * appServerHost;
@property (retain, nonatomic) NSString * appAuthToken;
@property (retain, nonatomic) NSDictionary * additionalInfo;
@property (retain, nonatomic) NSString * aosServerHost;
@property (retain, nonatomic) NSString * aosServerProtocolScheme;
@property (retain, nonatomic) NSString * aosAPSEnvironment;
@property (retain, nonatomic) NSString * internalAuthToken;
@property (nonatomic) int appAuthTokenStatus;
@property (retain, nonatomic) NSString * legacyDsid;
@property (retain, nonatomic) NSString * legacyUsername;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (AOSFMFAccountInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setAosServerHost:(NSString *)arg0;
- (void)setAosServerProtocolScheme:(NSString *)arg0;
- (void)setAosAPSEnvironment:(NSString *)arg0;
- (void)setInternalAuthToken:(NSString *)arg0;
- (NSString *)internalAuthToken;
- (NSString *)aosServerHost;
- (NSString *)aosServerProtocolScheme;
- (NSString *)aosAPSEnvironment;
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
- (NSDictionary *)additionalInfo;
- (void)setAdditionalInfo:(NSDictionary *)arg0;
- (NSString *)username;

@end
