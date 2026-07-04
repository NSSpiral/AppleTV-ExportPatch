/* Runtime dump - MPSkipIntervalCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent
{
    double _interval;
}

@property (readonly, nonatomic) double interval;

- (MPSkipIntervalCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (double)interval;

@end
