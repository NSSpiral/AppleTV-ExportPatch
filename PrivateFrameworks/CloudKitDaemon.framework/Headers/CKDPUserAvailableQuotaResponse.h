/* Runtime dump - CKDPUserAvailableQuotaResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying>
{
    unsigned long long _storageAvailableBytes;
    struct ? _has;
}

@property (nonatomic) char hasStorageAvailableBytes;
@property (nonatomic) unsigned long long storageAvailableBytes;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserAvailableQuotaResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setStorageAvailableBytes:(unsigned long long)arg0;
- (void)setHasStorageAvailableBytes:(char)arg0;
- (char)hasStorageAvailableBytes;
- (unsigned long long)storageAvailableBytes;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
