/* Runtime dump - CKDPPublicKey
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPublicKey : PBCodable <NSCopying>
{
    NSData * _keyData;
    NSString * _keyHash;
    CKDPIdentifier * _userId;
}

@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) CKDPIdentifier * userId;
@property (readonly, nonatomic) char hasKeyData;
@property (retain, nonatomic) NSData * keyData;
@property (readonly, nonatomic) char hasKeyHash;
@property (retain, nonatomic) NSString * keyHash;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPublicKey *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setUserId:(CKDPIdentifier *)arg0;
- (void)setKeyData:(NSData *)arg0;
- (void)setKeyHash:(NSString *)arg0;
- (char)hasUserId;
- (char)hasKeyData;
- (char)hasKeyHash;
- (CKDPIdentifier *)userId;
- (NSData *)keyData;
- (NSString *)keyHash;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
