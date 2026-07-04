/* Runtime dump - BRMainMenuSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface BRMainMenuSelectionHandler : NSObject <BRSelectionHandler>
{
    <BRSelectionHandler> * _handler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRMainMenuSelectionHandler *)handlerWithHandler:(<BRSelectionHandler> *)arg0;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (void)dealloc;
- (BRMainMenuSelectionHandler *)initWithHandler:(<BRSelectionHandler> *)arg0;

@end
