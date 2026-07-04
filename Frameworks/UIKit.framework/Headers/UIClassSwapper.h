/* Runtime dump - UIClassSwapper
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIClassSwapper : NSObject
{
    NSString * className;
    id object;
}

+ (NSObject *)swapperForObject:(NSObject *)arg0 withClassName:(NSString *)arg1;

- (void)dealloc;
- (UIClassSwapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)object;
- (UIClassSwapper *)initWithObject:(NSObject *)arg0 andClassName:(NSString *)arg1;
- (NSString *)className;

@end
