/* Runtime dump - UITraitCollection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding>
{
    struct ? _builtinTraits;
    NSDictionary * _clientDefinedTraits;
}

@property (readonly, nonatomic) int userInterfaceIdiom;
@property (readonly, nonatomic) float displayScale;
@property (readonly, nonatomic) int horizontalSizeClass;
@property (readonly, nonatomic) int verticalSizeClass;

+ (char)supportsSecureCoding;
+ (UITraitCollection *)traitCollectionWithDisplayScale:(float)arg0;
+ (UITraitCollection *)traitCollectionWithHorizontalSizeClass:(int)arg0;
+ (UITraitCollection *)traitCollectionWithVerticalSizeClass:(int)arg0;
+ (UITraitCollection *)traitCollectionWithTraitsFromCollections:(id)arg0;
+ (UITraitCollection *)_emptyTraitCollection;
+ (UITraitCollection *)traitCollectionWithUserInterfaceIdiom:(int)arg0;
+ (UITraitCollection *)traitCollectionWithInteractionModel:(unsigned int)arg0;
+ (UITraitCollection *)traitCollectionWithTouchLevel:(int)arg0;
+ (UITraitCollection *)_traitCollectionWithValue:(id)arg0 forTraitNamed:(id)arg1;

- (char)tsu_isCompactWidth;
- (char)tsu_isCompactHeight;
- (void)dealloc;
- (int)userInterfaceIdiom;
- (UITraitCollection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UITraitCollection *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)verticalSizeClass;
- (int)horizontalSizeClass;
- (UITraitCollection *)copyWithZone:(struct _NSZone *)arg0;
- (UITraitCollection *)_initWithBuiltinTraitStorage:(struct ? *)arg0 clientDefinedTraits:(NSDictionary *)arg1;
- (float)displayScale;
- (char)containsTraitsInCollection:(id)arg0;
- (unsigned int)interactionModel;
- (id)_valueForTraitNamed:(id)arg0;
- (int)_compare:(NSObject *)arg0;
- (NSString *)_namedImageDescription;
- (char)_matchesIntersectionWithTraitCollection:(UITraitCollection *)arg0;
- (int)touchLevel;

@end
