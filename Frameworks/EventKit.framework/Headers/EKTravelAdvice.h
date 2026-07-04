/* Runtime dump - EKTravelAdvice
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvice : NSObject <EKTravelAdvice>
{
    NSDate * _predictedDepartureTime;
    unsigned int _trafficLevel;
    unsigned int _accidentState;
    unsigned int _travelState;
    double _travelStateScore;
}

@property (readonly, nonatomic) NSDate * predictedDepartureTime;
@property (readonly, nonatomic) unsigned int trafficLevel;
@property (readonly, nonatomic) unsigned int accidentState;
@property (readonly, nonatomic) unsigned int travelState;
@property (readonly, nonatomic) double travelStateScore;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDate *)predictedDepartureTime;
- (unsigned int)trafficLevel;
- (unsigned int)accidentState;
- (EKTravelAdvice *)initWithTrafficLevel:(unsigned int)arg0 accidentState:(unsigned int)arg1 travelState:(unsigned int)arg2 travelStateScore:(double)arg3 predictedDepartureTime:(NSDate *)arg4;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)travelState;
- (double)travelStateScore;

@end
