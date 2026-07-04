/* Runtime dump - BBNotificationBehaviorFavoritesListDelegate
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBNotificationBehaviorFavoritesListDelegate : NSObject <ABPredicateDelegate>
{
    id _handlerBlock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)predicateShouldContinue:(id)arg0;
- (char)predicateShouldContinue:(id)arg0 afterFindingRecord:(void *)arg1;
- (void)dealloc;
- (BBNotificationBehaviorFavoritesListDelegate *)initWithHandlerBlock:(id /* block */)arg0;

@end
