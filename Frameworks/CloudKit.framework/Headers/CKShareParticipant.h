/* Runtime dump - CKShareParticipant
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    char _isCurrentUser;
    CKUserIdentity * _userIdentity;
    int _type;
    int _acceptanceStatus;
    int _permission;
    NSString * _participantID;
    CKShareID * _shareID;
    CKUserIdentity * _originalUserIdentity;
    int _originalParticipantType;
    int _originalAcceptanceStatus;
    int _originalPermission;
}

@property (retain, nonatomic) CKUserIdentity * userIdentity;
@property (nonatomic) int type;
@property (nonatomic) int acceptanceStatus;
@property (nonatomic) int permission;
@property (retain, nonatomic) NSString * participantID;
@property (retain, nonatomic) CKShareID * shareID;
@property (nonatomic) char isCurrentUser;
@property (retain, nonatomic) CKUserIdentity * originalUserIdentity;
@property (nonatomic) int originalParticipantType;
@property (nonatomic) int originalAcceptanceStatus;
@property (nonatomic) int originalPermission;

+ (char)supportsSecureCoding;

- (char)isEquivalentToParticipant:(id)arg0;
- (int)originalParticipantType;
- (void)setOriginalParticipantType:(int)arg0;
- (int)originalAcceptanceStatus;
- (void)setOriginalAcceptanceStatus:(int)arg0;
- (int)originalPermission;
- (void)setOriginalPermission:(int)arg0;
- (void)setUserIdentity:(CKUserIdentity *)arg0;
- (CKUserIdentity *)originalUserIdentity;
- (void)setOriginalUserIdentity:(CKUserIdentity *)arg0;
- (CKShareParticipant *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)setType:(int)arg0;
- (int)type;
- (CKShareParticipant *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (int)permission;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (CKUserIdentity *)userIdentity;
- (NSString *)CKPropertiesDescription;
- (void)setPermission:(int)arg0;
- (CKShareParticipant *)initWithUserIdentity:(CKUserIdentity *)arg0;
- (void)setIsCurrentUser:(char)arg0;
- (NSString *)participantID;
- (void)setAcceptanceStatus:(int)arg0;
- (void)setParticipantID:(NSString *)arg0;
- (int)acceptanceStatus;
- (char)isCurrentUser;

@end
