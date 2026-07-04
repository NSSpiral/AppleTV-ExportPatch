/* Runtime dump - UIInputViewSetPlacementUndocked
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement
{
    float _normalizedOffset;
    struct UIEdgeInsets _chromeBuffer;
}

@property (nonatomic) float normalizedOffset;
@property (nonatomic) struct UIEdgeInsets chromeBuffer;

+ (NSSet *)placementWithUndockedOffset:(float)arg0 chromeBuffer:(struct UIEdgeInsets)arg1;

- (char)isEqual:(NSObject *)arg0;
- (char)inputViewWillAppear;
- (char)isUndocked;
- (NSSet *)verticalConstraintForInputViewSet:(NSSet *)arg0 hostView:(NSObject *)arg1 containerView:(NSObject *)arg2;
- (void)setNormalizedOffset:(float)arg0;
- (void)setChromeBuffer:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)chromeBuffer;
- (float)normalizedOffset;

@end
