/* Runtime dump - ATVMusicStoreScreenshotSelectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface ATVMusicStoreScreenshotSelectionHandler : NSObject <BRSelectionHandler>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVMusicStoreScreenshotSelectionHandler *)sharedInstance;

- (char)handleSelectionForControl:(BRControl *)arg0;

@end
