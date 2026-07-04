/* Runtime dump - SBFObserver
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFObserver : NSObject

+ (void)sendArray:(NSArray *)arg0 error:(NSError *)arg1 toObserver:(NSObject *)arg2;
+ (SBFObserver *)observerWithResultBlock:(id /* block */)arg0;
+ (SBFObserver *)observerWithResultBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1 failureBlock:(id /* block */)arg2;
+ (void)sendObserver:(NSObject *)arg0 resultsOfBlock:(id /* block */)arg1;

@end
