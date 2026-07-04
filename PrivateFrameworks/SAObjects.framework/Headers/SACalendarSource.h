/* Runtime dump - SACalendarSource
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarSource : SASource

@property (nonatomic) char strict;

+ (void *)source;
+ (NSDictionary *)sourceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (char)strict;
- (void)setStrict:(char)arg0;

@end
