/* Runtime dump - XPCMachSendRight
 * Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@interface XPCMachSendRight : NSObject <NSSecureCoding>
{
    unsigned int _sendRight;
}

+ (char)supportsSecureCoding;
+ (XPCMachSendRight *)wrapSendRight:(unsigned int)arg0;

- (void)dealloc;
- (XPCMachSendRight *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)sendRight;

@end
