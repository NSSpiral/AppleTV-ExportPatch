/* Runtime dump - MEYTControllerSectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTListSectionHandling;

@class BRControl, RUIYTHistoryManager;
@interface MEYTControllerSectionHandler : NSObject <RUIYTListSectionHandling>
{
    RUIYTHistoryManager * _historyManager;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)itemSelectedAtIndex:(NSIndexPath *)arg0 action:(int)arg1 defer:(char *)arg2;
- (NSObject *)_accountController;
- (BRControl *)itemForIndex:(NSIndexPath *)arg0;
- (MEYTControllerSectionHandler *)init;
- (void).cxx_destruct;

@end
