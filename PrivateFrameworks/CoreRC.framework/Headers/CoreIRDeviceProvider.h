/* Runtime dump - CoreIRDeviceProvider
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRDeviceProvider : CoreIRDevice

+ (char)supportsSecureCoding;

- (Class)classForCoder;
- (NSXPCInterface *)interface;
- (char)sendHIDEvent:(NSObject *)arg0 target:(NSObject *)arg1 error:(id *)arg2;

@end
