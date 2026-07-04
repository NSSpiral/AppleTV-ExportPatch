/* Runtime dump - SCNText
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNText : SCNGeometry
{
    id _reserved;
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    struct UIBezierPath * _chamferProfile;
    int _primitiveType;
    id _string;
    UIFont * _font;
    char _wrapped;
    long _alignmentMode;
    long _truncationMode;
    char _useCustomContainerFrame;
    struct CGRect _customContainerFrame;
    char __wantsSeparateGeometryElements;
}

@property (nonatomic) float extrusionDepth;
@property (copy, nonatomic) id string;
@property (retain, nonatomic) UIFont * font;
@property (nonatomic) char wrapped;
@property (nonatomic) struct CGRect containerFrame;
@property (copy, nonatomic) NSString * truncationMode;
@property (copy, nonatomic) NSString * alignmentMode;
@property (nonatomic) float chamferRadius;
@property (copy, nonatomic) UIBezierPath * chamferProfile;
@property (nonatomic) float flatness;

+ (NSObject *)SCNJSExportProtocol;
+ (NSString *)textWithString:(NSString *)arg0 extrusionDepth:(float)arg1;
+ (NSString *)text;
+ (char)supportsSecureCoding;

- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(void *)arg0;
- (NSObject *)presentationGeometry;
- (char)getBoundingBoxMin:(struct SCNVector3 *)arg0 max:(struct SCNVector3 *)arg1;
- (char)getBoundingSphereCenter:(struct SCNVector3 *)arg0 radius:(float *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)setPrimitiveType:(int)arg0;
- (void)_syncObjCModel:(struct __C3DTextGeometry *)arg0;
- (void)setChamferRadius:(float)arg0;
- (float)chamferRadius;
- (SCNText *)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry *)arg0;
- (void)setExtrusionDepth:(float)arg0;
- (float)extrusionDepth;
- (char)isWrapped;
- (void)setWrapped:(char)arg0;
- (struct CGRect)containerFrame;
- (void)setContainerFrame:(struct CGRect)arg0;
- (NSString *)truncationMode;
- (void)setTruncationMode:(NSString *)arg0;
- (NSString *)alignmentMode;
- (struct UIBezierPath *)chamferProfile;
- (void)setChamferProfile:(struct UIBezierPath *)arg0;
- (SCNText *)initWithTextGeometryRef:(struct __C3DTextGeometry *)arg0;
- (struct ?)params;
- (void)_customEncodingOfSCNText:(NSString *)arg0;
- (void)_customDecodingOfSCNText:(NSString *)arg0;
- (void)setDiscretizedStraightLineMaxLength:(float)arg0;
- (void)set_wantsSeparateGeometryElements:(char)arg0;
- (char)_wantsSeparateGeometryElements;
- (float)discretizedStraightLineMaxLength;
- (void)dealloc;
- (SCNText *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNText *)init;
- (SCNText *)copy;
- (NSString *)description;
- (SCNText *)copyWithZone:(struct _NSZone *)arg0;
- (float)flatness;
- (void)setFlatness:(float)arg0;
- (NSString *)string;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (void)setString:(NSString *)arg0;
- (void)setAlignmentMode:(NSString *)arg0;
- (int)primitiveType;

@end
