/* Runtime dump - CKDPShareRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareRetrieveRequest : PBRequest <NSCopying>
{
    CKDPShareIdentifier * _shareId;
    CKDPRecordZoneIdentifier * _zoneId;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasZoneId;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneId;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (void)setZoneId:(CKDPRecordZoneIdentifier *)arg0;
- (char)hasShareId;
- (CKDPShareIdentifier *)shareId;
- (char)hasZoneId;
- (CKDPRecordZoneIdentifier *)zoneId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
