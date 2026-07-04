/* Runtime dump - CKDPZone
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZone : PBCodable <NSCopying>
{
    NSString * _etag;
    CKDPProtectionInfo * _protectionInfo;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneIdentifier;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo * protectionInfo;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZone *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (void)setProtectionInfo:(CKDPProtectionInfo *)arg0;
- (char)hasProtectionInfo;
- (CKDPProtectionInfo *)protectionInfo;
- (void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg0;
- (char)hasZoneIdentifier;
- (CKDPRecordZoneIdentifier *)zoneIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
