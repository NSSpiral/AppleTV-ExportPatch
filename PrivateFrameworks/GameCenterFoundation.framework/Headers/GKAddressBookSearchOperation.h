/* Runtime dump - GKAddressBookSearchOperation
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate>
{
    NSMutableArray * _matches;
    id _handler;
}

@property (readonly, nonatomic) NSMutableArray * matches;
@property (copy, nonatomic) id handler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)searchOperation:(ABSearchOperation *)arg0 didFindMatches:(NSArray *)arg1 moreComing:(char)arg2;
- (void)dealloc;
- (GKAddressBookSearchOperation *)init;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (NSMutableArray *)matches;

@end
