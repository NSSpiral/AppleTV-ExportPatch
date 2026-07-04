/* Runtime dump - CKDPShareAcceptRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareAcceptRequest : PBRequest <NSCopying>
{
    NSString * _etag;
    CKDPProtectionInfo * _publicParticipantPublicKey;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo * selfAddedPcs;
@property (readonly, nonatomic) char hasPublicParticipantPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo * publicParticipantPublicKey;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareAcceptRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (char)hasShareId;
- (CKDPShareIdentifier *)shareId;
- (void)setSelfAddedPcs:(CKDPProtectionInfo *)arg0;
- (void)setPublicParticipantPublicKey:(CKDPProtectionInfo *)arg0;
- (char)hasSelfAddedPcs;
- (char)hasPublicParticipantPublicKey;
- (CKDPProtectionInfo *)selfAddedPcs;
- (CKDPProtectionInfo *)publicParticipantPublicKey;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
