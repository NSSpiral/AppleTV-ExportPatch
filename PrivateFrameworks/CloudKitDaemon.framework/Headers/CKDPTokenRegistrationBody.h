/* Runtime dump - CKDPTokenRegistrationBody
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying>
{
    int _apnsEnv;
    NSString * _bundleIdentifier;
    NSData * _token;
    struct ? _has;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSData * token;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString * bundleIdentifier;
@property (nonatomic) char hasApnsEnv;
@property (nonatomic) int apnsEnv;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (CKDPTokenRegistrationBody *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSData *)token;
- (void)setToken:(NSData *)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (char)hasToken;
- (char)hasBundleIdentifier;
- (void)setApnsEnv:(int)arg0;
- (void)setHasApnsEnv:(char)arg0;
- (char)hasApnsEnv;
- (int)apnsEnv;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
