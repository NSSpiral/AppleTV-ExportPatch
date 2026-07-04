/* Runtime dump - CKDPRecordIdentifier
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier * _value;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKDPIdentifier * value;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneIdentifier;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPIdentifier *)value;
- (void)setValue:(CKDPIdentifier *)arg0;
- (CKDPRecordIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg0;
- (char)hasZoneIdentifier;
- (CKDPRecordZoneIdentifier *)zoneIdentifier;
- (char)hasValue;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
