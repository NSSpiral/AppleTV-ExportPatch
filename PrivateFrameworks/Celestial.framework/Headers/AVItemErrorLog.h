/* Runtime dump - AVItemErrorLog
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemErrorLog : NSObject <NSCopying>
{
    AVItemErrorLogInternal * _playerItemErrorLog;
}

@property (readonly, nonatomic) NSArray * events;

- (AVItemErrorLog *)initWithLogArray:(NSArray *)arg0;
- (NSArray *)events;
- (void)dealloc;
- (AVItemErrorLog *)init;
- (NSString *)description;
- (AVItemErrorLog *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;
- (NSData *)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
