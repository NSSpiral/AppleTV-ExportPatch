/* Runtime dump - BRPhotoControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface BRPhotoControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>
{
    <BRSelectionHandler> * _selectionHandler;
    NSDateFormatter * _formatter;
    char _useMinimumImages;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRPhotoControlFactory *)standardFactory;

- (void)setSelectionHandler:(<BRSelectionHandler> *)arg0;
- (<BRSelectionHandler> *)selectionHandler;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (NSData *)_menuItemForData:(NSData *)arg0;
- (NSData *)_gridItemForData:(NSData *)arg0;
- (NSData *)_cyclerItemForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (NSData *)_previewControlForData:(NSData *)arg0;
- (NSData *)_shelfItemForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (void)setUseMinimumImages:(char)arg0;
- (char)useMinumumImages;
- (void)_decorateControlWithPlayIcon:(UIImage *)arg0 forMediaObject:(NSObject *)arg1;
- (NSData *)_cyclerForData:(NSData *)arg0;
- (id)_subtitleForCollection:(id)arg0;
- (NSDateFormatter *)formatter;
- (void)dealloc;

@end
