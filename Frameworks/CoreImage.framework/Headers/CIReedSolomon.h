/* Runtime dump - CIReedSolomon
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIReedSolomon : NSObject
{
    id _expTable;
    id _logTable;
    int _cachedGeneratorNum;
    int _memoryCapacity;
    struct ? * _cachedGenerators;
}

- (struct ? *)divide:(struct ? *)arg0 by:(struct ? *)arg1;
- (CIReedSolomon *)initReedSolomon;
- (char)encode:(int *)arg0 length:(int)arg1 bytes:(int)arg2;
- (char)fillPoly:(struct ? *)arg0 coefficients:(int *)arg1 length:(int)arg2;
- (void)clearPoly:(struct ? *)arg0;
- (char)isZero:(struct ?)arg0;
- (struct ? *)copyPoly:(struct ? *)arg0;
- (int)addOrSubtract:(int)arg0 with:(int)arg1;
- (int)multiply:(int)arg0 with:(int)arg1;
- (int)Degree:(struct ?)arg0;
- (int)polyCoefficient:(struct ? *)arg0 degree:(int)arg1;
- (int)inverse:(int)arg0;
- (struct ? *)multiplyByMonomial:(struct ? *)arg0 degree:(int)arg1 coefficient:(int)arg2;
- (struct ? *)addOrSubtractPoly:(struct ? *)arg0 with:(struct ? *)arg1;
- (int)Exp:(int)arg0;
- (struct ? *)multiplyPoly:(struct ? *)arg0 with:(struct ? *)arg1;
- (struct ? *)buildGenerator:(int)arg0;
- (struct ? *)createMonomial:(int)arg0 coefficient:(int)arg1;
- (int *)coefficients:(struct ?)arg0;
- (void)dealloc;

@end
