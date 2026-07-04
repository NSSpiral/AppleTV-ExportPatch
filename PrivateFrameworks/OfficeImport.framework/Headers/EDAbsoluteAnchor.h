/* Runtime dump - EDAbsoluteAnchor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDAbsoluteAnchor : EDAnchor
{
    struct CGPoint mPosition;
    struct CGSize mSize;
}

- (struct CGRect)bounds;
- (struct CGSize)size;
- (void)setBounds:(struct CGRect)arg0;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (void).cxx_construct;

@end
