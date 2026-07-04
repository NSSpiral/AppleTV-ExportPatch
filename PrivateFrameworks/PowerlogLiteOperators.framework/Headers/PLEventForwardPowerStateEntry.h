/* Runtime dump - PLEventForwardPowerStateEntry
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLEventForwardPowerStateEntry : PLEntry

@property (readonly) short state;
@property (readonly) short event;
@property (readonly) NSArray * reason;
@property (readonly) char isBasebandWake;

+ (void)load;
+ (NSString *)entryKey;

- (short)state;
- (NSArray *)reason;
- (short)event;
- (PLEventForwardPowerStateEntry *)initEntryWithState:(short)arg0 withEvent:(short)arg1 withReason:(NSArray *)arg2 withDate:(NSDate *)arg3;
- (PLEventForwardPowerStateEntry *)initEntryWithIOMessage:(unsigned long)arg0;
- (char)isBasebandWake;

@end
