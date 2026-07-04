/* Runtime dump - BLRetouchLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchLayer : NSObject
{
    char _enabled;
    int _brushType;
    BLRetouchLayer * _layerBelow;
    BLBaseLayerStack * _layerStack;
}

@property (readonly, nonatomic) struct CGSize imageSize;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) char hasLayerMask;
@property (nonatomic) NSData * layerData;
@property (nonatomic) int brushType;
@property (nonatomic) BLRetouchLayer * layerBelow;
@property (nonatomic) BLBaseLayerStack * layerStack;

+ (CALayer *)layer;

- (char)boolForKey:(NSString *)arg0;
- (BLRetouchLayer *)init;
- (void)setEnabled:(char)arg0;
- (struct CGSize)imageSize;
- (char)enabled;
- (char)hasLayerMask;
- (void)setLayerStack:(BLBaseLayerStack *)arg0;
- (BLBaseLayerStack *)layerStack;
- (struct CGImage *)newImageForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (BLRetouchLayer *)layerBelow;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (NSData *)layerData;
- (void)setLayerData:(NSData *)arg0;
- (int)brushType;
- (void)setBrushType:(int)arg0;
- (void)setLayerBelow:(BLRetouchLayer *)arg0;

@end
