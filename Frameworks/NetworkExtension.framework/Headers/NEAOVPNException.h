/* Runtime dump - NEAOVPNException
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _serviceName;
    NSString * _bundleIdentifier;
    int _action;
}

@property (copy) NSString * serviceName;
@property (copy) NSString * bundleIdentifier;
@property int action;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NEAOVPNException *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)bundleIdentifier;
- (int)action;
- (NEAOVPNException *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(int)arg0;
- (void).cxx_destruct;
- (void)setBundleIdentifier:(NSString *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;

@end
