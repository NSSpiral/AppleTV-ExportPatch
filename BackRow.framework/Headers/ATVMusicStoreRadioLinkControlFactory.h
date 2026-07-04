/* Runtime dump - ATVMusicStoreRadioLinkControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;

@class BRControl;
@interface ATVMusicStoreRadioLinkControlFactory : NSObject <BRControlFactory>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSObject *)_textItemFromItem:(NSObject *)arg0;
- (NSObject *)_previewForItem:(NSObject *)arg0;

@end
