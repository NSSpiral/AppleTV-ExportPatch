/* Runtime dump - MFComposeImageSizeView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeImageSizeView : MFComposeHeaderView
{
    UISegmentedControl * _segmentedControl;
}

- (void)setSizeDescription:(NSString *)arg0 forScale:(unsigned int)arg1;
- (void)segmentedControlChanged;
- (unsigned long)_segmentIndexForScale:(unsigned int)arg0;
- (MFComposeImageSizeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setScale:(unsigned int)arg0;

@end
