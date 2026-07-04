/* Runtime dump - Cube
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface Cube : NSObject
{
    MRImage * _sourceImage;
    MRImage * _destinationImage;
    id _textureCoords;
    id _sourceTriangleTextures;
    id _destinationTriangleTextures;
    int _xIndex;
    int _yIndex;
    int _matrixWidth;
    int _matrixHeight;
    float _localAspectRatio;
    char _animateCube;
    char _cubeReadyForAnimation;
    int _flipDirection;
    id _rps;
    id _position;
    id _rotation;
    id _scale;
}

@property (retain, nonatomic) MRImage * sourceImage;
@property (retain, nonatomic) MRImage * destinationImage;

+ (void)initialize;

- (void)dealloc;
- (Cube *)init;
- (void)setSourceImage:(MRImage *)arg0;
- (void)setDestinationImage:(MRImage *)arg0;
- (void)setupTextureInformation:(int)arg0;
- (void)updateRotations:(double)arg0 rotateHorizontally:(char)arg1;
- (void)draw:(id)arg0 withArguments:(NSDictionary *)arg1;
- (MRImage *)sourceImage;
- (MRImage *)destinationImage;

@end
