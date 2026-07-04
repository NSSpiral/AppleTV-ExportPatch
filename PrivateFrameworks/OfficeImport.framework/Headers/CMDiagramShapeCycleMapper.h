/* Runtime dump - CMDiagramShapeCycleMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper
{
    float mScale;
    char mCircularArrows;
    int mDiagramType;
    int mArrowShapeType;
}

- (CMDiagramShapeCycleMapper *)initWithOddDiagram:(id)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 identifier:(NSString *)arg3 parent:(NSObject *)arg4;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (struct CGSize)nodeSize;
- (struct CGRect)nodeBoundsWithIndex:(NSObject *)arg0;
- (void)mapTransitionPointAt:(id)arg0 index:(unsigned int)arg1 withState:(NSObject *)arg2;
- (void)mapTransitionArrowsAt:(id)arg0 index:(unsigned int)arg1 withState:(NSObject *)arg2;

@end
