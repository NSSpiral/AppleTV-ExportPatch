/* Runtime dump - PTSImageSettings
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver>
{
    char _unarchiving;
    UIImage * _image;
    NSData * _pngData;
    int _imageOrientation;
    float _imageScale;
}

@property (retain) UIImage * image;
@property (retain) NSData * pngData;
@property int imageOrientation;
@property float imageScale;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (PTSImageSettings *)init;
- (int)imageOrientation;
- (UIImage *)image;
- (void)applyArchiveValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)archiveValueForKey:(NSString *)arg0;
- (void)settings:(NSDictionary *)arg0 changedValueForKey:(NSString *)arg1;
- (void).cxx_destruct;
- (void)_updateImageData;
- (void)setImageScale:(float)arg0;
- (void)setImageOrientation:(int)arg0;
- (NSData *)pngData;
- (void)_updateImageProperties;
- (void)setPngData:(NSData *)arg0;
- (float)imageScale;

@end
