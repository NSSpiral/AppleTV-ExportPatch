/* Runtime dump - SANoteObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteObject : SADomainObject

@property (copy, nonatomic) NSString * contents;
@property (copy, nonatomic) NSDate * createdDate;
@property (copy, nonatomic) NSDate * lastModifiedDate;
@property (copy, nonatomic) NSString * title;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setLastModifiedDate:(NSDate *)arg0;
- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)contents;
- (void)setContents:(NSString *)arg0;
- (NSDate *)createdDate;
- (void)setCreatedDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSDate *)lastModifiedDate;

@end
