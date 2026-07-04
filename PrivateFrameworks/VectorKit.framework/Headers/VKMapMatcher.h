/* Runtime dump - VKMapMatcher
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapMatcher : NSObject <GEOMapAccessRestrictions>
{
    GEOMapAccess * _map;
    <GEORoutePreloadSession> * _routePreloader;
}

@property (retain, nonatomic) <GEORoutePreloadSession> * routePreloader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char allowsNetworkTileLoad;

+ (NSObject *)mapMatcherOfType:(NSObject *)arg0;

- (void)dealloc;
- (VKMapMatcher *)init;
- (char)allowsNetworkTileLoad;
- (id)tilesAround:(struct ?)arg0 radius:(double)arg1;
- (NSObject *)matchLocation:(NSObject *)arg0 transportType:(int)arg1;
- (<GEORoutePreloadSession> *)routePreloader;
- (void)setRoutePreloader:(<GEORoutePreloadSession> *)arg0;

@end
