/* Runtime dump - CKDPShare
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShare : PBCodable <NSCopying>
{
    NSString * _etag;
    NSData * _internalAppSpecificMetadata;
    CKDPProtectionInfo * _invitedPcs;
    NSMutableArray * _participants;
    int _publicAccess;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
    NSData * _shortTokenHash;
    NSString * _shortTokenRoutingKey;
    struct ? _has;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (nonatomic) char hasPublicAccess;
@property (nonatomic) int publicAccess;
@property (readonly, nonatomic) char hasInvitedPcs;
@property (retain, nonatomic) CKDPProtectionInfo * invitedPcs;
@property (readonly, nonatomic) char hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo * selfAddedPcs;
@property (retain, nonatomic) NSMutableArray * participants;
@property (readonly, nonatomic) char hasShortTokenRoutingKey;
@property (retain, nonatomic) NSString * shortTokenRoutingKey;
@property (readonly, nonatomic) char hasInternalAppSpecificMetadata;
@property (retain, nonatomic) NSData * internalAppSpecificMetadata;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData * shortTokenHash;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShare *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (void)setShortTokenHash:(NSData *)arg0;
- (char)hasShareId;
- (char)hasShortTokenHash;
- (CKDPShareIdentifier *)shareId;
- (NSData *)shortTokenHash;
- (void)setSelfAddedPcs:(CKDPProtectionInfo *)arg0;
- (char)hasSelfAddedPcs;
- (CKDPProtectionInfo *)selfAddedPcs;
- (void)addParticipant:(EKParticipant *)arg0;
- (void)setInvitedPcs:(CKDPProtectionInfo *)arg0;
- (unsigned int)participantsCount;
- (void)clearParticipants;
- (NSObject *)participantAtIndex:(unsigned int)arg0;
- (void)setShortTokenRoutingKey:(NSString *)arg0;
- (void)setInternalAppSpecificMetadata:(NSData *)arg0;
- (void)setPublicAccess:(int)arg0;
- (void)setHasPublicAccess:(char)arg0;
- (char)hasPublicAccess;
- (char)hasInvitedPcs;
- (char)hasShortTokenRoutingKey;
- (char)hasInternalAppSpecificMetadata;
- (int)publicAccess;
- (CKDPProtectionInfo *)invitedPcs;
- (NSMutableArray *)participants;
- (void)setParticipants:(NSMutableArray *)arg0;
- (NSString *)shortTokenRoutingKey;
- (NSData *)internalAppSpecificMetadata;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
