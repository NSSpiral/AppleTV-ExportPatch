/* Runtime dump - CKDPZoneRetrieveChangesResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying>
{
    NSMutableArray * _changedZones;
    int _status;
    NSData * _syncContinuationToken;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * changedZones;
@property (readonly, nonatomic) char hasSyncContinuationToken;
@property (retain, nonatomic) NSData * syncContinuationToken;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZoneRetrieveChangesResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setSyncContinuationToken:(NSData *)arg0;
- (char)hasSyncContinuationToken;
- (NSData *)syncContinuationToken;
- (NSMutableArray *)changedZones;
- (void)addChangedZones:(id)arg0;
- (unsigned int)changedZonesCount;
- (void)clearChangedZones;
- (NSObject *)changedZonesAtIndex:(unsigned int)arg0;
- (void)setChangedZones:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
