/* Runtime dump - UIAccessibilityElement
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityElement : NSObject <UIAccessibilityIdentification>

@property (nonatomic) id accessibilityContainer;
@property (nonatomic) char isAccessibilityElement;
@property (retain, nonatomic) NSString * accessibilityLabel;
@property (retain, nonatomic) NSString * accessibilityHint;
@property (retain, nonatomic) NSString * accessibilityValue;
@property (nonatomic) struct CGRect accessibilityFrame;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * accessibilityIdentifier;

- (UIAccessibilityElement *)initWithAccessibilityContainer:(NSObject *)arg0;

@end
