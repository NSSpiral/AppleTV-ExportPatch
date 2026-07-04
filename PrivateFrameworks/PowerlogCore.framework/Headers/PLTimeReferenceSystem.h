/* Runtime dump - PLTimeReferenceSystem
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReferenceSystem : PLTimeReferenceDynamic

- (void)dealloc;
- (void)registerForTimeChangedNotification;
- (void)timeChangedToMidnightLocalTime;
- (struct ?)currentTime;

@end
