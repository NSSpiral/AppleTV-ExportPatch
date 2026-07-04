/* Runtime dump - AVItemAccessLog
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemAccessLog : NSObject <NSCopying>
{
    AVItemAccessLogInternal * _playerItemAccessLog;
}

@property (readonly, nonatomic) NSArray * events;

- (AVItemAccessLog *)initWithLogArray:(NSArray *)arg0;
- (NSArray *)events;
- (void)dealloc;
- (AVItemAccessLog *)init;
- (NSString *)description;
- (AVItemAccessLog *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;
- (NSData *)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
