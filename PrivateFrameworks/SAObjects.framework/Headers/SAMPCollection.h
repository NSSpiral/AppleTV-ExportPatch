/* Runtime dump - SAMPCollection
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPCollection : SAMPMediaEntity

@property (copy, nonatomic) NSArray * items;

+ (CoreDAVItemWithNoChildren *)collection;
+ (NSDictionary *)collectionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
