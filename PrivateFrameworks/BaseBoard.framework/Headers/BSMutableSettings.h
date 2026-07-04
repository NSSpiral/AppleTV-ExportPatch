/* Runtime dump - BSMutableSettings
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMutableSettings : BSSettings

- (BSMutableSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void)applySettings:(NSDictionary *)arg0;
- (void)setObject:(NSObject *)arg0 forSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg0 forSetting:(unsigned int)arg1;

@end
