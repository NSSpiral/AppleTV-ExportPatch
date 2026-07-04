/* Runtime dump - GEONameInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONameInfo : PBCodable <NSCopying>
{
    NSString * _locale;
    NSString * _name;
    NSString * _phoneticName;
    int _phoneticType;
    NSString * _shield;
    int _shieldType;
    int _signType;
    struct ? _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasPhoneticName;
@property (retain, nonatomic) NSString * phoneticName;
@property (readonly, nonatomic) char hasShield;
@property (retain, nonatomic) NSString * shield;
@property (nonatomic) char hasShieldType;
@property (nonatomic) int shieldType;
@property (nonatomic) char hasPhoneticType;
@property (nonatomic) int phoneticType;
@property (nonatomic) char hasSignType;
@property (nonatomic) int signType;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString * locale;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GEONameInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocale:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)locale;
- (char)hasLocale;
- (void)setPhoneticName:(NSString *)arg0;
- (char)hasPhoneticName;
- (NSString *)phoneticName;
- (void)setShield:(NSString *)arg0;
- (NSString *)shield;
- (int)signType;
- (void)setPhoneticType:(int)arg0;
- (void)setHasPhoneticType:(char)arg0;
- (char)hasPhoneticType;
- (void)setSignType:(int)arg0;
- (void)setHasSignType:(char)arg0;
- (char)hasSignType;
- (int)phoneticType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;
- (int)shieldType;
- (char)hasShield;
- (void)setShieldType:(int)arg0;
- (void)setHasShieldType:(char)arg0;
- (char)hasShieldType;

@end
