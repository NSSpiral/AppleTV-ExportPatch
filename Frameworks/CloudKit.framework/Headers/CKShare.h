/* Runtime dump - CKShare
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShare : NSObject <NSSecureCoding, NSCopying>
{
    char _isKnownToServer;
    CKShareID * _shareID;
    NSURL * _shareURL;
    int _publicPermission;
    CKContainerID * _containerID;
    NSString * _etag;
    NSMutableArray * _participants;
    NSData * _publicSharingIdentity;
    NSString * _routingKey;
    NSString * _baseToken;
    NSData * _protectionData;
    NSString * _protectionEtag;
    NSString * _previousProtectionEtag;
    NSData * _publicProtectionData;
    NSString * _publicProtectionEtag;
    NSString * _previousPublicProtectionEtag;
    NSMutableArray * _addedParticipants;
    NSMutableArray * _removedParticipants;
}

@property (copy, nonatomic) CKShareID * shareID;
@property (readonly, copy, nonatomic) NSURL * shareURL;
@property (nonatomic) int publicPermission;
@property (readonly, nonatomic) NSArray * allParticipants;
@property (readonly, nonatomic) CKShareParticipant * owner;
@property (retain, nonatomic) CKContainerID * containerID;
@property (copy, nonatomic) NSString * etag;
@property (nonatomic) char isKnownToServer;
@property (retain, nonatomic) NSMutableArray * participants;
@property (readonly, nonatomic) CKShareParticipant * currentUserParticipant;
@property (retain, nonatomic) NSData * publicSharingIdentity;
@property (retain, nonatomic) NSString * routingKey;
@property (retain, nonatomic) NSString * baseToken;
@property (readonly, nonatomic) NSString * fullToken;
@property (readonly, nonatomic) NSData * shortSharingTokenData;
@property (readonly, nonatomic) NSData * shortSharingTokenHashData;
@property (readonly, nonatomic) NSData * encryptedFullTokenData;
@property (retain, nonatomic) NSData * protectionData;
@property (retain, nonatomic) NSString * protectionEtag;
@property (retain, nonatomic) NSString * previousProtectionEtag;
@property (retain, nonatomic) NSData * publicProtectionData;
@property (retain, nonatomic) NSString * publicProtectionEtag;
@property (retain, nonatomic) NSString * previousPublicProtectionEtag;
@property (retain, nonatomic) NSMutableArray * addedParticipants;
@property (retain, nonatomic) NSMutableArray * removedParticipants;

+ (NSString *)encryptFullToken:(NSString *)arg0 shortSharingTokenData:(NSData *)arg1;
+ (char)supportsSecureCoding;
+ (NSString *)decryptFullToken:(NSString *)arg0 shortSharingTokenData:(NSData *)arg1;

- (void)setSharePCSData:(CKDPCSData *)arg0;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg0;
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection *)arg0;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (struct _OpaquePCSShareProtection *)privatePCS;
- (void)setSharePCSData:(CKDPCSData *)arg0 isUnitTestAccount:(char)arg1;
- (void)CKAssignToContainerWithID:(int)arg0;
- (void)clearModifiedParticipants;
- (NSMutableArray *)addedParticipants;
- (void)setAddedParticipants:(NSMutableArray *)arg0;
- (NSMutableArray *)removedParticipants;
- (void)setRemovedParticipants:(NSMutableArray *)arg0;
- (id)_knownParticipantEqualToParticipant:(id)arg0 inArray:(NSArray *)arg1;
- (NSString *)fullToken;
- (NSString *)shortToken;
- (id)removeParticipant:(EKParticipant *)arg0;
- (NSString *)decryptFullToken:(NSString *)arg0;
- (CKShare *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKShare *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (CKShare *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (CKContainerID *)containerID;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (void)setContainerID:(CKContainerID *)arg0;
- (int)publicPermission;
- (NSString *)baseToken;
- (NSData *)publicSharingIdentity;
- (void)setBaseToken:(NSString *)arg0;
- (void)setPublicSharingIdentity:(NSData *)arg0;
- (NSString *)iWorkShareURLWithAppName:(NSString *)arg0 documentName:(NSString *)arg1 error:(id *)arg2;
- (char)isKnownToServer;
- (CKShare *)initWithShareID:(CKShareID *)arg0;
- (CKShareParticipant *)owner;
- (NSString *)CKPropertiesDescription;
- (void)setProtectionData:(NSData *)arg0;
- (NSData *)protectionData;
- (NSString *)protectionEtag;
- (NSData *)publicProtectionData;
- (CKShareParticipant *)currentUserParticipant;
- (void)setPublicPermission:(int)arg0;
- (NSString *)publicProtectionEtag;
- (NSData *)shortSharingTokenData;
- (NSString *)routingKey;
- (void)setRoutingKey:(NSString *)arg0;
- (NSData *)shortSharingTokenHashData;
- (NSString *)shortSharingToken;
- (void)setPreviousProtectionEtag:(NSString *)arg0;
- (void)setProtectionEtag:(NSString *)arg0;
- (NSString *)previousProtectionEtag;
- (NSData *)encryptedFullTokenData;
- (void)updateFromServerShare:(id)arg0;
- (void)setIsKnownToServer:(char)arg0;
- (void)setPublicProtectionData:(NSData *)arg0;
- (void)setPublicProtectionEtag:(NSString *)arg0;
- (void)setPreviousPublicProtectionEtag:(NSString *)arg0;
- (NSArray *)allParticipants;
- (id)addParticipant:(EKParticipant *)arg0;
- (NSMutableArray *)participants;
- (void)setParticipants:(NSMutableArray *)arg0;
- (NSURL *)shareURL;
- (NSString *)previousPublicProtectionEtag;
- (NSData *)privateToken;

@end
