/* Runtime dump - CKDPContactInformation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPContactInformation : PBCodable <NSCopying>
{
    NSString * _containerScopedUserId;
    NSString * _emailAddress;
    NSString * _firstName;
    NSString * _lastName;
}

@property (readonly, nonatomic) char hasEmailAddress;
@property (retain, nonatomic) NSString * emailAddress;
@property (readonly, nonatomic) char hasContainerScopedUserId;
@property (retain, nonatomic) NSString * containerScopedUserId;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString * firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString * lastName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPContactInformation *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (char)hasFirstName;
- (char)hasLastName;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (void)setContainerScopedUserId:(NSString *)arg0;
- (char)hasEmailAddress;
- (char)hasContainerScopedUserId;
- (NSString *)containerScopedUserId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
