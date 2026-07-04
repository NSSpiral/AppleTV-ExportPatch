/* Runtime dump - SKUniformInfo
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKUniformInfo : NSObject
{
    unsigned int seed;
    unsigned int textureTarget;
    SKUniform * uniform;
}

@property unsigned int seed;
@property unsigned int textureTarget;
@property (retain) SKUniform * uniform;

- (void)setSeed:(unsigned int)arg0;
- (unsigned int)textureTarget;
- (void)setTextureTarget:(unsigned int)arg0;
- (SKUniform *)uniform;
- (void)setUniform:(SKUniform *)arg0;
- (SKUniformInfo *)init;
- (unsigned int)seed;
- (void).cxx_destruct;

@end
