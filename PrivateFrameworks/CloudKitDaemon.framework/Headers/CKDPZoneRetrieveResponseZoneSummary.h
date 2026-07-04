/* Runtime dump - CKDPZoneRetrieveResponseZoneSummary
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying>
{
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    NSData * _clientChangeToken;
    NSData * _currentServerContinuationToken;
    int _deviceCount;
    CKDPZone * _targetZone;
    struct ? _has;
}

@property (readonly, nonatomic) char hasTargetZone;
@property (retain, nonatomic) CKDPZone * targetZone;
@property (readonly, nonatomic) char hasCurrentServerContinuationToken;
@property (retain, nonatomic) NSData * currentServerContinuationToken;
@property (readonly, nonatomic) char hasClientChangeToken;
@property (retain, nonatomic) NSData * clientChangeToken;
@property (nonatomic) char hasDeviceCount;
@property (nonatomic) int deviceCount;
@property (nonatomic) char hasAssetQuotaUsage;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) char hasMetadataQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZoneRetrieveResponseZoneSummary *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSData *)currentServerContinuationToken;
- (void)setTargetZone:(CKDPZone *)arg0;
- (void)setCurrentServerContinuationToken:(NSData *)arg0;
- (void)setClientChangeToken:(NSData *)arg0;
- (char)hasTargetZone;
- (char)hasCurrentServerContinuationToken;
- (char)hasClientChangeToken;
- (void)setDeviceCount:(int)arg0;
- (void)setHasDeviceCount:(char)arg0;
- (char)hasDeviceCount;
- (void)setAssetQuotaUsage:(long long)arg0;
- (void)setHasAssetQuotaUsage:(char)arg0;
- (char)hasAssetQuotaUsage;
- (void)setMetadataQuotaUsage:(long long)arg0;
- (void)setHasMetadataQuotaUsage:(char)arg0;
- (char)hasMetadataQuotaUsage;
- (CKDPZone *)targetZone;
- (NSData *)clientChangeToken;
- (int)deviceCount;
- (long long)assetQuotaUsage;
- (long long)metadataQuotaUsage;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
