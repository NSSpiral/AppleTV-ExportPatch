/* Runtime dump - CKDPShareDeleteRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareDeleteRequest : PBRequest <NSCopying>
{
    NSString * _etag;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo * selfAddedPcs;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareDeleteRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (char)hasShareId;
- (CKDPShareIdentifier *)shareId;
- (void)setSelfAddedPcs:(CKDPProtectionInfo *)arg0;
- (char)hasSelfAddedPcs;
- (CKDPProtectionInfo *)selfAddedPcs;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
