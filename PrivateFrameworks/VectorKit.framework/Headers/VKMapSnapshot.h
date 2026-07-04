/* Runtime dump - VKMapSnapshot
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshot : NSObject
{
    struct CGImage * _image;
    unsigned long _width;
    unsigned long _height;
    float _scale;
    VKCamera * _camera;
}

@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) struct CGImage * image;

- (void)dealloc;
- (NSString *)description;
- (float)scale;
- (struct CGImage *)image;
- (UIImage *)_initWithImage:(struct CGImage *)arg0 scale:(float)arg1 camera:(VKCamera *)arg2;
- (NSString *)imageDataInFormat:(unsigned int)arg0;
- (struct CGPoint)pointForCoordinate:(struct ?)arg0;
- (struct ?)coordinateForPoint:(struct CGPoint)arg0;
- (char)writeImageToFile:(NSString *)arg0 format:(unsigned int)arg1 error:(id *)arg2;

@end
