/* Runtime dump - RUIYTRelatedVideosControllerSectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTListSectionHandling;

@class BRControl, RUIYTRelatedVideosSubMenuController;
@interface RUIYTRelatedVideosControllerSectionHandler : NSObject <RUIYTListSectionHandling>
{
    RUIYTRelatedVideosSubMenuController * _relatedVideosController;
}

@property (readonly, weak) RUIYTRelatedVideosSubMenuController * relatedVideosController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)itemSelectedAtIndex:(NSIndexPath *)arg0 action:(int)arg1 defer:(char *)arg2;
- (RUIYTRelatedVideosControllerSectionHandler *)initWithRelatedVideosController:(RUIYTRelatedVideosSubMenuController *)arg0;
- (RUIYTRelatedVideosSubMenuController *)relatedVideosController;
- (BRControl *)itemForIndex:(NSIndexPath *)arg0;
- (void).cxx_destruct;

@end
