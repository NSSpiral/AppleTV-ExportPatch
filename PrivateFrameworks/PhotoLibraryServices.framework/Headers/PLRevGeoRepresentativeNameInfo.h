/* Runtime dump - PLRevGeoRepresentativeNameInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoRepresentativeNameInfo : NSObject
{
    char _allEntriesAtHome;
    char _allEntriesMatchHomeForOrderType;
    char _addCountyIfNeeded;
    NSString * _name;
    unsigned int _type;
    unsigned int _matchingCount;
    NSMutableOrderedSet * _geoPlaces;
    NSMutableOrderedSet * _remainingGeoPlaces;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int matchingCount;
@property (nonatomic) char allEntriesAtHome;
@property (nonatomic) char allEntriesMatchHomeForOrderType;
@property (readonly, nonatomic) NSMutableOrderedSet * geoPlaces;
@property (readonly, nonatomic) NSMutableOrderedSet * remainingGeoPlaces;
@property (readonly, copy, nonatomic) NSString * localizedName;
@property (nonatomic) char addCountyIfNeeded;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(unsigned int)arg0;
- (unsigned int)type;
- (NSString *)localizedName;
- (void)setMatchingCount:(unsigned int)arg0;
- (void)setAllEntriesAtHome:(char)arg0;
- (void)setAllEntriesMatchHomeForOrderType:(char)arg0;
- (NSMutableOrderedSet *)geoPlaces;
- (void)addGeoPlaces:(id)arg0;
- (unsigned int)matchingCount;
- (char)allEntriesAtHome;
- (char)allEntriesMatchHomeForOrderType;
- (NSObject *)_typeKeyForOrderType:(unsigned int)arg0 countryCode:(NSString *)arg1;
- (void)_addResourceKeys:(NSArray *)arg0 toTypeMap:(NSObject *)arg1 forOrderType:(unsigned int)arg2 countryCode:(NSString *)arg3;
- (char)_administrativeAreaCode:(id)arg0 supportedForOrderType:(unsigned int)arg1;
- (char)_currentLanguageSupportsModifiersForOrderType:(unsigned int)arg0;
- (NSObject *)_resourceKeysForOrderType:(unsigned int)arg0 countryCode:(NSString *)arg1 administrativeAreaCode:(NSString *)arg2;
- (PLRevGeoRepresentativeNameInfo *)initWithName:(NSString *)arg0 type:(unsigned int)arg1;
- (void)updateWithAddedNameInfo:(NSDictionary *)arg0;
- (void)addGeoPlace:(PLRevGeoPlace *)arg0;
- (void)clearGeoPlaces;
- (void)prepareRemainingGeoPlaces;
- (void)removeGeoPlacesFromRemaining:(id)arg0;
- (NSMutableOrderedSet *)remainingGeoPlaces;
- (char)addCountyIfNeeded;
- (void)setAddCountyIfNeeded:(char)arg0;

@end
