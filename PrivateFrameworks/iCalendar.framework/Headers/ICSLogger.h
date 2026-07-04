/* Runtime dump - ICSLogger
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSLogger : NSObject
{
    int _logCount;
    <ICSLoggingDelegate> * _loggingDelegate;
}

+ (ICSLogger *)sharedInstance;
+ (void)setDelegate:(NSObject *)arg0;
+ (void)logAtLevel:(int)arg0 forTokenizer:(_UITextInputControllerTokenizer *)arg1 message:(NSString *)arg2;

- (void)setDelegate:(NSObject *)arg0;
- (void)logAtLevel:(int)arg0 forTokenizer:(_UITextInputControllerTokenizer *)arg1 format:(NSString *)arg2 args:(void *)arg3;

@end
