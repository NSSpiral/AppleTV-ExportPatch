/* Runtime dump - VKFootprint
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKFootprint : NSObject
{
    struct ? _boundingRect;
    struct VKFootprintConvexHull_struct _convexHull;
    double _maxDistance;
    struct VKPoint _furthestGroundPoint;
    double _minDistance;
    struct VKPoint _nearestGroundPoint;
    double _minDepth;
    double _maxDepth;
    double _centerDepth;
    int _cornerGroundPointsCount;
    id _cornerGroundPoints;
}

@property (readonly, nonatomic) struct ? boundingRect;
@property (readonly, nonatomic) struct VKFootprintConvexHull_struct convexHull;
@property (readonly, nonatomic) double minDepth;
@property (readonly, nonatomic) double maxDepth;
@property (readonly, nonatomic) double centerDepth;
@property (readonly, nonatomic) struct VKPoint furthestGroundPoint;
@property (readonly, nonatomic) struct VKPoint nearestGroundPoint;
@property (readonly, nonatomic) struct VKPoint * cornerGroundPoints;
@property (readonly, nonatomic) int cornerGroundPointsCount;

- (void).cxx_construct;
- (struct ?)boundingRect;
- (struct VKPoint)nearestGroundPoint;
- (id /* block */)annotationRectTest;
- (id /* block */)annotationCoordinateTest;
- (void)computeFromCamera:(id)arg0;
- (struct ?)_expandedBoundingRect;
- (struct VKPoint *)cornerGroundPoints;
- (char)rejectsRect:(struct ? *)arg0;
- (char)containsGroundPoint:(struct VKPoint *)arg0;
- (struct VKFootprintConvexHull_struct)convexHull;
- (double)minDepth;
- (double)maxDepth;
- (double)centerDepth;
- (struct VKPoint)furthestGroundPoint;
- (int)cornerGroundPointsCount;

@end
