/* Runtime dump - OADGradientFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGradientFill : OADFill
{
    NSMutableArray * mStops;
    char mAreStopsOverridden;
    OADRelativeRect * mTileRect;
    char mIsTileRectOverridden;
    int mFlipMode;
    char mIsFlipModeOverridden;
    char mRotateWithShape;
    char mIsRotateWithShapeOverridden;
    OADShade * mShade;
    char mIsShadeOverridden;
}

+ (OADGradientFill *)defaultProperties;
+ (OADGradientFill *)stringForTileFlipMode:(int)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADGradientFill *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)stopCount;
- (NSObject *)stopColorAtIndex:(unsigned int)arg0;
- (OADPathShade *)shade;
- (void)setRotateWithShape:(char)arg0;
- (void)addStopColor:(UIColor *)arg0 position:(float)arg1;
- (void)setFlipMode:(int)arg0;
- (void)setTileRect:(NSObject *)arg0;
- (void)setShade:(OADPathShade *)arg0;
- (void)setStyleColor:(UIColor *)arg0;
- (void)clearStops;
- (char)isTileRectOverridden;
- (char)isFlipModeOverridden;
- (char)isRotateWithShapeOverridden;
- (char)isShadeOverridden;
- (float)stopPositionAtIndex:(unsigned int)arg0;
- (void)sortStops;
- (NSObject *)tileRect;
- (int)flipMode;
- (char)rotateWithShape;
- (OADGradientFill *)initWithDefaults;
- (void)setStops:(id)arg0;
- (char)areStopsOverridden;
- (id)stops;
- (void)setParent:(NSObject *)arg0;

@end
