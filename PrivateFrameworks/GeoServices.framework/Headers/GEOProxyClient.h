/* Runtime dump - GEOProxyClient
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProxyClient : NSObject
{
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSData * _auditToken;
    char _isApplication;
}

@property (retain, nonatomic) NSString * bundleIdentifier;
@property (retain, nonatomic) NSString * bundleVersion;
@property (retain, nonatomic) NSData * auditToken;
@property (nonatomic) char isApplication;

+ (GEOProxyClient *)currentClient;
+ (GEOProxyClient *)compositeClientForClients:(id)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (NSData *)auditToken;
- (void)setBundleIdentifier:(NSString *)arg0;
- (char)isApplication;
- (void)setIsApplication:(char)arg0;
- (void)setAuditToken:(NSData *)arg0;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (NSDictionary *)URLConnectionProperties;

@end
