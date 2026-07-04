/* Runtime dump - BRFieldUserIdentity
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldUserIdentity : PBCodable <NSCopying>
{
    NSString * _displayName;
    NSString * _firstName;
    NSString * _lastName;
}

@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString * firstName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString * lastName;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString * displayName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRFieldUserIdentity *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)displayName;
- (NSString *)userFormattedName;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (char)hasFirstName;
- (char)hasLastName;
- (char)hasDisplayName;
- (NSString *)firstName;
- (NSString *)lastName;
- (BRFieldUserIdentity *)initWithCKUserIdentity:(NSObject *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
