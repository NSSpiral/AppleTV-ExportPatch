/* Runtime dump - CKDPRecordRetrieveChangesRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying>
{
    unsigned int _maxChanges;
    int _requestedChangeTypes;
    CKDPRequestedFields * _requestedFields;
    NSData * _syncContinuationToken;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSyncContinuationToken;
@property (retain, nonatomic) NSData * syncContinuationToken;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields * requestedFields;
@property (nonatomic) char hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) char hasRequestedChangeTypes;
@property (nonatomic) int requestedChangeTypes;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveChangesRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setRequestedFields:(CKDPRequestedFields *)arg0;
- (char)hasRequestedFields;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (CKDPRequestedFields *)requestedFields;
- (void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg0;
- (char)hasZoneIdentifier;
- (CKDPRecordZoneIdentifier *)zoneIdentifier;
- (void)setMaxChanges:(unsigned int)arg0;
- (void)setHasMaxChanges:(char)arg0;
- (char)hasMaxChanges;
- (unsigned int)maxChanges;
- (void)setSyncContinuationToken:(NSData *)arg0;
- (char)hasSyncContinuationToken;
- (NSData *)syncContinuationToken;
- (void)setRequestedChangeTypes:(int)arg0;
- (int)requestedChangeTypes;
- (void)setHasRequestedChangeTypes:(char)arg0;
- (char)hasRequestedChangeTypes;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
