/* Runtime dump - AXElementGrouper
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementGrouper : NSObject
{
    unsigned int _minimumGroupSize;
    unsigned int _maximumGroupSize;
    unsigned int _preferredGroupSize;
    float _thresholdForDeterminingEqualSize;
}

@property (nonatomic) unsigned int minimumGroupSize;
@property (nonatomic) unsigned int maximumGroupSize;
@property (nonatomic) unsigned int preferredGroupSize;
@property (nonatomic) float thresholdForDeterminingEqualSize;

- (NSObject *)_buildHierarchyForGroup:(NSObject *)arg0 indexOfKeyboard:(unsigned int *)arg1;
- (NSObject *)_flattenHierarchyForGroup:(NSObject *)arg0 rootLevel:(char)arg1;
- (id)_groupRemovingImpossibleGroups:(id)arg0 isRootLevel:(char)arg1;
- (unsigned int)minimumGroupSize;
- (float)thresholdForDeterminingEqualSize;
- (unsigned int)maximumGroupSize;
- (unsigned int)preferredGroupSize;
- (NSArray *)_groupablesForItems:(NSArray *)arg0;
- (AXElementGrouper *)initWithPadInterfaceHeuristics:(char)arg0;
- (NSObject *)groupElementsInRootGroup:(NSObject *)arg0;
- (char)_frame:(struct CGRect)arg0 isApproximatelySameSizeAsFrame:(struct CGSize)arg1;
- (void)setMinimumGroupSize:(unsigned int)arg0;
- (void)setMaximumGroupSize:(unsigned int)arg0;
- (void)setPreferredGroupSize:(unsigned int)arg0;
- (void)setThresholdForDeterminingEqualSize:(float)arg0;

@end
