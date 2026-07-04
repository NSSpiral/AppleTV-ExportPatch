/* Runtime dump - SBFSubject
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFSubject : SBFObservable <SBFObserver>
{
    NSMutableArray * _observers;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SBFSubject *)init;
- (NSMutableArray *)_observers;
- (void)observerDidReceiveResult:(NSObject *)arg0;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(NSError *)arg0;
- (id)subscribe:(id)arg0;

@end
