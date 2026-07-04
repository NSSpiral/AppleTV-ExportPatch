/* Runtime dump - CKDPMescalSignatureRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSignatureRequest : PBRequest <NSCopying>
{
    NSData * _mescalData;
}

@property (readonly, nonatomic) char hasMescalData;
@property (retain, nonatomic) NSData * mescalData;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPMescalSignatureRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (NSData *)mescalData;
- (void)setMescalData:(NSData *)arg0;
- (char)hasMescalData;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
