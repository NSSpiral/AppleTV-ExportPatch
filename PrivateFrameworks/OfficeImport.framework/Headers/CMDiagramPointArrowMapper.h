/* Runtime dump - CMDiagramPointArrowMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPointArrowMapper : CMDiagramPointMapper
{
    int mArrowType;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (CMDiagramPointArrowMapper *)initWithPoint:(struct CGPoint)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 parent:(NSObject *)arg3;
- (NSString *)transformPresentationName;
- (id)getTextBoundsForBounds:(id)arg0;

@end
