/* Runtime dump - CHDAbsoluteSizeAnchor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDAbsoluteSizeAnchor : CHDAnchor
{
    struct CGPoint mFrom;
    struct CGSize mSize;
}

- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (void)setFrom:(struct CGPoint)arg0;
- (struct CGPoint)from;

@end
