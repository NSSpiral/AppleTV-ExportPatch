/* Runtime dump - MFAtomIcon
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAtomIcon : UIImage
{
    struct CGPoint drawingOffset;
}

@property (nonatomic) struct CGPoint drawingOffset;

- (void)setDrawingOffset:(struct CGPoint)arg0;
- (struct CGPoint)drawingOffset;

@end
