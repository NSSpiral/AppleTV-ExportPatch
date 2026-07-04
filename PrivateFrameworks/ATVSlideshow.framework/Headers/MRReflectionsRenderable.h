/* Runtime dump - MRReflectionsRenderable
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRReflectionsRenderable : MUPoolObject
{
    MRImage * _slide;
    MRCroppingSprite * _sprite;
    id _modelViewMatrix;
    struct CGPoint position;
    struct CGSize size;
    char isShadow;
    MRReflectionsRenderable * next;
    char needsFlipped;
    char isBreak;
}

+ (struct ? *)poolInfo;

- (void)dealloc;
- (void)purge;
- (MRReflectionsRenderable *)initWithSlide:(MRImage *)arg0 sprite:(MRCroppingSprite *)arg1 modelViewMatrix:(float *)arg2 position:(float)arg3 size:(struct CGPoint)arg4 flipped:(struct CGSize)arg5 isShadow:(char)arg6 isBreak:(char)arg7;

@end
