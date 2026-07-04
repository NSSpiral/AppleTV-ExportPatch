/* Runtime dump - TSWPHeaderRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHeaderRep : TSWPRep
{
    float _leftClip;
    float _rightClip;
}

@property (nonatomic) float leftClip;
@property (nonatomic) float rightClip;

- (float)leftClip;
- (void)setLeftClip:(float)arg0;
- (float)rightClip;
- (void)setRightClip:(float)arg0;

@end
