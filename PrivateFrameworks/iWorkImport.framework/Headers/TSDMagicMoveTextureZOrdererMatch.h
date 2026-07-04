/* Runtime dump - TSDMagicMoveTextureZOrdererMatch
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveTextureZOrdererMatch : NSObject
{
    char _isOutgoingZIndexUnmatched;
    char _isIncomingZIndexUnmatched;
    TSDTextureSet * _outgoingTexture;
    TSDTextureSet * _incomingTexture;
    int _outgoingZIndex;
    int _incomingZIndex;
    TSDMagicMoveAnimationMatch * _animationMatch;
}

@property (readonly, nonatomic) TSDTextureSet * outgoingTexture;
@property (readonly, nonatomic) TSDTextureSet * incomingTexture;
@property (nonatomic) int outgoingZIndex;
@property (nonatomic) int incomingZIndex;
@property (readonly, nonatomic) char isOutgoingZIndexUnmatched;
@property (readonly, nonatomic) char isIncomingZIndexUnmatched;
@property (readonly, nonatomic) TSDMagicMoveAnimationMatch * animationMatch;

- (TSDTextureSet *)incomingTexture;
- (TSDTextureSet *)outgoingTexture;
- (int)outgoingZIndex;
- (int)incomingZIndex;
- (TSDMagicMoveTextureZOrdererMatch *)initWithAnimationMatch:(TSDMagicMoveAnimationMatch *)arg0;
- (char)intersectsZOrdererMatch:(id)arg0 withAttemptedZIndex:(int)arg1;
- (char)intersectsZOrdererMatch:(id)arg0;
- (float)intersectionPercentWithZOrdererMatch:(id)arg0;
- (float)interpolatedZIndexAtPercent:(float)arg0;
- (void)setOutgoingZIndex:(int)arg0;
- (void)setIncomingZIndex:(int)arg0;
- (char)isOutgoingZIndexUnmatched;
- (char)isIncomingZIndexUnmatched;
- (TSDMagicMoveAnimationMatch *)animationMatch;
- (void)dealloc;
- (NSString *)description;

@end
