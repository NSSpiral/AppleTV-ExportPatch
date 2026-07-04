/* Runtime dump - AXEventPathInfoRepresentation
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventPathInfoRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    unsigned char _pathProximity;
    unsigned long _pathWindowContextID;
    float _pathPressure;
    float _pathMajorRadius;
    float _pathMinorRadius;
    float _pathMajorRadiusTolerance;
    float _pathTwist;
    float _pathQuality;
    float _pathDensity;
    unsigned int _pathEventMask;
    void * _pathWindow;
    struct CGPoint _pathLocation;
}

@property (nonatomic) unsigned char pathIndex;
@property (nonatomic) unsigned char pathIdentity;
@property (nonatomic) struct CGPoint pathLocation;
@property (nonatomic) unsigned long pathWindowContextID;
@property (nonatomic) unsigned char pathProximity;
@property (nonatomic) float pathPressure;
@property (nonatomic) float pathMajorRadius;
@property (nonatomic) float pathMinorRadius;
@property (nonatomic) float pathMajorRadiusTolerance;
@property (nonatomic) float pathTwist;
@property (nonatomic) float pathQuality;
@property (nonatomic) float pathDensity;
@property (nonatomic) unsigned int pathEventMask;
@property (nonatomic) void * pathWindow;

+ (char)supportsSecureCoding;
+ (NSDictionary *)representationWithPathInfo:(struct ? *)arg0;

- (AXEventPathInfoRepresentation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (AXEventPathInfoRepresentation *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)pathLocation;
- (unsigned long)pathWindowContextID;
- (void)setPathIndex:(unsigned char)arg0;
- (void)setPathIdentity:(unsigned char)arg0;
- (void)setPathProximity:(unsigned char)arg0;
- (void)setPathPressure:(float)arg0;
- (void)setPathMajorRadius:(float)arg0;
- (void)setPathLocation:(struct CGPoint)arg0;
- (void)setPathWindowContextID:(unsigned long)arg0;
- (void)setPathWindow:(void *)arg0;
- (unsigned char)pathIndex;
- (unsigned char)pathIdentity;
- (unsigned char)pathProximity;
- (float)pathPressure;
- (float)pathMajorRadius;
- (void *)pathWindow;
- (float)pathMajorRadiusTolerance;
- (void)setPathMajorRadiusTolerance:(float)arg0;
- (float)pathTwist;
- (void)setPathTwist:(float)arg0;
- (float)pathMinorRadius;
- (void)setPathMinorRadius:(float)arg0;
- (float)pathQuality;
- (void)setPathQuality:(float)arg0;
- (float)pathDensity;
- (void)setPathDensity:(float)arg0;
- (unsigned int)pathEventMask;
- (void)setPathEventMask:(unsigned int)arg0;
- (void)writeToPathInfo:(struct ? *)arg0;

@end
