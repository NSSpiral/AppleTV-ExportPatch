/* Runtime dump - GEORouteTrafficBuilder
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteTrafficBuilder : NSObject
{
    NSMutableData * _trafficColors;
    NSMutableData * _trafficOffsets;
    unsigned int _trafficDistance;
}

- (void)dealloc;
- (GEORouteTrafficBuilder *)init;
- (void)addTrafficFromRoute:(id)arg0 withStepRange:(struct _NSRange)arg1;
- (void)copyTrafficToRoute:(id)arg0;
- (void)addTrafficFromRoute:(id)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)addTrafficFromETARoute:(id)arg0;
- (void)_removeDuplicateTraffic;

@end
