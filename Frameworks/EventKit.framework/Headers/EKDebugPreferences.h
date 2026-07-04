/* Runtime dump - EKDebugPreferences
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDebugPreferences : NSObject
{
    CalPreferences * _preferences;
}

@property (nonatomic) double travelLookaheadInterval;
@property (nonatomic) double availabilityFreshnessWindow;

+ (EKDebugPreferences *)shared;

- (double)availabilityFreshnessWindow;
- (double)travelLookaheadInterval;
- (void)setTravelLookaheadInterval:(double)arg0;
- (void)setAvailabilityFreshnessWindow:(double)arg0;
- (EKDebugPreferences *)init;

@end
