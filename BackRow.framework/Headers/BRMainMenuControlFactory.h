/* Runtime dump - BRMainMenuControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;

@class BRControl;
@interface BRMainMenuControlFactory : NSObject <BRControlFactory>
{
    <BRSelectionHandler> * _selectionHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRMainMenuControlFactory *)factory;

- (void)setSelectionHandler:(<BRSelectionHandler> *)arg0;
- (<BRSelectionHandler> *)selectionHandler;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSSet *)_posterControlForAsset:(NSSet *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (id)_posterControlForCollection:(id)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (NSObject *)_posterControlForMediaItem:(NSObject *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (void)dealloc;

@end
