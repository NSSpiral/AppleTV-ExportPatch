/* Runtime dump - UIViewControllerWrapperView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewControllerWrapperView : UIView
{
    char _tightWrappingDisabled;
}

@property (nonatomic) char tightWrappingDisabled;

+ (NSObject *)existingWrapperViewForView:(NSObject *)arg0;
+ (NSObject *)wrapperViewForView:(NSObject *)arg0 frame:(struct CGRect)arg1;
+ (NSObject *)wrapperViewForView:(NSObject *)arg0 wrapperFrame:(struct CGRect)arg1 viewFrame:(struct CGSize)arg2;

- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (void)setTightWrappingDisabled:(char)arg0;
- (char)tightWrappingDisabled;
- (void)unwrapView;
- (void)unwrapView:(NSObject *)arg0;

@end
