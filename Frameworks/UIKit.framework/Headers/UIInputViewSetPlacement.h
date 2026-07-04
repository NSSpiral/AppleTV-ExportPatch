/* Runtime dump - UIInputViewSetPlacement
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacement : NSObject
{
    float _extendedHeight;
}

@property (readonly, nonatomic) char showsInputViews;
@property (readonly, nonatomic) char showsKeyboard;
@property (readonly, nonatomic) char isUndocked;
@property (readonly, nonatomic) char isInteractive;
@property (nonatomic) float extendedHeight;

+ (UIInputViewSetPlacement *)placement;

- (char)isEqual:(NSObject *)arg0;
- (char)isInteractive;
- (char)showsInputViews;
- (char)inputViewWillAppear;
- (char)isUndocked;
- (char)showsKeyboard;
- (NSSet *)horizontalConstraintForInputViewSet:(NSSet *)arg0 hostView:(NSObject *)arg1 containerView:(NSObject *)arg2;
- (NSSet *)verticalConstraintForInputViewSet:(NSSet *)arg0 hostView:(NSObject *)arg1 containerView:(NSObject *)arg2;
- (unsigned int)notificationsForTransitionToPlacement:(id)arg0;
- (char)accessoryViewWillAppear;
- (float)extendedHeight;
- (void)setExtendedHeight:(float)arg0;

@end
