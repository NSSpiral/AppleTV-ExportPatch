/* Runtime dump - UIInputViewAnimationControllerBasic
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerBasic : NSObject <UIInputViewAnimationController>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)prepareAnimationWithHost:(NSString *)arg0 startPlacement:(id)arg1 endPlacement:(UIInputViewSetPlacement *)arg2;
- (void)performAnimationWithHost:(NSString *)arg0 context:(NSObject *)arg1;
- (void)completeAnimationWithHost:(NSString *)arg0 context:(NSObject *)arg1;

@end
