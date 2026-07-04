/* Runtime dump - AVPlayerItemErrorLog
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemErrorLog : NSObject <NSCopying>
{
    AVPlayerItemErrorLogInternal * _playerItemErrorLog;
}

@property (readonly, nonatomic) unsigned int extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray * events;

- (AVPlayerItemErrorLog *)initWithLogArray:(NSArray *)arg0;
- (NSArray *)_errorLogArray;
- (NSArray *)events;
- (void)dealloc;
- (AVPlayerItemErrorLog *)init;
- (NSString *)description;
- (AVPlayerItemErrorLog *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;
- (NSData *)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
