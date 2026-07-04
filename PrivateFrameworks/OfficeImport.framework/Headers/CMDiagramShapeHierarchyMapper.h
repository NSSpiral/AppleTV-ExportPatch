/* Runtime dump - CMDiagramShapeHierarchyMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper
{
    NSMutableDictionary * mNodeInfoMap;
    char mIsLayered;
}

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (CMDiagramShapeHierarchyMapper *)initWithOddDiagram:(id)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 identifier:(NSString *)arg3 parent:(NSObject *)arg4;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setUpLayers;
- (void)copyInfoForNode:(NSObject *)arg0 depth:(int)arg1;
- (struct ODIHRangeVector *)mapRangesForNode:(unsigned int)arg0;
- (struct CGRect)mapLogicalBoundsWithXRanges:(NSArray *)arg0;
- (void)setAbsolutePositionOfNode:(NSObject *)arg0 parentRow:(int)arg1 parentXOffset:(float)arg2 index:(unsigned int)arg3;
- (void)mapLayerNodes:(id)arg0 at:(void *)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4 withState:(NSObject *)arg5;
- (void)mapNode:(NSObject *)arg0 at:(void *)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4 withState:(NSObject *)arg5;
- (NSObject *)infoForNode:(NSObject *)arg0;
- (struct CGRect)boundsForNode:(NSObject *)arg0;

@end
