/* Runtime dump - ICDeviceBrowserPrivateData
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceBrowserPrivateData : NSObject
{
    id _delegate;
    char _browsing;
    NSMutableArray * _internalDevices;
}

@property id delegate;
@property char browsing;
@property (retain) NSMutableArray * internalDevices;

- (void)setBrowsing:(char)arg0;
- (char)isBrowsing;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)setInternalDevices:(NSMutableArray *)arg0;
- (NSMutableArray *)internalDevices;
- (void)finalize;

@end
