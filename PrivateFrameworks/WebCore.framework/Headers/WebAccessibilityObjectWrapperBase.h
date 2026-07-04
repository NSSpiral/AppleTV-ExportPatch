/* Runtime dump - WebAccessibilityObjectWrapperBase
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityObjectWrapperBase : NSObject
{
    struct AccessibilityObject * m_object;
}

+ (void)accessibilitySetShouldRepostNotifications:(char)arg0;

- (void)detach;
- (NSObject *)attachmentView;
- (WebAccessibilityObjectWrapperBase *)initWithAccessibilityObject:(struct AccessibilityObject *)arg0;
- (void)accessibilityPostedNotification:(NSNotification *)arg0;
- (char)fileUploadButtonReturnsValueInTitle;
- (NSString *)accessibilityPlatformMathSubscriptKey;
- (NSString *)accessibilityPlatformMathSuperscriptKey;
- (char)updateObjectBackingStore;
- (struct AccessibilityObject *)accessibilityObject;
- (char)titleTagShouldBeUsedInDescriptionField;
- (NSString *)accessibilityTitle;
- (NSString *)accessibilityDescription;
- (NSString *)accessibilityHelpText;
- (struct CGPath *)convertPathToScreenSpace:(struct Path *)arg0;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg0;
- (NSString *)ariaLandmarkRoleDescription;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;

@end
