/* Runtime dump - UIImageNibPlaceholder
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImageNibPlaceholder : UIImage <NSCoding>
{
    NSString * runtimeResourceName;
}

- (void)dealloc;
- (UIImageNibPlaceholder *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIImageNibPlaceholder *)initWithContentsOfFile:(NSString *)arg0 andRuntimeResourceName:(NSString *)arg1;
- (UIImageNibPlaceholder *)initWithData:(NSData *)arg0 andRuntimeResourceName:(NSString *)arg1;

@end
