/* Runtime dump - CMDiagramPointTransitionMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper
{
    int mShapeType;
    NSDictionary * mAdjustValues;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (CMDiagramPointTransitionMapper *)initWithPoint:(struct CGPoint)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 shapeType:(int)arg3 adjustValues:(NSDictionary *)arg4 parent:(NSObject *)arg5;
- (CMDiagramPointTransitionMapper *)initWithPoint:(struct CGPoint)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 shapeType:(int)arg3 parent:(NSObject *)arg4;

@end
