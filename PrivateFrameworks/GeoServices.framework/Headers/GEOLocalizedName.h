/* Runtime dump - GEOLocalizedName
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedName : PBCodable <NSCopying>
{
    NSString * _languageCode;
    NSString * _name;
    unsigned int _nameRank;
    NSString * _nameType;
    NSString * _phoneticName;
    char _isDefault;
    struct ? _has;
}

@property (nonatomic) char hasIsDefault;
@property (nonatomic) char isDefault;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString * languageCode;
@property (readonly, nonatomic) char hasNameType;
@property (retain, nonatomic) NSString * nameType;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) char hasNameRank;
@property (nonatomic) unsigned int nameRank;
@property (readonly, nonatomic) char hasPhoneticName;
@property (retain, nonatomic) NSString * phoneticName;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GEOLocalizedName *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)languageCode;
- (void)setLanguageCode:(NSString *)arg0;
- (char)hasLanguageCode;
- (void)setPhoneticName:(NSString *)arg0;
- (char)hasPhoneticName;
- (NSString *)phoneticName;
- (GEOLocalizedName *)initWithPlaceDataLocalizedString:(NSString *)arg0;
- (void)setNameType:(NSString *)arg0;
- (void)setIsDefault:(char)arg0;
- (void)setHasIsDefault:(char)arg0;
- (char)hasIsDefault;
- (char)hasNameType;
- (void)setNameRank:(unsigned int)arg0;
- (void)setHasNameRank:(char)arg0;
- (char)hasNameRank;
- (char)isDefault;
- (NSString *)nameType;
- (unsigned int)nameRank;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
