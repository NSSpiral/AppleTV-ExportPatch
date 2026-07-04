/* Runtime dump - ICDeviceBrowser
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

@property <ICDeviceBrowserDelegate> * delegate;
@property (readonly) char browsing;
@property (readonly) NSArray * devices;

- (char)isBrowsing;
- (void)dealloc;
- (void)setDelegate:(<ICDeviceBrowserDelegate> *)arg0;
- (ICDeviceBrowser *)init;
- (<ICDeviceBrowserDelegate> *)delegate;
- (void)stop;
- (int)start;
- (NSArray *)devices;
- (NSMutableArray *)internalDevices;
- (void)finalize;

@end
