/* Runtime dump - BRChapterGridItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRMarqueeTextControl;
@interface BRChapterGridItem : BRControl
{
    BRAsyncImageControl * _imageControl;
    BRMarqueeTextControl * _chapterTitleControl;
    NSDictionary * _chapterInfo;
}

- (void)layoutSubcontrols;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (struct CGRect)focusCursorFrame;
- (void)setChapterInfo:(NSDictionary *)arg0;
- (NSDictionary *)chapterInfo;
- (void)dealloc;
- (BRChapterGridItem *)init;
- (char)isAccessibilityElement;

@end
