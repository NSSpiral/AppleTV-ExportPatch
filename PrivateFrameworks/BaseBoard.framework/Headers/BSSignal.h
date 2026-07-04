/* Runtime dump - BSSignal
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSignal : NSObject
{
    char _signalled;
}

- (BSSignal *)init;
- (void)reset;
- (void)signal;
- (char)hasBeenSignalled;

@end
