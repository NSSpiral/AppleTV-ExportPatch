/* Runtime dump - CKDPUser
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUser : PBCodable <NSCopying>
{
    CKDPUserAlias * _alias;
    NSString * _firstName;
    CKDPIdentifier * _identifier;
    NSString * _lastName;
    CKDPProtectionInfo * _protectionInfo;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier * identifier;
@property (readonly, nonatomic) char hasAlias;
@property (retain, nonatomic) CKDPUserAlias * alias;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString * firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString * lastName;
@property (readonly, nonatomic) char hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo * protectionInfo;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPIdentifier *)identifier;
- (CKDPUser *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPIdentifier *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (char)hasFirstName;
- (char)hasLastName;
- (NSString *)firstName;
- (NSString *)lastName;
- (void)setProtectionInfo:(CKDPProtectionInfo *)arg0;
- (char)hasProtectionInfo;
- (CKDPProtectionInfo *)protectionInfo;
- (char)hasIdentifier;
- (void)setAlias:(CKDPUserAlias *)arg0;
- (char)hasAlias;
- (CKDPUserAlias *)alias;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
