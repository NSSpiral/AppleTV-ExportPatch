/* Runtime dump - TSDMagicMoveAnimationMatch
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveAnimationMatch : NSObject
{
    TSDTextureSet * _morphTexture;
    TSDTextureSet * _morphQueuedTexture;
    TSDTextureSet * _morphQueuedForDeletionTexture;
    NSLock * _morphTextureUpdateLock;
    char _isUsingMorphTexture;
    char _didUseMorphTexture;
    char _hasBeenTornDown;
    char _isMorphMatch;
    char _isTextStyleIdenticalExceptSize;
    char _shouldDisableTextMorphing;
    TSDTextureSet * _outgoingTexture;
    TSDTextureSet * _incomingTexture;
    int _matchType;
    float _outgoingTextureActionBuildFinalAngle;
}

@property (retain, nonatomic) TSDTextureSet * outgoingTexture;
@property (retain, nonatomic) TSDTextureSet * incomingTexture;
@property (nonatomic) char isMorphMatch;
@property (readonly, nonatomic) char isMatched;
@property (nonatomic) char isTextStyleIdenticalExceptSize;
@property (nonatomic) char shouldDisableTextMorphing;
@property (nonatomic) int matchType;
@property (nonatomic) float outgoingTextureActionBuildFinalAngle;

+ (unsigned int)magicMoveMorphTexturesPerSecond;

- (void)setOutgoingTexture:(TSDTextureSet *)arg0;
- (void)setIncomingTexture:(TSDTextureSet *)arg0;
- (char)isMorphMatch;
- (char)isMatched;
- (TSDTextureSet *)incomingTexture;
- (TSDTextureSet *)outgoingTexture;
- (TSDMagicMoveAnimationMatch *)initWithMatchType:(int)arg0 outgoingTexture:(TSDTextureSet *)arg1 incomingTexture:(TSDTextureSet *)arg2;
- (void)addMorphTexture:(NSObject *)arg0;
- (NSObject *)lockCurrentMorphTexture;
- (void)unlockCurrentMorphTexture;
- (void)setIsMorphMatch:(char)arg0;
- (char)isTextStyleIdenticalExceptSize;
- (void)setIsTextStyleIdenticalExceptSize:(char)arg0;
- (char)shouldDisableTextMorphing;
- (void)setShouldDisableTextMorphing:(char)arg0;
- (float)outgoingTextureActionBuildFinalAngle;
- (void)setOutgoingTextureActionBuildFinalAngle:(float)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setMatchType:(int)arg0;
- (void)teardown;
- (int)matchType;

@end
