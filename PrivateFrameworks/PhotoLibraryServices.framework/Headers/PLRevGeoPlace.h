/* Runtime dump - PLRevGeoPlace
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoPlace : NSObject
{
    id _placeTypeInfoMap;
    char _isHome;
}

@property (nonatomic) char isHome;

+ (id /* block */)sortedAdditionalPlaceInfoComparator;

- (void)dealloc;
- (PLRevGeoPlace *)init;
- (NSString *)description;
- (PLRevGeoPlace *)initWithGEOMapItem:(NSObject *)arg0;
- (NSObject *)bestPlaceInfoForOrderType:(unsigned int)arg0;
- (NSObject *)placeInfosForOrderType:(unsigned int)arg0;
- (char)isHome;
- (void)setIsHome:(char)arg0;
- (void)_mergeGEOMapItem:(NSObject *)arg0;
- (unsigned int)_dominantOrderTypeForPlaceType:(int)arg0 lastOrderType:(unsigned int)arg1;
- (void)_addPlaceName:(NSString *)arg0 placeInfo:(GEOPDPlaceInfo *)arg1 forOrderType:(unsigned int)arg2;
- (void)_removePlacesInPlaceInfos:(id)arg0 fromOrderType:(unsigned int)arg1;
- (NSObject *)_placeInfosForOrderType:(unsigned int)arg0 createIfNeeded:(char)arg1;

@end
