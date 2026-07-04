/* Runtime dump - GEOTileSet
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSet : PBCodable <NSCopying>
{
    NSString * _baseURL;
    NSString * _localizationURL;
    NSString * _multiTileURL;
    int _scale;
    int _size;
    int _style;
    NSMutableArray * _supportedLanguages;
    int _updateBehavior;
    NSMutableArray * _validVersions;
    char _multiTileURLUsesStatusCodes;
    struct ? _has;
}

@property (readonly, nonatomic) char hasBaseURL;
@property (retain, nonatomic) NSString * baseURL;
@property (readonly, nonatomic) char hasMultiTileURL;
@property (retain, nonatomic) NSString * multiTileURL;
@property (nonatomic) int style;
@property (retain, nonatomic) NSMutableArray * validVersions;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (readonly, nonatomic) char hasLocalizationURL;
@property (retain, nonatomic) NSString * localizationURL;
@property (retain, nonatomic) NSMutableArray * supportedLanguages;
@property (nonatomic) char hasMultiTileURLUsesStatusCodes;
@property (nonatomic) char multiTileURLUsesStatusCodes;
@property (nonatomic) char hasUpdateBehavior;
@property (nonatomic) int updateBehavior;

- (void)dealloc;
- (int)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)scale;
- (GEOTileSet *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setSize:(int)arg0;
- (void)setScale:(int)arg0;
- (void)setStyle:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)baseURL;
- (void)setBaseURL:(NSString *)arg0;
- (void)setMultiTileURL:(NSString *)arg0;
- (void)setValidVersions:(NSMutableArray *)arg0;
- (void)setLocalizationURL:(NSString *)arg0;
- (void)setSupportedLanguages:(NSMutableArray *)arg0;
- (void)addValidVersion:(NSString *)arg0;
- (void)addSupportedLanguage:(NSString *)arg0;
- (unsigned int)validVersionsCount;
- (void)clearValidVersions;
- (NSObject *)validVersionAtIndex:(unsigned int)arg0;
- (unsigned int)supportedLanguagesCount;
- (void)clearSupportedLanguages;
- (NSObject *)supportedLanguageAtIndex:(unsigned int)arg0;
- (char)hasBaseURL;
- (char)hasMultiTileURL;
- (char)hasLocalizationURL;
- (void)setMultiTileURLUsesStatusCodes:(char)arg0;
- (void)setHasMultiTileURLUsesStatusCodes:(char)arg0;
- (char)hasMultiTileURLUsesStatusCodes;
- (int)updateBehavior;
- (void)setUpdateBehavior:(int)arg0;
- (void)setHasUpdateBehavior:(char)arg0;
- (char)hasUpdateBehavior;
- (NSString *)multiTileURL;
- (NSMutableArray *)validVersions;
- (NSString *)localizationURL;
- (NSMutableArray *)supportedLanguages;
- (char)multiTileURLUsesStatusCodes;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
