/* Runtime dump - CLFloor
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLFloor : NSObject <NSCopying, NSSecureCoding>
{
    int level;
}

@property (readonly, nonatomic) int level;

+ (char)supportsSecureCoding;

- (CLFloor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CLFloor *)copyWithZone:(struct _NSZone *)arg0;
- (int)level;
- (CLFloor *)initWithLevel:(int)arg0;

@end
