/* Runtime dump - UIInputViewAnimationControllerSlide
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController>
{
    int _slide;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)prepareAnimationWithHost:(NSString *)arg0 startPlacement:(id)arg1 endPlacement:(UIInputViewSetPlacement *)arg2;
- (void)performAnimationWithHost:(NSString *)arg0 context:(NSObject *)arg1;
- (void)completeAnimationWithHost:(NSString *)arg0 context:(NSObject *)arg1;
- (UIInputViewAnimationControllerSlide *)initWithSlide:(int)arg0;
- (id)placementForSlideStart:(char)arg0;

@end
