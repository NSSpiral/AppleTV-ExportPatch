/* Runtime dump - SBSCardItemsController
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface>
{
    NSString * _identifier;
    NSXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SBSCardItemsController *)initWithIdentifier:(NSString *)arg0;
- (void)addCardItems:(NSArray *)arg0;
- (void)removeCardItems:(NSArray *)arg0;
- (void)setCardItems:(NSArray *)arg0;
- (void)clearAllCardItems;
- (void)getCardItemsWithHandler:(id /* block */)arg0;

@end
