/* Runtime dump - CKDPTokenRegistrationRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying>
{
    CKDPTokenRegistrationBody * _tokenRegistrationBody;
}

@property (readonly, nonatomic) char hasTokenRegistrationBody;
@property (retain, nonatomic) CKDPTokenRegistrationBody * tokenRegistrationBody;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPTokenRegistrationRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setTokenRegistrationBody:(CKDPTokenRegistrationBody *)arg0;
- (char)hasTokenRegistrationBody;
- (CKDPTokenRegistrationBody *)tokenRegistrationBody;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
