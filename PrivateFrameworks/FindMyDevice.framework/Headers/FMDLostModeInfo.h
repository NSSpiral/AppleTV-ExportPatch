/* Runtime dump - FMDLostModeInfo
 * Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDLostModeInfo : NSObject <NSSecureCoding>
{
    char _lostModeEnabled;
    NSString * _message;
    NSString * _phoneNumber;
}

@property (nonatomic) char lostModeEnabled;
@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) NSString * phoneNumber;

+ (char)supportsSecureCoding;

- (void)setPhoneNumber:(NSString *)arg0;
- (void)dealloc;
- (FMDLostModeInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)phoneNumber;
- (void).cxx_destruct;
- (char)lostModeEnabled;
- (void)setLostModeEnabled:(char)arg0;

@end
