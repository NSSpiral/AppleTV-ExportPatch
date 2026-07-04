/* Runtime dump - HMDEvent
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEvent : NSObject <NSSecureCoding>
{
    HMDEventTrigger * _eventTrigger;
    NSUUID * _uuid;
}

@property (weak, nonatomic) HMDEventTrigger * eventTrigger;
@property (readonly, nonatomic) NSUUID * uuid;

+ (char)supportsSecureCoding;

- (HMDEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDEvent *)init;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (void)setEventTrigger:(HMDEventTrigger *)arg0;
- (HMDEventTrigger *)eventTrigger;

@end
