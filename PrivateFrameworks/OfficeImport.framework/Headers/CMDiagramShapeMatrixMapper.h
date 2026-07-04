/* Runtime dump - CMDiagramShapeMatrixMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper
{
    unsigned int mColumnCount;
    unsigned int mRowCount;
    float mRectWidth;
    float mRectHeight;
    char mHasArrows;
    char mIsSnake;
    char mIsHorizontal;
    char mIsLinear;
}

- (unsigned int)columnCount;
- (CMDiagramShapeMatrixMapper *)initWithOddDiagram:(id)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 identifier:(NSString *)arg3 parent:(NSObject *)arg4;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setColumnsAndRowsCount;
- (struct CGSize)gapSize;
- (double)gapRatio;

@end
