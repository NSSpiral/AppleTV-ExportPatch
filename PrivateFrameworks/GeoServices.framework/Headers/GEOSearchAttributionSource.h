/* Runtime dump - GEOSearchAttributionSource
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    struct ? _attributionRequirements;
    NSMutableArray * _attributionApps;
    NSMutableArray * _localizedAttributions;
    NSString * _sourceIdentifier;
    unsigned int _sourceVersion;
    NSMutableArray * _supportedComponentActions;
    NSString * _webBaseActionURL;
}

@property (retain, nonatomic) NSString * sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray * localizedAttributions;
@property (readonly, nonatomic) unsigned int attributionRequirementsCount;
@property (readonly, nonatomic) int * attributionRequirements;
@property (retain, nonatomic) NSMutableArray * attributionApps;
@property (readonly, nonatomic) char hasWebBaseActionURL;
@property (retain, nonatomic) NSString * webBaseActionURL;
@property (retain, nonatomic) NSMutableArray * supportedComponentActions;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSearchAttributionSource *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)sourceVersion;
- (void)setSourceVersion:(unsigned int)arg0;
- (void)setSourceIdentifier:(NSString *)arg0;
- (void)setLocalizedAttributions:(NSMutableArray *)arg0;
- (void)setAttributionApps:(NSMutableArray *)arg0;
- (void)setWebBaseActionURL:(NSString *)arg0;
- (void)setSupportedComponentActions:(NSMutableArray *)arg0;
- (void)addLocalizedAttribution:(GEOLocalizedAttribution *)arg0;
- (void)addAttributionApps:(id)arg0;
- (void)addSupportedComponentActions:(id)arg0;
- (unsigned int)localizedAttributionsCount;
- (void)clearLocalizedAttributions;
- (NSObject *)localizedAttributionAtIndex:(unsigned int)arg0;
- (unsigned int)attributionRequirementsCount;
- (void)clearAttributionRequirements;
- (int)attributionRequirementsAtIndex:(unsigned int)arg0;
- (void)addAttributionRequirements:(int)arg0;
- (unsigned int)attributionAppsCount;
- (void)clearAttributionApps;
- (NSObject *)attributionAppsAtIndex:(unsigned int)arg0;
- (unsigned int)supportedComponentActionsCount;
- (void)clearSupportedComponentActions;
- (NSObject *)supportedComponentActionsAtIndex:(unsigned int)arg0;
- (int *)attributionRequirements;
- (void)setAttributionRequirements:(int *)arg0 count:(unsigned int)arg1;
- (char)hasWebBaseActionURL;
- (NSMutableArray *)localizedAttributions;
- (NSMutableArray *)attributionApps;
- (NSString *)webBaseActionURL;
- (NSMutableArray *)supportedComponentActions;
- (id)bestLocalizedAttribution;
- (NSString *)sourceIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
