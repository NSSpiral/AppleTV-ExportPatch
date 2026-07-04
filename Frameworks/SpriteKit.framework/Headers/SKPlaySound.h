/* Runtime dump - SKPlaySound
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPlaySound : SKAction
{
    NSString * _filePath;
    struct SKCPlaySound * _mycaction;
    struct CGPoint _position;
    SKSoundSource * _soundSource;
}

+ (SKPlaySound *)playSoundFileNamed:(id)arg0 atPosition:(struct CGPoint)arg1 waitForCompletion:(char)arg2;

- (SCNAction *)reversedAction;
- (SKPlaySound *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKPlaySound *)init;
- (SKPlaySound *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
