/* Runtime dump - UIWebElementAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebElementAction : NSObject
{
    NSString * _title;
    id _actionHandler;
    id _dismissalHandler;
    int _type;
}

@property (readonly, nonatomic) int type;
@property (copy, nonatomic) id dismissalHandler;

+ (UIWebElementAction *)standardElementActionWithType:(int)arg0 customTitle:(NSString *)arg1;
+ (NSString *)customElementActionWithTitle:(NSString *)arg0 actionHandler:(id /* block */)arg1;
+ (UIWebElementAction *)standardElementActionWithType:(int)arg0;

- (void)dealloc;
- (int)type;
- (NSString *)_title;
- (UIWebElementAction *)initWithTitle:(NSString *)arg0 actionHandler:(id /* block */)arg1 type:(/* block */ id)arg2;
- (void)_runActionWithElement:(NSObject *)arg0 targetURL:(NSURL *)arg1 documentView:(NSObject *)arg2 interactionLocation:(struct CGPoint)arg3;
- (id /* block */)dismissalHandler;
- (void)setDismissalHandler:(id /* block */)arg0;

@end
