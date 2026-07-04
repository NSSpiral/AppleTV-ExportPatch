/* Runtime dump - CKDPMescalSignatureResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying>
{
    NSData * _mescalHeaderData;
    int _status;
    struct ? _has;
}

@property (readonly, nonatomic) char hasMescalHeaderData;
@property (retain, nonatomic) NSData * mescalHeaderData;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPMescalSignatureResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (NSData *)mescalHeaderData;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setMescalHeaderData:(NSData *)arg0;
- (char)hasMescalHeaderData;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
