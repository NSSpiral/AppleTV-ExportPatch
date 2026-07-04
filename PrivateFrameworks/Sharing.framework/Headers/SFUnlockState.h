/* Runtime dump - SFUnlockState
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFUnlockState : NSObject <NSSecureCoding>
{
    NSNumber * _unlockEnabled;
    NSNumber * _remotePasscodeEnabled;
}

@property (readonly) NSNumber * unlockEnabled;
@property (readonly) NSNumber * remotePasscodeEnabled;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (SFUnlockState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SFUnlockState *)initWithUnlockEnabled:(NSNumber *)arg0 remotePasscodeEnabled:(NSNumber *)arg1;
- (NSNumber *)unlockEnabled;
- (NSNumber *)remotePasscodeEnabled;

@end
