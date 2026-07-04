/* Runtime dump - CKDPPkiRegisterRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPkiRegisterRequest : PBRequest <NSCopying>
{
    NSString * _currentKeyHash;
    CKDPPublicKey * _publicKey;
}

@property (readonly, nonatomic) char hasCurrentKeyHash;
@property (retain, nonatomic) NSString * currentKeyHash;
@property (readonly, nonatomic) char hasPublicKey;
@property (retain, nonatomic) CKDPPublicKey * publicKey;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPkiRegisterRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasPublicKey;
- (void)setCurrentKeyHash:(NSString *)arg0;
- (char)hasCurrentKeyHash;
- (NSString *)currentKeyHash;
- (CKDPPublicKey *)publicKey;
- (void)setPublicKey:(CKDPPublicKey *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
