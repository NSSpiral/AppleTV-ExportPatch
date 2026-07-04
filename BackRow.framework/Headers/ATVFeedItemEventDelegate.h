/* Runtime dump - ATVFeedItemEventDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BREventDelegate;
@protocol BRSelectionHandler;

@class BRControl, BREvent, BRMerchant;
@interface ATVFeedItemEventDelegate : NSObject <BREventDelegate, BRSelectionHandler>
{
    NSDictionary * _eventDictionary;
    BRMerchant * _merchant;
}

@property (retain) BRMerchant * merchant;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFeedItemEventDelegate *)feedItemDelegateWithEventHandlers:(NSString *)arg0;

- (BRMerchant *)merchant;
- (void)setMerchant:(BRMerchant *)arg0;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (char)brEventAction:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (char)brKeyEvent:(BREvent *)arg0 withControl:(BRControl *)arg1;
- (NSDictionary *)_initWithEventDictionary:(NSDictionary *)arg0;
- (void)dealloc;

@end
