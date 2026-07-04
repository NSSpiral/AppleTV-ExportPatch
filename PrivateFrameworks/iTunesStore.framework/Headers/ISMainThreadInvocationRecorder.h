/* Runtime dump - ISMainThreadInvocationRecorder
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISMainThreadInvocationRecorder : ISInvocationRecorder
{
    char _waitUntilDone;
}

@property (nonatomic) char waitUntilDone;

- (char)waitUntilDone;
- (void)setWaitUntilDone:(char)arg0;
- (void)invokeInvocation:(NSObject *)arg0;

@end
