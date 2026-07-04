/* Runtime dump - PLDisplayAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLDisplayAgent : PLAgent
{
    char _alsOn;
    PLIOKitOperatorComposition * _iokitBacklight;
    PLIOKitOperatorComposition * _iokitDisplay;
    PLIOKitOperatorComposition * _iokitTouch;
    BrightnessSystemClient * _brightnessSystemClient;
    PLNSTimerOperatorComposition * _backlightFilterTimer;
    NSDictionary * _pendingBacklightEntry;
    NSDate * _pendingBacklightEntryDate;
    NSString * _displayHardware;
    NSDictionary * _displayPowerModel;
}

@property (readonly) PLIOKitOperatorComposition * iokitBacklight;
@property (readonly) PLIOKitOperatorComposition * iokitDisplay;
@property (readonly) PLIOKitOperatorComposition * iokitTouch;
@property (retain) BrightnessSystemClient * brightnessSystemClient;
@property (retain) PLNSTimerOperatorComposition * backlightFilterTimer;
@property (retain) NSDictionary * pendingBacklightEntry;
@property (retain) NSDate * pendingBacklightEntryDate;
@property char alsOn;
@property (readonly) NSString * displayHardware;
@property (readonly) NSDictionary * displayPowerModel;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSObject *)entryEventPointDefinitionDisplay;
+ (PLDisplayAgent *)entryEventPointDefinitionUserBrightness;
+ (NSObject *)entryEventForwardDefinitionDisplay;
+ (PLDisplayAgent *)entryEventForwardDefinitionALSUserPreferences;
+ (PLDisplayAgent *)entryEventForwardDefinitionALSEnabled;
+ (PLDisplayAgent *)entryEventBackwardDefinitionTouch;

- (PLDisplayAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (void)handleBrightnessClientNotification:(NSNotification *)arg0 withValue:(NSValue *)arg1;
- (void)setPendingBacklightEntry:(NSDictionary *)arg0;
- (NSDate *)pendingBacklightEntryDate;
- (void)setPendingBacklightEntryDate:(NSDate *)arg0;
- (PLNSTimerOperatorComposition *)backlightFilterTimer;
- (NSDictionary *)pendingBacklightEntry;
- (void)logEventForwardDisplayWithRawData:(char)arg0 withDate:(NSDate *)arg1;
- (void)setBacklightFilterTimer:(PLNSTimerOperatorComposition *)arg0;
- (void)logEventPointDisplayForBlock:(id /* block */)arg0 isActive:(char)arg1;
- (void)logEventBackwardTouch;
- (NSString *)displayHardware;
- (void)logEventForwardDisplay;
- (void)logEventPointDisplay;
- (void)logEventForwardALSEnabled;
- (void)logEventForwardALSUserPreferences;
- (void)logEventPointDisplayBacklight;
- (void)logEventPointDisplayMIE;
- (PLIOKitOperatorComposition *)iokitBacklight;
- (PLIOKitOperatorComposition *)iokitDisplay;
- (BrightnessSystemClient *)brightnessSystemClient;
- (void)modelDisplayPower:(id)arg0;
- (void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg0;
- (char)isAlsEnabled;
- (void)setAlsOn:(char)arg0;
- (char)alsOn;
- (void)logEventForwardALSEnabledEntry:(char)arg0;
- (PLIOKitOperatorComposition *)iokitTouch;
- (double)uAmpsToDisplayPower:(double)arg0;
- (void)logEventPointUserBrightnessCommitted:(double)arg0;
- (void)logEventForwardALSUserPreferencesWithCurrLux;
- (double)modelDisplayPowerForK94:(id)arg0;
- (NSDictionary *)displayPowerModel;
- (void)setBrightnessSystemClient:(BrightnessSystemClient *)arg0;

@end
