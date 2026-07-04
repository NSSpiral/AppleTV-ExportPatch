/* Runtime dump - GEOPDLocalizedSpokenStructuredAddress
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying>
{
    NSString * _locale;
    GEOStructuredAddress * _spokenStructuredAddress;
}

@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString * locale;
@property (readonly, nonatomic) char hasSpokenStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress * spokenStructuredAddress;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDLocalizedSpokenStructuredAddress *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocale:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)locale;
- (char)hasLocale;
- (void)setSpokenStructuredAddress:(GEOStructuredAddress *)arg0;
- (GEOStructuredAddress *)spokenStructuredAddress;
- (char)hasSpokenStructuredAddress;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
