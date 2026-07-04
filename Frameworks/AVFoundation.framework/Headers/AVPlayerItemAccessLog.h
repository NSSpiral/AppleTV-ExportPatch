/* Runtime dump - AVPlayerItemAccessLog
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemAccessLog : NSObject <NSCopying>
{
    AVPlayerItemAccessLogInternal * _playerItemAccessLog;
}

@property (readonly, nonatomic) unsigned int extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray * events;

- (AVPlayerItemAccessLog *)initWithLogArray:(NSArray *)arg0;
- (NSArray *)_accessLogArray;
- (NSArray *)events;
- (void)dealloc;
- (AVPlayerItemAccessLog *)init;
- (NSString *)description;
- (AVPlayerItemAccessLog *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;
- (NSData *)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
