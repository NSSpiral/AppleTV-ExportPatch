/* Runtime dump - CKDPRecordDeleteRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying>
{
    NSString * _etag;
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier * recordIdentifier;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordDeleteRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (void)setRecordIdentifier:(CKDPRecordIdentifier *)arg0;
- (char)hasRecordIdentifier;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (CKDPRecordIdentifier *)recordIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
