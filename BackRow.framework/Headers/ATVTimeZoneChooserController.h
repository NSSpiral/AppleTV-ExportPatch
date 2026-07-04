/* Runtime dump - ATVTimeZoneChooserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSearchController.h>

@protocol BRControlFactory;
@protocol BRProvider;
@protocol BRSelectionHandler;

@class BRControl;
@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler>
{
    NSArray * _matchedCities;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)wasPushed;
- (void)wasPopped;
- (long)dataCount;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (void)_runInitialSearch;
- (void)setMatchedCities:(NSArray *)arg0;
- (ATVTimeZoneChooserController *)init;
- (void).cxx_destruct;
- (NSObject *)dataAtIndex:(long)arg0;

@end
