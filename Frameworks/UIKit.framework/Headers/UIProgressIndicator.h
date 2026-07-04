/* Runtime dump - UIProgressIndicator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressIndicator : UIActivityIndicatorView

@property (nonatomic) int progressIndicatorStyle;

+ (struct CGSize)size;

- (void)setStyle:(int)arg0;
- (void)stopAnimation;
- (void)setAnimating:(char)arg0;
- (void)setProgressIndicatorStyle:(int)arg0;
- (int)progressIndicatorStyle;
- (void)startAnimation;

@end
