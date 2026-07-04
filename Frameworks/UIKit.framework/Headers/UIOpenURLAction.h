/* Runtime dump - UIOpenURLAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIOpenURLAction : BSAction

@property (readonly, copy, nonatomic) NSURL * url;

- (int)UIActionType;
- (NSURL *)url;
- (UIOpenURLAction *)initWithURL:(NSString *)arg0;
- (UIOpenURLAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;

@end
