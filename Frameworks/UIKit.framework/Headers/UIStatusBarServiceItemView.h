/* Runtime dump - UIStatusBarServiceItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServiceItemView : UIStatusBarItemView
{
    NSString * _serviceString;
    NSString * _crossfadeString;
    unsigned int _crossfadeStep;
    float _maxWidth;
    float _serviceWidth;
    float _crossfadeWidth;
    int _contentType;
    char _loopingNecessaryForString;
    char _loopNowIfNecessary;
    char _loopingNow;
    float _letterSpacing;
}

- (void)dealloc;
- (char)updateForNewData:(NSData *)arg0 actions:(int)arg1;
- (UIImage *)contentsImage;
- (int)legibilityStyle;
- (float)updateContentsAndWidth;
- (float)standardPadding;
- (void)setVisible:(char)arg0 frame:(struct CGRect)arg1 duration:(struct CGSize)arg2;
- (float)extraRightPadding;
- (float)resetContentOverlap;
- (float)addContentOverlap:(float)arg0;
- (char)animatesDataChange;
- (void)performPendedActions;
- (char)updateForContentType:(int)arg0 serviceString:(NSString *)arg1 serviceCrossfadeString:(NSString *)arg2 maxWidth:(float)arg3 actions:(int)arg4;
- (NSString *)_cachedContentImageForString:(NSString *)arg0 withWidth:(float)arg1 letterSpacing:(float)arg2;
- (void)_crossfadeStepAnimation;
- (char)_crossfaded;
- (char)_loopingNecessary;
- (NSString *)_contentsImageFromString:(NSString *)arg0 withWidth:(float)arg1 letterSpacing:(float)arg2;
- (UIImage *)_crossfadeContentsImage;
- (UIImage *)_serviceContentsImage;
- (void)_loopAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (void)_finalAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;

@end
