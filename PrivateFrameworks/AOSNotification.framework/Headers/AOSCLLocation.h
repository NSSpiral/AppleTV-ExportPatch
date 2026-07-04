/* Runtime dump - AOSCLLocation
 * Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSCLLocation : CLLocation <NSSecureCoding>

+ (char)supportsSecureCoding;

- (AOSCLLocation *)initWithCLLocation:(NSObject *)arg0;
- (AOSCLLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;

@end
