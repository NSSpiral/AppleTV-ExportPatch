/* Runtime dump - CMDiagramListMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramListMapper : CMDiagramShapeMapper
{
    float mMaxLineCount;
}

- (struct CGSize)textSize;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (void)mapChildrenAt:(id)arg0 withState:(NSObject *)arg1;
- (float)setFonSizeForChildNode:(NSObject *)arg0 atIndex:(unsigned int)arg1 level:(int)arg2;
- (struct CGSize)sizeForNode:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setDefaultFonSize;
- (void)mapListItemAt:(id)arg0 index:(unsigned int)arg1 withState:(NSObject *)arg2;
- (NSObject *)suggestedBoundsForHListItemWithIndex:(unsigned int)arg0;

@end
