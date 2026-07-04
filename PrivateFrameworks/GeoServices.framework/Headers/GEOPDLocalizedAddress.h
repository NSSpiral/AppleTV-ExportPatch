/* Runtime dump - GEOPDLocalizedAddress
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedAddress : PBCodable <NSCopying>
{
    GEOAddress * _address;
    NSString * _locale;
}

@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString * locale;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) GEOAddress * address;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDLocalizedAddress *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocale:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)locale;
- (char)hasLocale;
- (void)setAddress:(GEOAddress *)arg0;
- (GEOAddress *)address;
- (char)hasAddress;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
