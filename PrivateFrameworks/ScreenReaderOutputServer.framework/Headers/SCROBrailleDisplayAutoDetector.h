/* Runtime dump - SCROBrailleDisplayAutoDetector
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayAutoDetector : NSObject
{
    char _isDetectingDisplays;
    struct IONotificationPort * _notificationPort;
    NSMutableDictionary * _iteratorDict;
}

+ (void)initialize;
+ (SCROBrailleDisplayAutoDetector *)allocWithZone:(struct _NSZone *)arg0;
+ (SCROBrailleDisplayAutoDetector *)sharedDetector;

- (SCROBrailleDisplayAutoDetector *)retain;
- (void)release;
- (SCROBrailleDisplayAutoDetector *)init;
- (SCROBrailleDisplayAutoDetector *)autorelease;
- (unsigned int)retainCount;
- (SCROBrailleDisplayAutoDetector *)copyWithZone:(struct _NSZone *)arg0;
- (char)isAutoDetectEnabled;
- (void)detectDisplays;
- (void)stopDetectingDisplays;

@end
