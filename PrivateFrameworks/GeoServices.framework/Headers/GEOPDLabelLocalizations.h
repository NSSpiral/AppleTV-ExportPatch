/* Runtime dump - GEOPDLabelLocalizations
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLabelLocalizations : PBCodable <NSCopying>
{
    NSMutableArray * _localizedStrings;
}

@property (retain, nonatomic) NSMutableArray * localizedStrings;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDLabelLocalizations *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setLocalizedStrings:(NSMutableArray *)arg0;
- (void)addLocalizedString:(NSString *)arg0;
- (void)clearLocalizedStrings;
- (NSMutableArray *)localizedStrings;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)localizedStringsCount;
- (NSObject *)localizedStringAtIndex:(unsigned int)arg0;

@end
