/* Runtime dump - BRScrollingTextControlSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl, BRScrollingTextControl;
@interface BRScrollingTextControlSelectionHandler : NSObject <BRSelectionHandler>
{
    BRScrollingTextControl * _control;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (void)setControl:(BRScrollingTextControl *)arg0;

@end
