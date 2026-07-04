/* Runtime dump - EKSocialURLSearchDelegate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSocialURLSearchDelegate : NSObject <ABSearchOperationDelegate>
{
    id _searchCompleteHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_completeWithRecord:(void *)arg0;
- (void)searchOperation:(NSObject *)arg0 didFindMatches:(id)arg1 moreComing:(char)arg2;
- (void)dealloc;
- (void)setCompletionHandler:(id /* block */)arg0;

@end
