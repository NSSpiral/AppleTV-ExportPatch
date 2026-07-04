/* Runtime dump - CKDPPkiRegisterResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPkiRegisterResponse : PBCodable <NSCopying>
{
    CKDPPublicKey * _publicKey;
}

@property (readonly, nonatomic) char hasPublicKey;
@property (retain, nonatomic) CKDPPublicKey * publicKey;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPkiRegisterResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasPublicKey;
- (CKDPPublicKey *)publicKey;
- (void)setPublicKey:(CKDPPublicKey *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
