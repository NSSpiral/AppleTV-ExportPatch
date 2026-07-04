/* Runtime dump - EKTravelAdvisorTracePrediction
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisorTracePrediction : NSObject <NSSecureCoding>
{
    NSDate * _date;
    EKTravelPrediction * _prediction;
    double _delay;
}

@property (readonly, nonatomic) NSDate * date;
@property (readonly, nonatomic) EKTravelPrediction * prediction;
@property (readonly, nonatomic) double delay;

+ (char)supportsSecureCoding;

- (EKTravelAdvisorTracePrediction *)initWithDate:(NSDate *)arg0 prediction:(EKTravelPrediction *)arg1 delay:(double)arg2;
- (void)dealloc;
- (EKTravelAdvisorTracePrediction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (double)delay;
- (NSDate *)date;
- (EKTravelPrediction *)prediction;

@end
