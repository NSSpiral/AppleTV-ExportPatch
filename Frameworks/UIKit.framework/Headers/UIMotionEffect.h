/* Runtime dump - UIMotionEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMotionEffect : NSObject <NSCopying, NSCoding>
{
    _UIMotionAnalyzerSettings * _preferredMotionAnalyzerSettings;
}

- (void)dealloc;
- (UIMotionEffect *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIMotionEffect *)init;
- (UIMotionEffect *)copyWithZone:(struct _NSZone *)arg0;
- (NSSet *)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg0;
- (NSDictionary *)_preferredMotionAnalyzerSettings;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg0;
- (void)_setPreferredMotionAnalyzerSettings:(NSDictionary *)arg0;

@end
