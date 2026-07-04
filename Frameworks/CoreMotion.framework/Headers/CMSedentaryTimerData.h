/* Runtime dump - CMSedentaryTimerData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying>
{
    double fStartDate;
    double fFiredDate;
    int fAlarmType;
    char fDidWake;
}

@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * firedDate;
@property (readonly, nonatomic) int alarmType;
@property (readonly, nonatomic) char didWake;

+ (char)supportsSecureCoding;

- (CMSedentaryTimerData *)initWithStartDate:(double)arg0 firedDate:(double)arg1 alarmType:(int)arg2 didWake:(char)arg3;
- (NSDate *)firedDate;
- (char)didWake;
- (int)alarmType;
- (CMSedentaryTimerData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMSedentaryTimerData *)copyWithZone:(struct _NSZone *)arg0;
- (NSDate *)startDate;

@end
