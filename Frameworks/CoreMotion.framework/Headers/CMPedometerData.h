/* Runtime dump - CMPedometerData
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate * fStartDate;
    NSDate * fEndDate;
    NSNumber * fNumberOfSteps;
    NSNumber * fDistance;
    NSNumber * fFloorAscended;
    NSNumber * fFloorDescended;
    NSNumber * fRecordId;
    NSNumber * fPace;
    NSUUID * fSourceId;
}

@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSNumber * numberOfSteps;
@property (readonly, nonatomic) NSNumber * distance;
@property (readonly, nonatomic) NSNumber * floorsAscended;
@property (readonly, nonatomic) NSNumber * floorsDescended;
@property (readonly, nonatomic) int recordId;
@property (readonly, nonatomic) NSNumber * pace;
@property (readonly, nonatomic) NSUUID * sourceId;

+ (char)supportsSecureCoding;

- (CMPedometerData *)initWithStartDate:(double)arg0 endDate:(double)arg1 steps:(int)arg2 distance:(double)arg3 floorAscended:(int)arg4 floorDescended:(int)arg5 recordID:(int)arg6 pace:(double)arg7 sourceId:(NSUUID *)arg8;
- (NSNumber *)numberOfSteps;
- (NSNumber *)floorsAscended;
- (NSNumber *)floorsDescended;
- (NSNumber *)pace;
- (void)dealloc;
- (CMPedometerData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CMPedometerData *)copyWithZone:(struct _NSZone *)arg0;
- (int)recordId;
- (NSUUID *)sourceId;
- (NSNumber *)distance;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
