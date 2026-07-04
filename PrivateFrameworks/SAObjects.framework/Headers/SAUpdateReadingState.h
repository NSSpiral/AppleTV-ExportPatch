/* Runtime dump - SAUpdateReadingState
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * readingStateId;
@property (nonatomic) int updatedGroupIndex;
@property (nonatomic) int updatedItemIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)updateReadingState;
+ (NSDictionary *)updateReadingStateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)readingStateId;
- (void)setReadingStateId:(NSString *)arg0;
- (int)updatedGroupIndex;
- (void)setUpdatedGroupIndex:(int)arg0;
- (int)updatedItemIndex;
- (void)setUpdatedItemIndex:(int)arg0;

@end
