/* Runtime dump - MCGenericAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCGenericAction : MCAction
{
    NSMutableDictionary * _attributes;
}

@property (copy) NSDictionary * attributes;

+ (MCGenericAction *)genericActionForTargetPlugObjectID:(NSObject *)arg0 withAttributes:(NSDictionary *)arg1;

- (NSString *)description;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCGenericAction *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
