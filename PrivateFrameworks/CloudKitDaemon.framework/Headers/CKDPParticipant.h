/* Runtime dump - CKDPParticipant
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPParticipant : PBCodable <NSCopying>
{
    CKDPContactInformation * _contactInformation;
    CKDPIdentifier * _inviterId;
    CKDPIdentifier * _participantId;
    int _participantType;
    int _permission;
    CKDPProtectionInfo * _publicKey;
    int _state;
    CKDPIdentifier * _userId;
    char _createdOutOfProcess;
    struct ? _has;
}

@property (readonly, nonatomic) char hasParticipantId;
@property (retain, nonatomic) CKDPIdentifier * participantId;
@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) CKDPIdentifier * userId;
@property (readonly, nonatomic) char hasContactInformation;
@property (retain, nonatomic) CKDPContactInformation * contactInformation;
@property (nonatomic) char hasState;
@property (nonatomic) int state;
@property (nonatomic) char hasParticipantType;
@property (nonatomic) int participantType;
@property (nonatomic) char hasPermission;
@property (nonatomic) int permission;
@property (readonly, nonatomic) char hasInviterId;
@property (retain, nonatomic) CKDPIdentifier * inviterId;
@property (nonatomic) char hasCreatedOutOfProcess;
@property (nonatomic) char createdOutOfProcess;
@property (readonly, nonatomic) char hasPublicKey;
@property (retain, nonatomic) CKDPProtectionInfo * publicKey;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (CKDPParticipant *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)permission;
- (int)participantType;
- (char)hasPublicKey;
- (void)setPermission:(int)arg0;
- (void)setHasPermission:(char)arg0;
- (char)hasPermission;
- (void)setUserId:(CKDPIdentifier *)arg0;
- (char)hasUserId;
- (CKDPIdentifier *)userId;
- (void)setParticipantType:(int)arg0;
- (void)setHasParticipantType:(char)arg0;
- (char)hasParticipantType;
- (void)setParticipantId:(CKDPIdentifier *)arg0;
- (void)setContactInformation:(CKDPContactInformation *)arg0;
- (void)setInviterId:(CKDPIdentifier *)arg0;
- (char)hasParticipantId;
- (char)hasContactInformation;
- (void)setHasState:(char)arg0;
- (char)hasState;
- (char)hasInviterId;
- (void)setCreatedOutOfProcess:(char)arg0;
- (void)setHasCreatedOutOfProcess:(char)arg0;
- (char)hasCreatedOutOfProcess;
- (CKDPIdentifier *)participantId;
- (CKDPContactInformation *)contactInformation;
- (CKDPIdentifier *)inviterId;
- (char)createdOutOfProcess;
- (CKDPProtectionInfo *)publicKey;
- (void)setPublicKey:(CKDPProtectionInfo *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
