/* Runtime dump - ODILinear
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODILinear : NSObject
{
    char mIsHorizontal;
    char mWithConnectors;
    char mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    char mIsTextCenteredHorizontally;
    char mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState * mState;
}

+ (char)mapIdentifier:(NSString *)arg0 state:(NSObject *)arg1;
+ (void)mapUnknownWithState:(NSObject *)arg0;

- (void)setPadding:(float)arg0;
- (void)setIsHorizontal:(char)arg0;
- (ODILinear *)initWithState:(NSObject *)arg0;
- (void)setWithConnectors:(char)arg0;
- (void)setPointHeight:(float)arg0;
- (void)setStretch:(char)arg0;
- (void)setConnectorWidth:(float)arg0;
- (void)setIsTextCentered:(char)arg0;
- (void)setMaxPointCount:(unsigned int)arg0;
- (void)setIsTextCenteredHorizontally:(char)arg0;
- (void)setIsTextCenteredVertically:(char)arg0;
- (void)setLogicalBounds;
- (void)mapPoint:(NSObject *)arg0 bounds:(struct CGRect)arg1;
- (void)mapTransition:(NSObject *)arg0 pointBounds:(struct CGRect)arg1;
- (void)nextPointBounds:(struct CGRect *)arg0;
- (void)mapStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)mapStyleFromTransition:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)map;

@end
