/* Runtime dump - UIDeviceAppearanceContainer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceAppearanceContainer : NSObject <_UIAppearanceContainer>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_preventsAppearanceProxyCustomization;

- (NSObject *)_appearanceContainer;
- (Class)_appearanceGuideClass;

@end
