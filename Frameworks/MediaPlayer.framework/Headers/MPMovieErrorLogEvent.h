/* Runtime dump - MPMovieErrorLogEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEvent * _event;
}

@property (readonly, nonatomic) NSDate * date;
@property (readonly, nonatomic) NSString * URI;
@property (readonly, nonatomic) NSString * serverAddress;
@property (readonly, nonatomic) NSString * playbackSessionID;
@property (readonly, nonatomic) int errorStatusCode;
@property (readonly, nonatomic) NSString * errorDomain;
@property (readonly, nonatomic) NSString * errorComment;

- (NSObject *)_initWithAVItemErrorLogEvent:(NSObject *)arg0;
- (NSString *)URI;
- (NSString *)serverAddress;
- (NSString *)playbackSessionID;
- (int)errorStatusCode;
- (NSString *)errorComment;
- (NSDate *)date;
- (MPMovieErrorLogEvent *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)errorDomain;

@end
