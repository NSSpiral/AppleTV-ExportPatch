/* Runtime dump - SCNLevelOfDetail
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    struct __C3DLOD * _lod;
    int _mode;
    SCNGeometry * _geometry;
}

@property (readonly) SCNGeometry * geometry;
@property (readonly) float screenSpaceRadius;
@property (readonly) float worldSpaceDistance;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)levelOfDetailWithGeometry:(SCNGeometry *)arg0 screenSpaceRadius:(float)arg1;
+ (NSObject *)levelOfDetailWithGeometry:(SCNGeometry *)arg0 worldSpaceDistance:(float)arg1;
+ (char)supportsSecureCoding;

- (void *)__CFObject;
- (int)thresholdMode;
- (id)thresholdValue;
- (void)_setupWithGeometry:(SCNGeometry *)arg0 thresholdMode:(int)arg1 value:(float)arg2;
- (SCNLevelOfDetail *)initWithGeometry:(SCNGeometry *)arg0 thresholdMode:(int)arg1 lod:(struct __C3DLOD *)arg2;
- (float)screenSpaceRadius;
- (float)worldSpaceDistance;
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg0;
- (void)_didDecodeSCNLevelOfDetail:(id)arg0;
- (SCNLevelOfDetail *)initWithGeometry:(SCNGeometry *)arg0 thresholdMode:(int)arg1 thresholdValue:(id)arg2;
- (void)dealloc;
- (SCNLevelOfDetail *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNLevelOfDetail *)init;
- (SCNLevelOfDetail *)copy;
- (NSString *)description;
- (SCNLevelOfDetail *)copyWithZone:(struct _NSZone *)arg0;
- (SCNGeometry *)geometry;

@end
