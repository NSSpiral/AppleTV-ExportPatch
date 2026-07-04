/* Runtime dump - EKTravelAgendaItem
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAgendaItem : NSObject
{
    id _adviceBlock;
    double _initialDistanceFromDestination;
    char _haveAdvised;
    NSMutableArray * _trace;
    CLLocation * _location;
    NSDate * _date;
    int _travelMethod;
}

@property (readonly, nonatomic) CLLocation * location;
@property (readonly, nonatomic) NSDate * date;
@property (readonly, nonatomic) int travelMethod;

+ (char)_clLocation:(NSObject *)arg0 isEqualToCLLocation:(NSObject *)arg1;

- (EKTravelAgendaItem *)initWithLocation:(CLLocation *)arg0 date:(NSDate *)arg1 travelMethod:(int)arg2 adviceBlock:(id /* block */)arg3;
- (int)travelMethod;
- (EKTravelAgendaItem *)initWithLocation:(CLLocation *)arg0 date:(NSDate *)arg1 adviceBlock:(id /* block */)arg2;
- (void)advise:(id)arg0;
- (char)isCloseToPersonAtLocation:(NSObject *)arg0;
- (char)haveAdvised;
- (char)isEqualToTravelAgendaItem:(NSObject *)arg0;
- (char)writeTraceToDisk;
- (void)tracePrediction:(EKTravelAdvisorTracePrediction *)arg0 date:(NSDate *)arg1 delay:(double)arg2;
- (void)traceLocation:(NSObject *)arg0 date:(NSDate *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSDate *)date;
- (CLLocation *)location;

@end
