/* Runtime dump - CKDPRecordRetrieveVersionsRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying>
{
    NSString * _minimumVersionEtag;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRequestedFields * _requestedFields;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier * recordIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields * requestedFields;
@property (readonly, nonatomic) char hasMinimumVersionEtag;
@property (retain, nonatomic) NSString * minimumVersionEtag;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveVersionsRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setRecordIdentifier:(CKDPRecordIdentifier *)arg0;
- (void)setRequestedFields:(CKDPRequestedFields *)arg0;
- (char)hasRecordIdentifier;
- (char)hasRequestedFields;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (CKDPRecordIdentifier *)recordIdentifier;
- (CKDPRequestedFields *)requestedFields;
- (void)setMinimumVersionEtag:(NSString *)arg0;
- (char)hasMinimumVersionEtag;
- (NSString *)minimumVersionEtag;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
