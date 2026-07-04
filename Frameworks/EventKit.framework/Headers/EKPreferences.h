/* Runtime dump - EKPreferences
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPreferences : NSObject
{
    CalPreferences * _preferences;
}

@property (nonatomic) char enableTravelAdvisoriesForAutomaticBehavior;
@property (nonatomic) double travelEngineThrottlePeriod;

+ (EKPreferences *)shared;

- (double)travelEngineThrottlePeriod;
- (void)setTravelEngineThrottlePeriod:(double)arg0;
- (char)enableTravelAdvisoriesForAutomaticBehavior;
- (void)setEnableTravelAdvisoriesForAutomaticBehavior:(char)arg0;
- (EKPreferences *)init;

@end
