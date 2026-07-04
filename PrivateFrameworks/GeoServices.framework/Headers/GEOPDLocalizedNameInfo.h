/* Runtime dump - GEOPDLocalizedNameInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying>
{
    NSString * _languageCode;
    GEONameInfo * _name;
    NSString * _requestedLanguageCode;
}

@property (readonly, nonatomic) char hasRequestedLanguageCode;
@property (retain, nonatomic) NSString * requestedLanguageCode;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString * languageCode;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) GEONameInfo * name;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(GEONameInfo *)arg0;
- (GEONameInfo *)name;
- (GEOPDLocalizedNameInfo *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)languageCode;
- (void)setLanguageCode:(NSString *)arg0;
- (char)hasLanguageCode;
- (void)setRequestedLanguageCode:(NSString *)arg0;
- (char)hasRequestedLanguageCode;
- (NSString *)requestedLanguageCode;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
