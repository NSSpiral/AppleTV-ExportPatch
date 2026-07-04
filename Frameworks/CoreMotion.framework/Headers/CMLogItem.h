/* Runtime dump - CMLogItem
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMLogItem : NSObject <NSSecureCoding, NSCopying>
{
    id _internalLogItem;
}

@property (readonly, nonatomic) double timestamp;

+ (char)supportsSecureCoding;

- (CMLogItem *)initWithTimestamp:(double)arg0;
- (void)dealloc;
- (CMLogItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (double)timestamp;
- (CMLogItem *)copyWithZone:(struct _NSZone *)arg0;

@end
