/* Runtime dump - MCStateOperationStringSet
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCStateOperationStringSet : MCStateOperation
{
    NSString * _string;
}

@property (copy) NSString * string;

+ (NSObject *)stateOperationForTargetPlugObjectID:(NSObject *)arg0 withStateKey:(NSString *)arg1 andString:(NSString *)arg2;

- (NSString *)description;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCStateOperationStringSet *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
