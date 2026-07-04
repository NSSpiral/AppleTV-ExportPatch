/* Runtime dump - PLEventBackwardBatteryEntry
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLEventBackwardBatteryEntry : PLEntry

+ (void)load;
+ (NSString *)entryKey;
+ (NSData *)levelWithRawData:(char)arg0;
+ (NSData *)rawLevelWithRawData:(char)arg0;

- (void)dealloc;
- (PLEventBackwardBatteryEntry *)initEntryWithRawData:(char)arg0;

@end
