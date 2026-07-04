/* Runtime dump - CKDPQueryRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying>
{
    NSData * _continuationMarker;
    unsigned int _limit;
    CKDPQuery * _query;
    CKDPRequestedFields * _requestedFields;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
    struct ? _has;
}

@property (readonly, nonatomic) char hasQuery;
@property (retain, nonatomic) CKDPQuery * query;
@property (readonly, nonatomic) char hasContinuationMarker;
@property (retain, nonatomic) NSData * continuationMarker;
@property (nonatomic) char hasLimit;
@property (nonatomic) unsigned int limit;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields * requestedFields;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPQuery *)query;
- (CKDPQueryRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setQuery:(CKDPQuery *)arg0;
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
- (void)setHasLimit:(char)arg0;
- (char)hasLimit;
- (void)setContinuationMarker:(NSData *)arg0;
- (char)hasContinuationMarker;
- (NSData *)continuationMarker;
- (char)hasQuery;
- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
