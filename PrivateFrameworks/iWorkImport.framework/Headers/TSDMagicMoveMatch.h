/* Runtime dump - TSDMagicMoveMatch
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch>
{
    TSDMagicMoveMatchObject * _outgoingObject;
    TSDMagicMoveMatchObject * _incomingObject;
    int _matchType;
    float _distance;
    float _zOrderDistance;
    float _attributeMatchPercent;
    TSDTextureContext * _textureContext;
    int _matchCost;
    NSString * _name;
}

@property (readonly, nonatomic) TSDMagicMoveMatchObject * outgoingObject;
@property (readonly, nonatomic) TSDMagicMoveMatchObject * incomingObject;
@property (nonatomic) int matchType;
@property (nonatomic) float distance;
@property (nonatomic) float zOrderDistance;
@property (nonatomic) float attributeMatchPercent;
@property (retain, nonatomic) TSDTextureContext * textureContext;
@property (readonly, nonatomic) int matchCost;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char isTextMatch;
@property (readonly, nonatomic) id incomingMatchObject;
@property (readonly, nonatomic) id outgoingMatchObject;

+ (NSObject *)matchWithOutgoingObject:(TSDMagicMoveMatchObject *)arg0 incomingObject:(TSDMagicMoveMatchObject *)arg1 matchType:(int)arg2 attributeMatchPercent:(float)arg3 textureContext:(TSDTextureContext *)arg4;

- (void)setTextureContext:(TSDTextureContext *)arg0;
- (TSDTextureContext *)textureContext;
- (TSDMagicMoveMatchObject *)outgoingObject;
- (TSDMagicMoveMatchObject *)incomingObject;
- (void)p_updateMagicMoveCost;
- (void)setAttributeMatchPercent:(float)arg0;
- (void)setZOrderDistance:(float)arg0;
- (int)matchCost;
- (float)attributeMatchPercent;
- (float)zOrderDistance;
- (int)compareToMatch:(id)arg0;
- (char)conflictsWithMatch:(id)arg0;
- (NSObject *)incomingMatchObject;
- (NSObject *)outgoingMatchObject;
- (char)isTextMatch;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setMatchType:(int)arg0;
- (void)setDistance:(float)arg0;
- (float)distance;
- (int)matchType;

@end
