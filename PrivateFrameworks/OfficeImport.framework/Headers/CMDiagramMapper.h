/* Runtime dump - CMDiagramMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramMapper : CMDrawableMapper
{
    ODDDiagram * mDiagram;
    CMDrawingContext * mDrawingContext;
}

+ (int)diagramTypeFromString:(NSString *)arg0;

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (OADStyleMatrix *)styleMatrix;
- (CMDiagramMapper *)initWithOddDiagram:(id)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 parent:(NSObject *)arg3;
- (NSObject *)identifierFromLayoutTypeId:(NSObject *)arg0;
- (NSObject *)copyDiagramMapperForId:(NSObject *)arg0;
- (id)diagram;

@end
