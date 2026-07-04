/* Runtime dump - GEOMapAccess
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccess : GEOMapRequestManager
{
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <GEOMapAccessRestrictions> * _restrictions;
    id _tileErrorHandler;
}

@property (readonly, nonatomic) char allowsNetworkTileLoad;
@property (nonatomic) <GEOMapAccessRestrictions> * restrictions;
@property (copy, nonatomic) id tileErrorHandler;

+ (char)supportsRealisticMap;
+ (NSObject *)realisticMap;

- (void)dealloc;
- (GEOMapAccess *)init;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (<GEOMapAccessRestrictions> *)restrictions;
- (id)findRoadEdgesWithin:(double)arg0 of:(struct ?)arg1 edgeHandler:(id /* block */)arg2 completionHandler:(/* block */ id)arg3;
- (id)findClosestNamedFeaturesAtCoordinate:(struct ?)arg0 roadHandler:(id /* block */)arg1 pointHandler:(/* block */ id)arg2 polygonHandler:(id /* block */)arg3 completionHandler:(/* block */ id)arg4;
- (id)findClosestRoadAtCoordinate:(struct ?)arg0 roadHandler:(id /* block */)arg1 completionHandler:(/* block */ id)arg2;
- (id)findRoadsWithin:(double)arg0 of:(struct ?)arg1 handler:(id /* block */)arg2 completionHandler:(/* block */ id)arg3;
- (NSObject *)buildMapEdgeFrom:(struct ? *)arg0 edgeHandler:(struct ?)arg1;
- (id /* block */)tileErrorHandler;
- (void)setTileErrorHandler:(id /* block */)arg0;
- (void)setRestrictions:(<GEOMapAccessRestrictions> *)arg0;
- (id)findRoadTilesWithin:(double)arg0 of:(struct ?)arg1 tileHander:(id)arg2 completionHandler:(/* block */ id)arg3;
- (char)allowsNetworkTileLoad;

@end
