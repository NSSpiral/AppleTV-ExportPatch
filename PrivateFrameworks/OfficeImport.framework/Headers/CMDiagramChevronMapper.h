/* Runtime dump - CMDiagramChevronMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramChevronMapper : CMDiagramShapeMapper
{
    char mHChevron;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)setIsHChevron:(char)arg0;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)_suggestedBoundsForNodeAtIndex:(unsigned int)arg0;

@end
