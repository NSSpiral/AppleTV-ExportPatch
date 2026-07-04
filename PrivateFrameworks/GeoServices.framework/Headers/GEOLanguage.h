/* Runtime dump - GEOLanguage
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLanguage : PBCodable <NSCopying>
{
    unsigned int _identifier;
    NSMutableArray * _languages;
}

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray * languages;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (GEOLanguage *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)languages;
- (void)setLanguages:(NSMutableArray *)arg0;
- (void)addLanguage:(NSString *)arg0;
- (unsigned int)languagesCount;
- (void)clearLanguages;
- (NSObject *)languageAtIndex:(unsigned int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
