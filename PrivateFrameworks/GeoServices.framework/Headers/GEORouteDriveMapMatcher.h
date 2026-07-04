/* Runtime dump - GEORouteDriveMapMatcher
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteDriveMapMatcher : GEORouteMapMatcher

- (NSObject *)matchToRouteWithLocation:(NSObject *)arg0 trackedLocation:(NSObject *)arg1 onDate:(NSDate *)arg2 maxDistance:(double)arg3;
- (struct ?)_matchToRouteFromLocation:(double)arg0 trackedLocation:(unsigned int)arg1 distanceLeftToSearch:(char)arg2 maxDistance:(struct ?)arg3;
- (NSObject *)_setupRouteMatchWithRawLocation:(GEOLocation *)arg0 trackedLocation:(NSObject *)arg1 onDate:(NSDate *)arg2 matchParams:(struct ? *)arg3;
- (double)_maxMatchDistance:(double)arg0 routeIndex:(unsigned int)arg1 useStrictMatch:(char)arg2 timeSinceTunnel:(double)arg3;

@end
