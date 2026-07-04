/* Runtime dump - RUIYTAccountFeaturesCustomSectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTListSectionHandling;

@class BRControl, RUIYTAccountFeaturesController;
@interface RUIYTAccountFeaturesCustomSectionHandler : NSObject <RUIYTListSectionHandling>
{
    RUIYTAccountFeaturesController * _accountFeaturesController;
}

@property (readonly, weak) RUIYTAccountFeaturesController * accountFeaturesController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)itemSelectedAtIndex:(NSIndexPath *)arg0 action:(int)arg1 defer:(char *)arg2;
- (NSString *)itemIDForIndex:(NSIndexPath *)arg0;
- (RUIYTAccountFeaturesCustomSectionHandler *)initWithAccountFeaturesController:(RUIYTAccountFeaturesController *)arg0;
- (RUIYTAccountFeaturesController *)accountFeaturesController;
- (BRControl *)itemForIndex:(NSIndexPath *)arg0;
- (void).cxx_destruct;

@end
