/* Runtime dump - CHDLine2DType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLine2DType : CHDLineType
{
    BOOL mShowMarker;
    BOOL mStockType;
}

- (CHDLine2DType *)initWithChart:(GQHChart *)arg0;
- (BOOL)showMarker;
- (void)setShowMarker:(BOOL)arg0;
- (BOOL)isStockType;
- (void)setStockType:(BOOL)arg0;

@end
