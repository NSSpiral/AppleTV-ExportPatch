/* Runtime dump - UIInputViewAnimationStyle
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationStyle : NSObject <NSCopying>
{
    char animated;
    double duration;
    unsigned int extraOptions;
    char interactivelyCancelled;
    char force;
}

@property (nonatomic) char animated;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int extraOptions;
@property (nonatomic) char interactivelyCancelled;
@property (readonly, nonatomic) char isAnimationCompleted;
@property (readonly, nonatomic) char canDismissWithScrollView;
@property (nonatomic) char force;

+ (UIInputViewAnimationStyle *)animationStyleImmediate;
+ (UIInputViewAnimationStyle *)animationStyleDefault;
+ (UIInputViewAnimationStyle *)animationStyleAnimated:(char)arg0 duration:(double)arg1;

- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (UIInputViewAnimationStyle *)copyWithZone:(struct _NSZone *)arg0;
- (char)animated;
- (void)setAnimated:(char)arg0;
- (void)setExtraOptions:(unsigned int)arg0;
- (unsigned int)extraOptions;
- (void)setInteractivelyCancelled:(char)arg0;
- (void)launchAnimation:(NSObject *)arg0 afterStarted:(/* block */ id)arg1 completion:(id /* block */)arg2 forHost:(/* block */ id)arg3 fromCurrentPosition:(NSObject *)arg4;
- (id)controllerForStartPlacement:(id)arg0 endPlacement:(UIInputViewSetPlacement *)arg1;
- (char)isAnimationCompleted;
- (char)canDismissWithScrollView;
- (void)setForce:(char)arg0;
- (NSSet *)endPlacementForInputViewSet:(NSSet *)arg0;
- (char)interactivelyCancelled;
- (char)force;
- (NSSet *)startPlacementForInputViewSet:(NSSet *)arg0 currentPlacement:(id)arg1;

@end
