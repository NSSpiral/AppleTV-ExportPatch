/* Runtime dump - OADShapeStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShapeStyle : NSObject <NSCopying>
{
    OADStyleMatrixReference * mLineReference;
    OADStyleMatrixReference * mFillReference;
    OADStyleMatrixReference * mEffectReference;
    OADFontReference * mFontReference;
}

- (void)dealloc;
- (OADShapeStyle *)copyWithZone:(struct _NSZone *)arg0;
- (void)applyToGraphicProperties:(NSDictionary *)arg0 styleMatrix:(OADStyleMatrix *)arg1;
- (void)applyToTextBody:(NSObject *)arg0;
- (void)setLineReference:(NSObject *)arg0;
- (void)setFillReference:(NSObject *)arg0;
- (void)setEffectReference:(NSObject *)arg0;
- (void)setFontReference:(NSObject *)arg0;
- (void)applyToTextListStyle:(NSObject *)arg0;
- (void)applyToGraphicProperties:(NSDictionary *)arg0 styleMatrix:(OADStyleMatrix *)arg1 useNull:(char)arg2 strokeWidthMultiplier:(float)arg3;
- (void)applyToParagraphProperties:(NSDictionary *)arg0;
- (NSObject *)lineReference;
- (void)setLineMatrixIndex:(unsigned long)arg0 color:(UIColor *)arg1;
- (NSObject *)fillReference;
- (void)setFillMatrixIndex:(unsigned long)arg0 color:(UIColor *)arg1;
- (NSObject *)effectReference;
- (void)setEffectMatrixIndex:(unsigned long)arg0 color:(UIColor *)arg1;
- (NSObject *)fontReference;

@end
