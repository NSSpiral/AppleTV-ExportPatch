/* Runtime dump - RadioPlaybackTimeoutInfo
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackTimeoutInfo : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary * _playbackTimeoutIdentifierToTimeoutNumber;
}

- (RadioPlaybackTimeoutInfo *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (RadioPlaybackTimeoutInfo *)copyWithZone:(struct _NSZone *)arg0;
- (RadioPlaybackTimeoutInfo *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)_playbackTimeoutIdentifierForBase:(id)arg0 playbackType:(int)arg1;
- (double)dockedPlaybackTimeoutForPlaybackType:(int)arg0;
- (double)lockedPlaybackTimeoutForPlaybackType:(int)arg0;
- (double)pausedPlaybackTimeoutForPlaybackType:(int)arg0;
- (double)unlockedPlaybackTimeoutForPlaybackType:(int)arg0;

@end
