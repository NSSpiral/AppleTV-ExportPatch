/* Runtime dump - ABPersonAdditions
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonAdditions : NSObject

+ (struct __CFArray *)copyOptionalNameAffixProperties;
+ (struct __CFArray *)copyOptionalJobProperties;
+ (struct __CFArray *)copyOptionalProperties;
+ (char)isNameProperty:(int)arg0;
+ (struct __CFArray *)copyNamePropertiesWithCurrentNameFormat;
+ (struct __CFArray *)copyOptionalNameProperties;
+ (struct __CFArray *)copyNamePropertiesForEditing:(char)arg0 includeRequiredNameProperties:(char)arg1 people:(SCRCPhotoEvaluatorPeople *)arg2;
+ (struct __CFArray *)copyDefaultDisplayedProperties;
+ (struct __CFArray *)newCFArrayByUnwrappingIntegersInArray:(NSArray *)arg0;
+ (NSArray *)arrayByWrappingIntegersInCFArray:(struct __CFArray *)arg0;
+ (void)initializeAddressBookProperties;
+ (struct __CFArray *)copyNamePropertiesForEditing:(char)arg0 includeRequiredNameProperties:(char)arg1 person:(void *)arg2;
+ (struct __CFArray *)copyAllProperties;
+ (void)cloneNamePropertiesFromPerson:(void *)arg0 toPerson:(void *)arg1;
+ (struct __CFArray *)copyProperties:(struct __CFArray *)arg0 excludingProperties:(struct __CFArray *)arg1;
+ (struct __CFArray *)copyNamePropertiesForEditing:(char)arg0 person:(void *)arg1;
+ (void)person:(void *)arg0 allowsLabels:(char *)arg1 customLabels:(char *)arg2 forProperty:(int)arg3;

@end
