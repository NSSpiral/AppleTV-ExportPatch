/* Runtime dump - CKDPZoneRetrieveChangesRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying>
{
    unsigned int _maxChangedZones;
    NSData * _syncContinuationToken;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSyncContinuationToken;
@property (retain, nonatomic) NSData * syncContinuationToken;
@property (nonatomic) char hasMaxChangedZones;
@property (nonatomic) unsigned int maxChangedZones;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZoneRetrieveChangesRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setSyncContinuationToken:(NSData *)arg0;
- (char)hasSyncContinuationToken;
- (NSData *)syncContinuationToken;
- (void)setMaxChangedZones:(unsigned int)arg0;
- (void)setHasMaxChangedZones:(char)arg0;
- (char)hasMaxChangedZones;
- (unsigned int)maxChangedZones;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
