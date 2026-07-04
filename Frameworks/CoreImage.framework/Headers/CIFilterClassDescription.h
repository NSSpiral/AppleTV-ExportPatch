/* Runtime dump - CIFilterClassDescription
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFilterClassDescription : NSObject
{
    NSMutableDictionary * attributes;
    NSArray * inputKeys;
    NSArray * outputKeys;
}

+ (NSObject *)classDescriptionForClass:(Class)arg0;

- (NSArray *)inputKeys;
- (NSArray *)outputKeys;
- (CIFilterClassDescription *)initWithClass:(Class)arg0;
- (NSMutableDictionary *)attributes;

@end
