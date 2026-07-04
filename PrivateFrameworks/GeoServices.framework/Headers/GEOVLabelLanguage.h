/* Runtime dump - GEOVLabelLanguage
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLabelLanguage : PBCodable <NSCopying>
{
    unsigned int _endOffset;
    NSString * _languageLocale;
    unsigned int _startOffset;
}

@property (nonatomic) unsigned int startOffset;
@property (nonatomic) unsigned int endOffset;
@property (retain, nonatomic) NSString * languageLocale;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVLabelLanguage *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)endOffset;
- (unsigned int)startOffset;
- (NSDictionary *)dictionaryRepresentation;
- (void)setStartOffset:(unsigned int)arg0;
- (void)setEndOffset:(unsigned int)arg0;
- (void)setLanguageLocale:(NSString *)arg0;
- (NSString *)languageLocale;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
