/* Runtime dump - SBFObservable
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFObservable : NSObject <SBFObservable>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SBFObservable *)observableWithBlock:(id /* block */)arg0;
+ (SBFObservable *)forkJoin:(id)arg0;

- (id)subscribe:(id)arg0;
- (id)throttle:(double)arg0 onScheduler:(_SBFImmediateScheduler *)arg1;
- (id)generate:(id)arg0;
- (id)observeOn:(id)arg0;
- (id)subscribeWithResultBlock:(id /* block */)arg0;
- (NSArray *)waitForResults:(id *)arg0;
- (id)subscribeWithResultBlock:(id /* block */)arg0 completionBlock:(/* block */ id)arg1 failureBlock:(id /* block */)arg2;
- (NSObject *)map:(NSObject *)arg0;
- (id)subscribeOn:(id)arg0;

@end
