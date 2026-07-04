/* Runtime dump - CoreIRDevice
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRDevice : CoreRCDevice
{
    char _isLocalDevice;
}

@property (nonatomic) char isLocalDevice;

+ (char)supportsSecureCoding;

- (CoreIRDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setIsLocalDevice:(char)arg0;
- (char)isLocalDevice;

@end
