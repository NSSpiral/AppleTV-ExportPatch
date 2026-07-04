/* Runtime dump - BRPhotoBrowserControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface BRPhotoBrowserControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>
{
    <BRSelectionHandler> * _handler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setSelectionHandler:(<BRSelectionHandler> *)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (void)dealloc;

@end
