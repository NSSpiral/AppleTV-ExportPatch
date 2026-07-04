/* Runtime dump - GEOSearchAttributionInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>
{
    NSString * _identifier;
    unsigned int _version;
    NSArray * _logoPaths;
    NSArray * _snippetLogoPaths;
    NSString * _displayName;
    NSString * _webBaseActionURL;
    NSArray * _attributionApps;
    unsigned int _attributionRequirementsMask;
}

@property (retain, nonatomic) NSString * identifier;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int requirementsMask;
@property (retain, nonatomic) NSString * displayName;
@property (retain, nonatomic) NSString * webBaseActionURL;
@property (retain, nonatomic) NSArray * attributionApps;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (GEOSearchAttributionInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (char)hasAttributionRequirement:(int)arg0;
- (id)logoPathForScale:(float)arg0;
- (char)supportsActionURLs;
- (void)setAttributionApps:(NSArray *)arg0;
- (void)setWebBaseActionURL:(NSString *)arg0;
- (NSArray *)attributionApps;
- (NSString *)webBaseActionURL;
- (void)setRequirementsMask:(unsigned int)arg0;
- (unsigned int)requirementsMask;
- (GEOSearchAttributionInfo *)initWithSource:(NSObject *)arg0 localizedAttribution:(GEOLocalizedAttribution *)arg1 logoPaths:(NSArray *)arg2 snippetLogoPaths:(NSArray *)arg3;
- (id)snippetLogoPathForScale:(float)arg0;
- (void)addLogoPath:(NSString *)arg0;
- (GEOSearchAttributionInfo *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
