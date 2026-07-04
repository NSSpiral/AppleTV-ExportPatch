/* Runtime dump - CKDPPackageManifestHeader
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackageManifestHeader : PBCodable <NSCopying>
{
    NSData * _signature;
    int _version;
    struct ? _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData * signature;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPackageManifestHeader *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVersion:(int)arg0;
- (int)version;
- (void).cxx_destruct;
- (void)setSignature:(NSData *)arg0;
- (char)hasSignature;
- (NSData *)signature;
- (void)mergeFrom:(NSObject *)arg0;
- (void)setHasVersion:(char)arg0;
- (char)hasVersion;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
