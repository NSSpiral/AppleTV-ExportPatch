/* Runtime dump - RUIYTHistoryControllerSectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTListSectionHandling;

@class BRControl, RUIYTHistoryController;
@interface RUIYTHistoryControllerSectionHandler : NSObject <RUIYTListSectionHandling>
{
    RUIYTHistoryController * _historyController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)itemSelectedAtIndex:(NSIndexPath *)arg0 action:(int)arg1 defer:(char *)arg2;
- (RUIYTHistoryControllerSectionHandler *)initWithHistoryController:(RUIYTHistoryController *)arg0;
- (BRControl *)itemForIndex:(NSIndexPath *)arg0;
- (void).cxx_destruct;

@end
