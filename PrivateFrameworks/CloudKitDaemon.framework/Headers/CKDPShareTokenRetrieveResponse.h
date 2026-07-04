/* Runtime dump - CKDPShareTokenRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying>
{
    NSString * _container;
    int _containerEnvironment;
    NSString * _etag;
    NSString * _ownerFirstName;
    NSString * _ownerLastName;
    int _participantState;
    int _participantType;
    int _permission;
    NSData * _protectedFullToken;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
    struct ? _has;
}

@property (readonly, nonatomic) char hasContainer;
@property (retain, nonatomic) NSString * container;
@property (nonatomic) char hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (nonatomic) char hasParticipantType;
@property (nonatomic) int participantType;
@property (nonatomic) char hasParticipantState;
@property (nonatomic) int participantState;
@property (nonatomic) char hasPermission;
@property (nonatomic) int permission;
@property (readonly, nonatomic) char hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo * selfAddedPcs;
@property (readonly, nonatomic) char hasProtectedFullToken;
@property (retain, nonatomic) NSData * protectedFullToken;
@property (readonly, nonatomic) char hasOwnerFirstName;
@property (retain, nonatomic) NSString * ownerFirstName;
@property (readonly, nonatomic) char hasOwnerLastName;
@property (retain, nonatomic) NSString * ownerLastName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareTokenRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (void)setContainer:(NSString *)arg0;
- (NSString *)container;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (NSString *)ownerFirstName;
- (NSString *)ownerLastName;
- (int)permission;
- (int)participantType;
- (NSData *)protectedFullToken;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (void)setProtectedFullToken:(NSData *)arg0;
- (char)hasShareId;
- (char)hasProtectedFullToken;
- (CKDPShareIdentifier *)shareId;
- (void)setSelfAddedPcs:(CKDPProtectionInfo *)arg0;
- (char)hasSelfAddedPcs;
- (CKDPProtectionInfo *)selfAddedPcs;
- (void)setPermission:(int)arg0;
- (void)setHasPermission:(char)arg0;
- (char)hasPermission;
- (void)setOwnerFirstName:(NSString *)arg0;
- (void)setOwnerLastName:(NSString *)arg0;
- (char)hasContainer;
- (int)containerEnvironment;
- (void)setContainerEnvironment:(int)arg0;
- (void)setHasContainerEnvironment:(char)arg0;
- (char)hasContainerEnvironment;
- (void)setParticipantType:(int)arg0;
- (void)setHasParticipantType:(char)arg0;
- (char)hasParticipantType;
- (void)setParticipantState:(int)arg0;
- (void)setHasParticipantState:(char)arg0;
- (char)hasParticipantState;
- (char)hasOwnerFirstName;
- (char)hasOwnerLastName;
- (int)participantState;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
