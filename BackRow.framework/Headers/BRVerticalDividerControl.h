/* Runtime dump - BRVerticalDividerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRVerticalDividerControl : BRControl
{
    int _heightStyle;
}

- (void)setHeightStyle:(int)arg0;
- (int)heightStyle;
- (void)drawRect:(struct CGRect)arg0;
- (BRVerticalDividerControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
