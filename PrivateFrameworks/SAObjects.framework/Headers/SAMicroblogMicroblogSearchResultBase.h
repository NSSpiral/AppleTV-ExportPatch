/* Runtime dump - SAMicroblogMicroblogSearchResultBase
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogMicroblogSearchResultBase : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor * author;

+ (SAMicroblogMicroblogSearchResultBase *)microblogSearchResultBase;
+ (NSDictionary *)microblogSearchResultBaseWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setAuthor:(SAMicroblogTwitterPostAuthor *)arg0;
- (SAMicroblogTwitterPostAuthor *)author;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
