/* Runtime dump - GEOPDLocalizedString
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedString : PBCodable <NSCopying>
{
    NSString * _locale;
    NSString * _stringValue;
}

@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString * locale;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString * stringValue;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDLocalizedString *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocale:(NSString *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)locale;
- (char)hasStringValue;
- (char)hasLocale;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
