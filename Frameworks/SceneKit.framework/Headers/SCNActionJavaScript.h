/* Runtime dump - SCNActionJavaScript
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionJavaScript : SCNAction
{
    NSString * _script;
}

+ (NSNumber *)javaScriptActionWithDuration:(double)arg0 script:(NSString *)arg1;

- (char)isCustom;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionJavaScript *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionJavaScript *)copyWithZone:(struct _NSZone *)arg0;
- (SCNActionJavaScript *)initWithString:(NSString *)arg0;

@end
