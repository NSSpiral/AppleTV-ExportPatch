/* Runtime dump - MPMovieAccessLog
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieAccessLog : NSObject <NSCopying>
{
    AVPlayerItemAccessLog * _accessLog;
}

@property (readonly, nonatomic) NSData * extendedLogData;
@property (readonly, nonatomic) unsigned int extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray * events;

- (MPMovieAccessLog *)_initWithAVItemAccessLog:(AVItemAccessLog *)arg0;
- (NSArray *)events;
- (MPMovieAccessLog *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSData *)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
