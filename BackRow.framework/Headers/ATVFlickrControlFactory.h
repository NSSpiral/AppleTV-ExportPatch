/* Runtime dump - ATVFlickrControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoControlFactory.h>

@class BRControl;
@interface ATVFlickrControlFactory : BRPhotoControlFactory

+ (<BRControlFactory> *)controlFactory;

- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (NSData *)_menuItemForFlickrData:(NSData *)arg0;
- (NSData *)_previewControlForFlickrData:(NSData *)arg0;

@end
