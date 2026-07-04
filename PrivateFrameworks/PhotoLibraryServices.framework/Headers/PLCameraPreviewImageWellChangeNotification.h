/* Runtime dump - PLCameraPreviewImageWellChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification
{
    UIImage * _image;
    NSString * _uuid;
}

@property (readonly, retain, nonatomic) UIImage * image;
@property (readonly, retain, nonatomic) NSString * assetUUID;

+ (NSNotification *)notification;

- (void)dealloc;
- (PLCameraPreviewImageWellChangeNotification *)init;
- (NSString *)description;
- (NSString *)name;
- (PLCameraPreviewImageWellChangeNotification *)_init;
- (UIImage *)image;
- (NSDictionary *)userInfo;
- (NSObject *)object;
- (NSString *)assetUUID;

@end
