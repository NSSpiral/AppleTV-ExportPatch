/* Runtime dump - CUIPSDLayer
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayer : NSObject
{
    float _opacity;
    int _blendMode;
    NSString * _name;
}

@property (nonatomic) float opacity;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) NSString * name;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (CUIPSDLayer *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (float)opacity;
- (void)setOpacity:(float)arg0;

@end
