/* Runtime dump - CMDiagramArrowMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramArrowMapper : CMDiagramShapeMapper
{
    char mIsVertical;
    char mIsOutward;
    float mRadius;
}

+ (void)initialize;

- (CMDiagramArrowMapper *)initWithOddDiagram:(id)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 identifier:(NSString *)arg3 parent:(NSObject *)arg4;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (struct CGSize)textSizeForShapeSize:(struct CGSize)arg0;

@end
