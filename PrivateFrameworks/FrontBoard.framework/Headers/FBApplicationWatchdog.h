/* Runtime dump - FBApplicationWatchdog
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationWatchdog : BSWatchdog
{
    int _type;
}

@property (readonly, nonatomic) int type;

+ (NSObject *)stringForType:(int)arg0;

- (NSString *)description;
- (int)type;
- (FBApplicationWatchdog *)initWithTimeout:(double)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;
- (FBApplicationWatchdog *)initWithType:(int)arg0 timeout:(double)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;

@end
