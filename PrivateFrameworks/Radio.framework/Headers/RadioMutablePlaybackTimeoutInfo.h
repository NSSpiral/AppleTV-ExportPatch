/* Runtime dump - RadioMutablePlaybackTimeoutInfo
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlaybackTimeoutInfo : RadioPlaybackTimeoutInfo

- (RadioMutablePlaybackTimeoutInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)removeAllPlaybackTimeouts;
- (void)setDockedPlaybackTimeout:(double)arg0 forPlaybackType:(int)arg1;
- (void)setLockedPlaybackTimeout:(double)arg0 forPlaybackType:(int)arg1;
- (void)setPausedPlaybackTimeout:(double)arg0 forPlaybackType:(int)arg1;
- (void)setUnlockedPlaybackTimeout:(double)arg0 forPlaybackType:(int)arg1;

@end
