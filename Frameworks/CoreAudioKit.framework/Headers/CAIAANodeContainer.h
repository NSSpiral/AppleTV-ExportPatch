/* Runtime dump - CAIAANodeContainer
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAIAANodeContainer : UIScrollView
{
    int _numPages;
}

@property int numPages;

+ (void)initialize;

- (int)numPages;
- (void)setNumPages:(int)arg0;
- (CAIAANodeContainer *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (float)contentWidth;
- (float)minWidth;

@end
