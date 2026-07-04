/* Runtime dump - QLPageNumberView
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPageNumberView : UIView
{
    int _pageNumber;
    int _pageCount;
    UILabel * _backgroundLabel;
    UILabel * _label;
    NSNumberFormatter * _indexFormatter;
}

@property int pageNumber;
@property int pageCount;

- (NSNumberFormatter *)_indexFormatter;
- (void)_updateString;
- (struct CGPath *)_copyMutablePathForRoundedRect:(struct CGRect)arg0 radius:(struct CGSize)arg1 inverted:(char)arg2;
- (QLPageNumberView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)sizeToFit;
- (int)pageCount;
- (void)setPageCount:(int)arg0;
- (int)pageNumber;
- (void)setPageNumber:(int)arg0;

@end
