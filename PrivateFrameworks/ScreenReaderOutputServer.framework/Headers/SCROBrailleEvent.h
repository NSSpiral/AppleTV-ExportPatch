/* Runtime dump - SCROBrailleEvent
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEvent : NSObject
{
    int _type;
    id _data;
    id _data2;
    id _data3;
    char _shouldDisplay;
}

@property (nonatomic) char shouldDisplay;

+ (NSObject *)eventWithType:(int)arg0 data:(NSData *)arg1;
+ (NSObject *)eventWithType:(int)arg0 data:(NSData *)arg1 data2:(NSData *)arg2 data3:(NSData *)arg3;

- (void)dealloc;
- (NSString *)description;
- (int)type;
- (NSData *)data;
- (NSData *)data2;
- (char)shouldDisplay;
- (NSData *)data3;
- (SCROBrailleEvent *)initWithType:(int)arg0 data:(NSData *)arg1 data2:(NSData *)arg2 data3:(NSData *)arg3;
- (void)setShouldDisplay:(char)arg0;

@end
