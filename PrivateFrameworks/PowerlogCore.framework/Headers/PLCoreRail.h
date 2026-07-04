/* Runtime dump - PLCoreRail
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCoreRail : PLCoreOperator

- (PLCoreRail *)init;
- (void)startRails;
- (void)stopRails;
- (void)startRailForOperator:(id)arg0;
- (NSArray *)getAllRailNames;
- (NSString *)sharedRailForRailName:(NSString *)arg0;

@end
