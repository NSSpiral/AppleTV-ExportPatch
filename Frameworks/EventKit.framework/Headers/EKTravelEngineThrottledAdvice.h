/* Runtime dump - EKTravelEngineThrottledAdvice
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineThrottledAdvice : NSObject
{
    NSString * _eventExternalURL;
    <EKTravelAdvice> * _advice;
}

@property (readonly, retain, nonatomic) NSString * eventExternalURL;
@property (retain, nonatomic) <EKTravelAdvice> * advice;

- (<EKTravelAdvice> *)advice;
- (NSString *)eventExternalURL;
- (EKTravelEngineThrottledAdvice *)initWithEventExternalURL:(NSString *)arg0;
- (void)setAdvice:(<EKTravelAdvice> *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
