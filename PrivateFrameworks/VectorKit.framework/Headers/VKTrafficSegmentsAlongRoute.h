/* Runtime dump - VKTrafficSegmentsAlongRoute
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficSegmentsAlongRoute : NSObject
{
    struct vector<TrafficSegment, std::__1::allocator<TrafficSegment> > _segments;
}

- (void)reset;
- (void).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)segmentCount;
- (struct TrafficSegment *)segmentAtIndex:(NSObject *)arg0;
- (void)addSegmentAt:(struct PolylineCoordinate)arg0 forColor:(char)arg1;
- (char)segmentSpeedAtIndex:(unsigned int)arg0;

@end
