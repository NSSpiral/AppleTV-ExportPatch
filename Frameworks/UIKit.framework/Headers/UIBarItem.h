/* Runtime dump - UIBarItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBarItem : NSObject <UIAppearance>
{
    char _hasCustomizableInstanceAppearanceModifications;
    char _shouldArchiveUIAppearanceTags;
}

@property (nonatomic) char enabled;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) UIImage * image;
@property (retain, nonatomic) UIImage * landscapeImagePhone;
@property (nonatomic) struct UIEdgeInsets imageInsets;
@property (nonatomic) struct UIEdgeInsets landscapeImagePhoneInsets;
@property (nonatomic) int tag;
@property (nonatomic) char _hasCustomizableInstanceAppearanceModifications;
@property (nonatomic) char _shouldArchiveUIAppearanceTags;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIBarItem *)_appearanceWhenContainedIn:(id)arg0;
+ (BBAppearance *)appearance;
+ (UIBarItem *)_appearanceRecorder;
+ (UIBarItem *)appearanceWhenContainedIn:(Class)arg0;
+ (UIBarItem *)_appearanceRecorderWhenContainedIn:(Class)arg0;
+ (UIBarItem *)appearanceForTraitCollection:(id)arg0;
+ (UIBarItem *)appearanceForTraitCollection:(id)arg0 whenContainedIn:(Class)arg1;
+ (NSArray *)_appearanceBlindViewClasses;

- (UIBarItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)_shouldArchiveUIAppearanceTags;
- (void)_setShouldArchiveUIAppearanceTags:(char)arg0;
- (void)setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (NSObject *)titleTextAttributesForState:(unsigned int)arg0;
- (char)_hasCustomizableInstanceAppearanceModifications;
- (void)_setHasCustomizableInstanceAppearanceModifications:(char)arg0;

@end
