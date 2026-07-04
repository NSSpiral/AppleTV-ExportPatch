/* Runtime dump - DOMWebKitCSSMatrix
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWebKitCSSMatrix : DOMObject

@property double a;
@property double b;
@property double c;
@property double d;
@property double e;
@property double f;
@property double m11;
@property double m12;
@property double m13;
@property double m14;
@property double m21;
@property double m22;
@property double m23;
@property double m24;
@property double m31;
@property double m32;
@property double m33;
@property double m34;
@property double m41;
@property double m42;
@property double m43;
@property double m44;

- (void)dealloc;
- (void)finalize;
- (NSString *)toString;
- (double)a;
- (void)setA:(double)arg0;
- (double)b;
- (void)setB:(double)arg0;
- (double)c;
- (void)setC:(double)arg0;
- (double)d;
- (void)setD:(double)arg0;
- (double)e;
- (void)setE:(double)arg0;
- (double)f;
- (void)setF:(double)arg0;
- (double)m11;
- (void)setM11:(double)arg0;
- (double)m12;
- (void)setM12:(double)arg0;
- (double)m13;
- (void)setM13:(double)arg0;
- (double)m14;
- (void)setM14:(double)arg0;
- (double)m21;
- (void)setM21:(double)arg0;
- (double)m22;
- (void)setM22:(double)arg0;
- (double)m23;
- (void)setM23:(double)arg0;
- (double)m24;
- (void)setM24:(double)arg0;
- (double)m31;
- (void)setM31:(double)arg0;
- (double)m32;
- (void)setM32:(double)arg0;
- (double)m33;
- (void)setM33:(double)arg0;
- (double)m34;
- (void)setM34:(double)arg0;
- (double)m41;
- (void)setM41:(double)arg0;
- (double)m42;
- (void)setM42:(double)arg0;
- (double)m43;
- (void)setM43:(double)arg0;
- (double)m44;
- (void)setM44:(double)arg0;
- (void)setMatrixValue:(id)arg0;
- (id)multiply:(SCNMaterialProperty *)arg0;
- (NSSQLRelationship *)inverse;
- (id)translate:(double)arg0 y:(double)arg1 z:(double)arg2;
- (id)scale:(double)arg0 scaleY:(double)arg1 scaleZ:(double)arg2;
- (id)rotate:(double)arg0 rotY:(double)arg1 rotZ:(double)arg2;
- (id)rotateAxisAngle:(double)arg0 y:(double)arg1 z:(double)arg2 angle:(double)arg3;
- (id)skewX:(double)arg0;
- (id)skewY:(double)arg0;

@end
