/* Runtime dump - VKRouteRoadInfo
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteRoadInfo : NSObject
{
    NSString * _name;
    NSString * _shieldGroup;
    struct PolylineCoordinate _routeOffset;
}

@property (readonly, retain, nonatomic) NSString * name;
@property (readonly, retain, nonatomic) NSString * shieldGroup;
@property (readonly, nonatomic) struct PolylineCoordinate routeOffset;

- (void)dealloc;
- (NSString *)name;
- (void).cxx_construct;
- (struct PolylineCoordinate)routeOffset;
- (NSString *)shieldGroup;
- (VKRouteRoadInfo *)initWithName:(NSString *)arg0 shieldGroup:(NSString *)arg1 offset:(struct PolylineCoordinate)arg2;

@end
