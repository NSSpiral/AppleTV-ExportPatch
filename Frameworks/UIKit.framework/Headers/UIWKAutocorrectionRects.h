/* Runtime dump - UIWKAutocorrectionRects
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKAutocorrectionRects : NSObject
{
    struct CGRect _firstRect;
    struct CGRect _lastRect;
}

@property (nonatomic) struct CGRect firstRect;
@property (nonatomic) struct CGRect lastRect;

- (struct CGRect)firstRect;
- (struct CGRect)lastRect;
- (void)setFirstRect:(struct CGRect)arg0;
- (void)setLastRect:(struct CGRect)arg0;

@end
