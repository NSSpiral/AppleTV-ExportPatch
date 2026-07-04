/* Runtime dump - AXVisualElementGrouper
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXVisualElementGrouper : AXElementGrouper
{
    float _maximumNeighbourDistance;
    float _maximumDistanceForAligningEdges;
}

@property (nonatomic) float maximumNeighbourDistance;
@property (nonatomic) float maximumDistanceForAligningEdges;

- (AXVisualElementGrouper *)init;
- (NSArray *)_groupablesForItems:(NSArray *)arg0;
- (AXVisualElementGrouper *)initWithPadInterfaceHeuristics:(char)arg0;
- (void)setMaximumNeighbourDistance:(float)arg0;
- (void)setMaximumDistanceForAligningEdges:(float)arg0;
- (float)maximumDistanceForAligningEdges;
- (float)maximumNeighbourDistance;

@end
