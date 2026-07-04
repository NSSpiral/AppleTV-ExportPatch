/* Runtime dump - BRAlignmentAdjustingTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextControl.h>
@interface BRAlignmentAdjustingTextControl : BRTextControl
{
    int _singleLineAlignment;
    int _multiLineAlignment;
}

@property int singleLineAlignment;
@property int multiLineAlignment;

- (void)layoutSubcontrols;
- (int)singleLineAlignment;
- (void)setSingleLineAlignment:(int)arg0;
- (int)multiLineAlignment;
- (void)setMultiLineAlignment:(int)arg0;
- (BRAlignmentAdjustingTextControl *)init;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (void)_updateAttributes;

@end
