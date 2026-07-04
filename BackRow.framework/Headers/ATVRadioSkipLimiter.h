/* Runtime dump - ATVRadioSkipLimiter
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioStation;
@interface ATVRadioSkipLimiter : NSObject

- (unsigned int)resultForAttemptToSkipTrack:(NSObject *)arg0 withStation:(ATVRadioStation *)arg1 elapsedTime:(double)arg2 duration:(double)arg3 skippedCount:(unsigned int *)arg4 skipLimit:(unsigned int *)arg5;
- (void)didSkipTrack:(NSObject *)arg0 withStation:(ATVRadioStation *)arg1 elapsedTime:(double)arg2 duration:(double)arg3;
- (unsigned int)_numberOfSkipsAllowedForStation:(id)arg0;
- (unsigned int)_numberOfSkipsUsedForStation:(id)arg0;
- (char)_skipFallsWithinThresholdWithElapsedTime:(double)arg0 duration:(double)arg1;
- (unsigned int)_numberOfSkipsAvailableForStation:(id)arg0;

@end
