/* Runtime dump - CKDPZoneSaveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneSaveRequest : PBRequest <NSCopying>
{
    NSString * _etag;
    CKDPZone * _recordZone;
    NSString * _zoneProtectionInfoTag;
}

@property (readonly, nonatomic) char hasRecordZone;
@property (retain, nonatomic) CKDPZone * recordZone;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString * zoneProtectionInfoTag;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPZoneSaveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRecordZone:(CKDPZone *)arg0;
- (void)setZoneProtectionInfoTag:(NSString *)arg0;
- (char)hasRecordZone;
- (char)hasZoneProtectionInfoTag;
- (CKDPZone *)recordZone;
- (NSString *)zoneProtectionInfoTag;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
