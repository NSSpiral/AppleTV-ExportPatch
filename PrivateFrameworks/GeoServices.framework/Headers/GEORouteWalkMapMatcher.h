/* Runtime dump - GEORouteWalkMapMatcher
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteWalkMapMatcher : GEORouteMapMatcher

- (NSObject *)matchToRouteWithLocation:(NSObject *)arg0 trackedLocation:(NSObject *)arg1 onDate:(NSDate *)arg2 maxDistance:(double)arg3;
- (struct ?)_matchToRouteFromLocation:(double)arg0 trackedLocation:(unsigned int)arg1 distanceLeftToSearch:(char)arg2;
- (struct ?)_determineBestMatch:(double)arg0 trackedLocation:(unsigned int)arg1 rawLocation:(char)arg2;
- (double)_maxMatchDistance:(double)arg0 routeIndex:(unsigned int)arg1 previousMatchGood:(char)arg2;

@end
