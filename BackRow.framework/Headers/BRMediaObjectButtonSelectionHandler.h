/* Runtime dump - BRMediaObjectButtonSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface BRMediaObjectButtonSelectionHandler : NSObject <BRSelectionHandler>
{
    int _selectionType;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (void)setSelectionHandlerType:(int)arg0;
- (char)_handlePlaySelectionForControl:(BRControl *)arg0;
- (char)_handleStartDownloadSelectionForControl:(BRControl *)arg0;
- (BRMediaObjectButtonSelectionHandler *)init;

@end
