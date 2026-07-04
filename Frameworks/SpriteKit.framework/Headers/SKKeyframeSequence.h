/* Runtime dump - SKKeyframeSequence
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKKeyframeSequence : NSObject <NSCoding, NSCopying>
{
    unsigned int _count;
    NSMutableArray * _values;
    NSMutableArray * _times;
    int _interpolationMode;
    int _repeatMode;
    struct SKCKeyframeSequence * _cKeyframeSequence;
}

@property (nonatomic) int interpolationMode;
@property (nonatomic) int repeatMode;

- (SKKeyframeSequence *)initWithCount:(unsigned int)arg0;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (int)interpolationMode;
- (float)getKeyframeTimeForIndex:(unsigned int)arg0;
- (NSObject *)getKeyframeValueForIndex:(unsigned int)arg0;
- (SKKeyframeSequence *)initWithKeyframeValues:(MCAnimationKeyframe *)arg0 times:(NSMutableArray *)arg1;
- (void)setInterpolationMode:(int)arg0;
- (void)_dirtySKCKeyframeSequence;
- (void)setKeyframeValue:(id)arg0 forIndex:(unsigned int)arg1;
- (void)setKeyframeTime:(float)arg0 forIndex:(unsigned int)arg1;
- (struct SKCKeyframeSequence *)_createSKCKeyframeSequence;
- (Class)_valueClass;
- (void)addKeyframeValue:(id)arg0 time:(float)arg1;
- (void)removeLastKeyframe;
- (void)removeKeyframeAtIndex:(unsigned int)arg0;
- (void)setKeyframeValue:(id)arg0 time:(float)arg1 forIndex:(unsigned int)arg2;
- (id)sampleAtTime:(float)arg0;
- (SKKeyframeSequence *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (SKKeyframeSequence *)copy;
- (SKKeyframeSequence *)initWithCapacity:(unsigned int)arg0;
- (SKKeyframeSequence *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)removeAllKeyframes;

@end
