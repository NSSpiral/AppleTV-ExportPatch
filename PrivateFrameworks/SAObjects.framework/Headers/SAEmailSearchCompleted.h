/* Runtime dump - SAEmailSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * emailResults;
@property (copy, nonatomic) NSArray * results;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAEmailSearchCompleted *)searchCompleted;
+ (NSDictionary *)searchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSArray *)searchCompletedWithResults:(NSArray *)arg0;
+ (NSArray *)searchCompletedWithEmailResults:(NSArray *)arg0;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (SAEmailSearchCompleted *)initWithResults:(NSArray *)arg0;
- (SAEmailSearchCompleted *)initWithEmailResults:(NSArray *)arg0;
- (void)setEmailResults:(NSArray *)arg0;
- (NSArray *)emailResults;

@end
