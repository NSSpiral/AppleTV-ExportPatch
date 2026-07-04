/* Runtime dump - SKSoundBuffer
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSoundBuffer : NSObject
{
    unsigned int _bufferId;
    NSString * _path;
    double _duration;
}

@property (readonly, nonatomic) unsigned int bufferId;
@property (readonly, nonatomic) double duration;

+ (SKSoundBuffer *)bufferWithFileNamed:(id)arg0;

- (unsigned int)bufferId;
- (void)dealloc;
- (SKSoundBuffer *)init;
- (NSString *)description;
- (double)duration;
- (void).cxx_destruct;

@end
