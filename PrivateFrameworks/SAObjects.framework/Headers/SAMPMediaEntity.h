/* Runtime dump - SAMPMediaEntity
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaEntity : SADomainObject

@property (copy, nonatomic) NSString * sortTitle;
@property (copy, nonatomic) NSString * title;

+ (NSObject *)mediaEntity;
+ (NSDictionary *)mediaEntityWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void)setSortTitle:(NSString *)arg0;
- (NSString *)sortTitle;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
