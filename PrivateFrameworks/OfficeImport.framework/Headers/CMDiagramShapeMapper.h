/* Runtime dump - CMDiagramShapeMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeMapper : CMDiagramMapper
{
    unsigned int mChildCount;
    OADOrientedBounds * mDiagramShapeBounds;
    NSString * mIdentifier;
    float mDefaultFontSize;
    int mMaxMappableTreeDepth;
    float mDefaultScale;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (CMDiagramShapeMapper *)initWithOddDiagram:(id)arg0 drawingContext:(NSObject *)arg1 orientedBounds:(OADOrientedBounds *)arg2 identifier:(NSString *)arg3 parent:(NSObject *)arg4;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (void)setFonSizeForChildNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (float)setFonSizeForChildNode:(NSObject *)arg0 atIndex:(unsigned int)arg1 level:(int)arg2;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (struct CGSize)textSizeForShapeSize:(struct CGSize)arg0;
- (float)defaultFontSize;
- (void)setDefaultFonSize;

@end
