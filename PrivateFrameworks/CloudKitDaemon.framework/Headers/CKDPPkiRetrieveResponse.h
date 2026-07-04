/* Runtime dump - CKDPPkiRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPkiRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray * _publicKeys;
}

@property (retain, nonatomic) NSMutableArray * publicKeys;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPkiRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addPublicKey:(NSString *)arg0;
- (unsigned int)publicKeysCount;
- (void)clearPublicKeys;
- (NSObject *)publicKeyAtIndex:(unsigned int)arg0;
- (NSMutableArray *)publicKeys;
- (void)setPublicKeys:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
