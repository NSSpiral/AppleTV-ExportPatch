/* Runtime dump - MPGenericAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPGenericAction : MPAction
{
    NSMutableDictionary * _attributes;
}

@property (copy, nonatomic) NSDictionary * attributes;

+ (MPGenericAction *)genericAction;

- (void)dealloc;
- (MPGenericAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPGenericAction *)init;
- (MPGenericAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (NSString *)attributeForKey:(NSString *)arg0;

@end
