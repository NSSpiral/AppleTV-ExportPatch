/* Runtime dump - TSKThreadDispatcher
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKThreadDispatcher : NSObject

+ (TSKThreadDispatcher *)sharedInstance;

- (NSOperationQueue *)p_dispatchQueue;
- (void)dispatchSelector:(SEL)arg0 target:(NSObject *)arg1 argument:(void *)arg2;
- (void)dispatch:(VKDispatch *)arg0;

@end
