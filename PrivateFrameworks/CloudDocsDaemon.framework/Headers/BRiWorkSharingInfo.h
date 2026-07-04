/* Runtime dump - BRiWorkSharingInfo
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRiWorkSharingInfo : NSObject <NSSecureCoding>
{
    char _options;
}

@property (readonly, nonatomic) char options;

+ (char)supportsSecureCoding;

- (BRiWorkSharingInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)options;

@end
