/* Runtime dump - EKTravelPrediction
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelPrediction : NSObject <NSSecureCoding>
{
    NSDate * _departureDate;
    NSDate * _arrivalDate;
    CLLocation * _startingLocation;
    double _validRadius;
    NSDate * _predictionDate;
    double _ttl;
}

@property (readonly, nonatomic) NSDate * departureDate;
@property (readonly, nonatomic) NSDate * arrivalDate;
@property (readonly, nonatomic) <EKTravelAdvice> * advice;
@property (readonly, nonatomic) CLLocation * startingLocation;
@property (readonly, nonatomic) double validRadius;
@property (readonly, nonatomic) NSDate * predictionDate;
@property (readonly, nonatomic) double ttl;

+ (char)supportsSecureCoding;

- (EKTravelPrediction *)initWithDepartureDate:(NSDate *)arg0 arrivalDate:(NSDate *)arg1 startingLocation:(CLLocation *)arg2 predictionDate:(NSDate *)arg3 pollAggressively:(char)arg4;
- (EKTravelPrediction *)initWithDepartureDate:(NSDate *)arg0 arrivalDate:(NSDate *)arg1 startingLocation:(CLLocation *)arg2 validRadius:(double)arg3 predictionDate:(NSDate *)arg4 ttl:(double)arg5;
- (<EKTravelAdvice> *)advice;
- (NSDate *)predictionDate;
- (CLLocation *)startingLocation;
- (double)validRadius;
- (char)isExpiredWithLocation:(NSObject *)arg0 date:(NSDate *)arg1;
- (void)dealloc;
- (EKTravelPrediction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)ttl;
- (NSDate *)departureDate;
- (NSDate *)arrivalDate;

@end
