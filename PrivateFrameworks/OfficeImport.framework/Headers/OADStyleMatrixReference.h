/* Runtime dump - OADStyleMatrixReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStyleMatrixReference : NSObject <NSCopying>
{
    unsigned long mMatrixIndex;
    OADColor * mColor;
}

+ (NSObject *)styleMatrixReferenceWithMatrixIndex:(unsigned long)arg0 color:(UIColor *)arg1;

- (void)dealloc;
- (OADStyleMatrixReference *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void)setMatrixIndex:(unsigned long)arg0;
- (unsigned long)matrixIndex;
- (OADStyleMatrixReference *)initWithMatrixIndex:(unsigned long)arg0 color:(UIColor *)arg1;
- (void)applyToStrokeInProperties:(NSDictionary *)arg0 styleMatrix:(OADStyleMatrix *)arg1;
- (void)applyToFillInProperties:(NSDictionary *)arg0 styleMatrix:(OADStyleMatrix *)arg1;
- (void)applyToEffectsInProperties:(NSDictionary *)arg0 styleMatrix:(OADStyleMatrix *)arg1;

@end
