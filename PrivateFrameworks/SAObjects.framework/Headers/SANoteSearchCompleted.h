/* Runtime dump - SANoteSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * notes;
@property (copy, nonatomic) NSArray * results;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SANoteSearchCompleted *)searchCompleted;
+ (NSDictionary *)searchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)notes;
- (void)setNotes:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
