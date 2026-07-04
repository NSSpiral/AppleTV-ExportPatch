/* Runtime dump - CDDebug
 * Image: /System/Library/PrivateFrameworks/CoreDuetDebugLogging.framework/CoreDuetDebugLogging
 */

@interface CDDebug : NSObject
{
    char verboseMode;
}

- (void)log:(char *)arg0;
- (CDDebug *)init;
- (void)error:(int)arg0;
- (CDDebug *)initWithVerboseMode:(char)arg0;

@end
