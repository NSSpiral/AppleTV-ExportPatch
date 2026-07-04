/* Runtime dump - CKDPZoneRetrieveChangesResponseChangedZone
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying>
{
    int _changeType;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
    struct ? _has;
}

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneIdentifier;
@property (nonatomic) char hasChangeType;
@property (nonatomic) int changeType;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZoneRetrieveChangesResponseChangedZone *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg0;
- (char)hasZoneIdentifier;
- (CKDPRecordZoneIdentifier *)zoneIdentifier;
- (void)setHasChangeType:(char)arg0;
- (char)hasChangeType;
- (void)setChangeType:(int)arg0;
- (int)changeType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
