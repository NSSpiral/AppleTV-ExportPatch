/* Runtime dump - BRTextLineControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRTypesetLine;
@interface BRTextLineControl : BRControl
{
    BRTypesetLine * _line;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setLine:(BRTypesetLine *)arg0;

@end
