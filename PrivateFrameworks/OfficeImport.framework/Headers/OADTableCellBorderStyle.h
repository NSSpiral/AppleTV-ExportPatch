/* Runtime dump - OADTableCellBorderStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableCellBorderStyle : NSObject
{
    OADStroke * mLeftStroke;
    OADStroke * mRightStroke;
    OADStroke * mTopStroke;
    OADStroke * mBottomStroke;
    OADStroke * mHorzInsideStroke;
    OADStroke * mVertInsideStroke;
    OADStroke * mTopLeftToBottomRightStroke;
    OADStroke * mBottomLeftToTopRightStroke;
}

+ (OADTableCellBorderStyle *)defaultAxisParallelStroke;
+ (OADTableCellBorderStyle *)defaultObliqueStroke;
+ (OADTableCellBorderStyle *)defaultStyle;

- (void)dealloc;
- (TSDStroke *)topStroke;
- (id)horzInsideStroke;
- (TSDStroke *)bottomStroke;
- (TSDStroke *)leftStroke;
- (id)vertInsideStroke;
- (TSDStroke *)rightStroke;
- (void)setLeftStroke:(TSDStroke *)arg0;
- (void)setRightStroke:(TSDStroke *)arg0;
- (void)setTopStroke:(TSDStroke *)arg0;
- (void)setBottomStroke:(TSDStroke *)arg0;
- (void)setHorzInsideStroke:(id)arg0;
- (void)setVertInsideStroke:(id)arg0;
- (void)setTopLeftToBottomRightStroke:(id)arg0;
- (void)setBottomLeftToTopRightStroke:(id)arg0;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (id)stroke:(int)arg0;
- (NSObject *)shallowCopy;
- (void)applyOverridesFrom:(NSObject *)arg0;

@end
