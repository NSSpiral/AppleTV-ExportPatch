/* Runtime dump - CKDPPackageManifestSection
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackageManifestSection : PBCodable <NSCopying>
{
    long long _size;
    NSData * _signature;
    char _lastSection;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData * signature;
@property (nonatomic) char hasSize;
@property (nonatomic) long long size;
@property (nonatomic) char hasLastSection;
@property (nonatomic) char lastSection;

- (long long)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPackageManifestSection *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(long long)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setSignature:(NSData *)arg0;
- (char)hasSignature;
- (NSData *)signature;
- (void)setLastSection:(char)arg0;
- (void)setHasLastSection:(char)arg0;
- (char)hasLastSection;
- (char)lastSection;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasSize;
- (void)setHasSize:(char)arg0;

@end
