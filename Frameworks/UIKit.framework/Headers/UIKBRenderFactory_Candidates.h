/* Runtime dump - UIKBRenderFactory_Candidates
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory_Candidates : UIKBRenderFactory

- (UIKBRenderFactory_Candidates *)initWithRenderConfig:(UIKBRenderConfig *)arg0;
- (id)traitsForEmptyExtendedPane:(struct CGSize)arg0 rowHeight:(float)arg1 idiomPad:(char)arg2 clipCorners:(char)arg3;
- (NSString *)controlKeyBackgroundColorName;
- (NSObject *)traitsForHWRCellSize:(struct CGSize)arg0 highlighted:(char)arg1;
- (NSObject *)traitsForExtendedCellSize:(struct CGSize)arg0 highlighted:(char)arg1 groupHeader:(char)arg2 edges:(unsigned int)arg3;
- (NSObject *)traitsForSortControlBackgroundWithSize:(struct CGSize)arg0 edges:(unsigned int)arg1;
- (NSObject *)traitsForEdgeGradientWithSize:(struct CGSize)arg0;
- (NSObject *)traitsForToggleButtonWithSize:(struct CGSize)arg0 highlighted:(char)arg1 edges:(unsigned int)arg2;
- (NSObject *)traitsForCellSize:(struct CGSize)arg0 highlighted:(char)arg1 edges:(char)arg2;
- (NSString *)defaultKeyDividerColorName;
- (NSString *)controlKeyDividerColorName;
- (int)lightHighQualityEnabledBlendForm;
- (NSString *)controlKeyForegroundColorName;

@end
