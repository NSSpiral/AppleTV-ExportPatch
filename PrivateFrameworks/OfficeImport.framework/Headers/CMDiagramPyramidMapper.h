/* Runtime dump - CMDiagramPyramidMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramPyramidMapper : CMDiagramShapeMapper
{
    char mIsFlipped;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)setIsFlipped:(char)arg0;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)_suggestedBoundsForNodeAtIndex:(unsigned int)arg0;

@end
