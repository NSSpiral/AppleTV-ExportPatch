/* Runtime dump - UIVirtualResizeAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVirtualResizeAction : BSAction

@property (readonly, nonatomic) struct CGSize virtualSize;
@property (readonly, nonatomic) int virtualHorizontalSizeClass;
@property (readonly, nonatomic) int virtualVerticalSizeClass;

- (int)UIActionType;
- (struct CGSize)virtualSize;
- (int)virtualHorizontalSizeClass;
- (int)virtualVerticalSizeClass;
- (UIVirtualResizeAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (UIVirtualResizeAction *)initWithVirtualSize:(struct CGSize)arg0 virtualHorizontalSizeClass:(int)arg1 virtualVerticalSizeClass:(int)arg2;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;

@end
