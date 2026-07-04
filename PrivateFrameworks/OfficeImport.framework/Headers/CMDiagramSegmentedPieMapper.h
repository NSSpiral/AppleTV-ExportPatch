/* Runtime dump - CMDiagramSegmentedPieMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper
{
    char mDrawArrows;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)setDrawArrows:(char)arg0;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)_suggestedBoundsForNodeAtIndex:(unsigned int)arg0;
- (int)pointCount;

@end
