/* Runtime dump - UIKBBackdropView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackdropView : _UIBackdropView
{
    char _primaryBackdrop;
    NSMutableArray * _secondaryBackdrops;
    UIKeyboardBackdropCornerView * _backdropCornerView;
    char _hasUpdatedFrame;
}

@property (readonly, nonatomic) char _hasUpdatedFrame;

+ (NSArray *)unconditionalTriggerNotificationNames;
+ (void)overlayRelevantSettings:(NSDictionary *)arg0 ontoSettings:(NSDictionary *)arg1;
+ (NSArray *)triggerNotificationNames;
+ (void)_registerSecondaryBackdropView:(NSObject *)arg0;
+ (void)_unregisterSecondaryBackdropView:(NSObject *)arg0;
+ (void)_updatedSecondaryBackdropsWithSettings:(NSDictionary *)arg0;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)applySettings:(NSDictionary *)arg0;
- (void)updateFrame:(struct CGRect)arg0 withCorners:(struct CGSize)arg1;
- (void)triggerUpdate:(NSDate *)arg0;
- (void)transitionToStyle:(int)arg0;
- (void)_setRenderConfig:(NSObject *)arg0;
- (UIKBBackdropView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1 primaryBackdrop:(char)arg2;
- (int)textEffectsVisibilityLevel;
- (void)willCallRenderInContextOnBackdropViewLayer;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (char)_hasUpdatedFrame;

@end
