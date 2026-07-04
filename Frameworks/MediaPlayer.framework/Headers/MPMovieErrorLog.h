/* Runtime dump - MPMovieErrorLog
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieErrorLog : NSObject <NSCopying>
{
    AVPlayerItemErrorLog * _errorLog;
}

@property (readonly, nonatomic) NSData * extendedLogData;
@property (readonly, nonatomic) unsigned int extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray * events;

- (MPMovieErrorLog *)_initWithAVItemErrorLog:(AVItemErrorLog *)arg0;
- (NSArray *)events;
- (MPMovieErrorLog *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSData *)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
