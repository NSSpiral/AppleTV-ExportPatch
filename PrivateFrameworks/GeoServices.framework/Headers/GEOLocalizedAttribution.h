/* Runtime dump - GEOLocalizedAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedAttribution : PBCodable <NSCopying>
{
    NSString * _displayName;
    NSString * _language;
    NSMutableArray * _logoURLs;
    NSMutableArray * _snippetLogoURLs;
}

@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString * language;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString * displayName;
@property (retain, nonatomic) NSMutableArray * logoURLs;
@property (retain, nonatomic) NSMutableArray * snippetLogoURLs;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOLocalizedAttribution *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)displayName;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (char)hasDisplayName;
- (void)setLogoURLs:(NSMutableArray *)arg0;
- (void)setSnippetLogoURLs:(NSMutableArray *)arg0;
- (void)addLogoURLs:(id)arg0;
- (void)addSnippetLogoURLs:(id)arg0;
- (unsigned int)logoURLsCount;
- (void)clearLogoURLs;
- (NSObject *)logoURLsAtIndex:(unsigned int)arg0;
- (unsigned int)snippetLogoURLsCount;
- (void)clearSnippetLogoURLs;
- (NSObject *)snippetLogoURLsAtIndex:(unsigned int)arg0;
- (char)hasLanguage;
- (NSMutableArray *)logoURLs;
- (NSMutableArray *)snippetLogoURLs;
- (id)bestURLForLogos:(id)arg0 scale:(float)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
