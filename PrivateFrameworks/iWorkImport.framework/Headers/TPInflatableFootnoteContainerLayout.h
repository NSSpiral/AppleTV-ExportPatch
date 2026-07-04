/* Runtime dump - TPInflatableFootnoteContainerLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPInflatableFootnoteContainerLayout : TPFootnoteContainerLayout
{
    char _inflated;
}

- (NSObject *)computeLayoutGeometry;
- (void)setNeedsInflation;
- (void)validate;

@end
