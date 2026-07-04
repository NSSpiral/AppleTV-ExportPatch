/* Runtime dump - SAPhoneCallSearchResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallSearchResult : SADomainObject

@property (copy, nonatomic) NSDate * callTime;
@property (retain, nonatomic) SAPersonAttribute * contact;
@property (copy, nonatomic) NSNumber * isNew;

- (SAPersonAttribute *)contact;
- (void)setContact:(SAPersonAttribute *)arg0;
- (NSNumber *)isNew;
- (NSString *)groupIdentifier;
- (SAPhoneCallSearchResult *)init;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (void)setIsNew:(NSNumber *)arg0;
- (NSDate *)callTime;
- (void)setCallTime:(NSDate *)arg0;

@end
