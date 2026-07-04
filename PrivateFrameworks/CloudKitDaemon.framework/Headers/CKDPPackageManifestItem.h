/* Runtime dump - CKDPPackageManifestItem
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackageManifestItem : PBCodable <NSCopying>
{
    long long _size;
    NSData * _signature;
    char _lastItem;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData * signature;
@property (nonatomic) char hasSize;
@property (nonatomic) long long size;
@property (nonatomic) char hasLastItem;
@property (nonatomic) char lastItem;

- (long long)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPPackageManifestItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(long long)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLastItem:(char)arg0;
- (void).cxx_destruct;
- (void)setSignature:(NSData *)arg0;
- (char)hasSignature;
- (NSData *)signature;
- (void)setHasLastItem:(char)arg0;
- (char)hasLastItem;
- (char)lastItem;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasSize;
- (void)setHasSize:(char)arg0;

@end
