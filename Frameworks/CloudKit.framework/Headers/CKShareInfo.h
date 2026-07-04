/* Runtime dump - CKShareInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _container;
    int _environment;
    CKShareID * _shareID;
    NSString * _etag;
    int _participantType;
    int _participantStatus;
    int _participantPermission;
    NSString * _ownerFirstName;
    NSString * _ownerLastName;
    NSString * _iWorkDocumentName;
    NSData * _protectedFullToken;
    NSData * _publicToken;
    NSData * _privateToken;
    NSData * _publicProtectionData;
    NSString * _publicProtectionEtag;
}

@property (retain, nonatomic) NSString * container;
@property (nonatomic) int environment;
@property (retain, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) NSString * etag;
@property (nonatomic) int participantType;
@property (nonatomic) int participantStatus;
@property (nonatomic) int participantPermission;
@property (retain, nonatomic) NSString * ownerFirstName;
@property (retain, nonatomic) NSString * ownerLastName;
@property (retain, nonatomic) NSString * iWorkDocumentName;
@property (retain, nonatomic) NSData * protectedFullToken;
@property (retain, nonatomic) NSData * publicToken;
@property (retain, nonatomic) NSData * privateToken;
@property (retain, nonatomic) NSData * publicProtectionData;
@property (retain, nonatomic) NSString * publicProtectionEtag;

+ (char)supportsSecureCoding;

- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg0;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (int)participantPermission;
- (CKShareInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKShareInfo *)init;
- (NSString *)description;
- (int)environment;
- (CKShareInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setContainer:(NSString *)arg0;
- (NSString *)container;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (NSString *)iWorkDocumentName;
- (NSString *)ownerFirstName;
- (NSString *)ownerLastName;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (int)participantType;
- (int)participantStatus;
- (NSString *)CKPropertiesDescription;
- (void)setEnvironment:(int)arg0;
- (NSString *)ckShortDescription;
- (NSData *)publicProtectionData;
- (NSString *)publicProtectionEtag;
- (NSData *)protectedFullToken;
- (void)setPrivateToken:(NSData *)arg0;
- (void)setPublicToken:(NSData *)arg0;
- (void)setIWorkDocumentName:(NSString *)arg0;
- (NSData *)publicToken;
- (void)setProtectedFullToken:(NSData *)arg0;
- (void)setPublicProtectionData:(NSData *)arg0;
- (void)setPublicProtectionEtag:(NSString *)arg0;
- (void)setOwnerFirstName:(NSString *)arg0;
- (void)setOwnerLastName:(NSString *)arg0;
- (void)setParticipantType:(int)arg0;
- (NSData *)privateToken;
- (void)setParticipantStatus:(int)arg0;
- (void)setParticipantPermission:(int)arg0;

@end
